#include "services.hpp"

#include <array>
#include <atomic>
#include <chrono>
#include <fstream>
#include <random>
#include <thread>

namespace pls::services {
namespace {
constexpr char file_header[] = "PLS-OFFLINE-ID-1\n";
std::atomic<OfflineServices*> installed{nullptr};

bool valid_identifier(std::string_view id) {
    if (id.size() != 32) return false;
    for (const char c : id) {
        if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'))) return false;
    }
    return true;
}

std::string random_identifier() {
    std::random_device source;
    std::uniform_int_distribution<unsigned int> octet(0, 255);
    constexpr char hex[] = "0123456789abcdef";
    std::string id;
    id.reserve(32);
    for (std::size_t i = 0; i < 16; ++i) {
        const auto value = octet(source);
        id.push_back(hex[value >> 4]);
        id.push_back(hex[value & 15]);
    }
    return id;
}

std::string read_identifier(const std::filesystem::path& path) {
    if (!std::filesystem::exists(path)) return {};
    if (!std::filesystem::is_regular_file(path) || std::filesystem::file_size(path) > 128) {
        throw PersistenceError("Invalid persistent offline identity file");
    }
    std::ifstream input(path, std::ios::binary);
    if (!input) throw PersistenceError("Cannot read persistent offline identity");
    const std::string text((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    const std::string prefix(file_header);
    if (text.size() != prefix.size() + 33 || text.compare(0, prefix.size(), prefix) != 0 || text.back() != '\n') {
        throw PersistenceError("Malformed persistent offline identity");
    }
    const auto id = text.substr(prefix.size(), 32);
    if (!valid_identifier(id)) throw PersistenceError("Malformed persistent offline identifier");
    return id;
}

class DirectoryLock final {
public:
    explicit DirectoryLock(std::filesystem::path path) : path_(std::move(path)) {
        for (unsigned int attempt = 0; attempt < 100; ++attempt) {
            std::error_code error;
            if (std::filesystem::create_directory(path_, error)) {
                held_ = true;
                return;
            }
            if (error && error != std::errc::file_exists) throw PersistenceError("Cannot lock offline identity storage");
            std::this_thread::sleep_for(std::chrono::milliseconds(2));
        }
        throw PersistenceError("Offline identity storage is busy; stale locks require explicit recovery");
    }
    ~DirectoryLock() {
        if (held_) {
            std::error_code ignored;
            std::filesystem::remove(path_, ignored);
        }
    }
    DirectoryLock(const DirectoryLock&) = delete;
    DirectoryLock& operator=(const DirectoryLock&) = delete;
private:
    std::filesystem::path path_;
    bool held_ = false;
};
} // namespace

OfflineServices::OfflineServices(std::filesystem::path preferences_directory)
    : identity_path_(std::move(preferences_directory) / "port-services" / "device-id.txt") {}

std::string OfflineServices::device_id() {
    std::lock_guard<std::mutex> thread_guard(identity_mutex_);
    if (!cached_id_.empty()) return cached_id_;
    try {
        std::filesystem::create_directories(identity_path_.parent_path());
        DirectoryLock process_guard(identity_path_.parent_path() / "device-id.lock");
        cached_id_ = read_identifier(identity_path_);
        if (!cached_id_.empty()) return cached_id_;
        const auto id = random_identifier();
        const auto temporary = identity_path_.parent_path() / ("device-id.tmp-" + id);
        {
            std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
            if (!output) throw PersistenceError("Cannot create persistent offline identity");
            output << file_header << id << '\n';
            output.flush();
            if (!output) throw PersistenceError("Cannot persist offline identity");
        }
        try {
            std::filesystem::rename(temporary, identity_path_);
        } catch (...) {
            std::error_code ignored;
            std::filesystem::remove(temporary, ignored);
            throw;
        }
        cached_id_ = read_identifier(identity_path_);
        return cached_id_;
    } catch (const PersistenceError&) {
        throw;
    } catch (const std::exception& error) {
        throw PersistenceError(std::string("Offline identity persistence failed: ") + error.what());
    }
}

std::vector<std::uint8_t> OfflineServices::register_local_wire() {
    (void)device_id();
    // Exact local response of main.AppData.CgiRegist in the reconstructed source.
    // The first line is not replaced with the host's installation identifier.
    return {'1', '\n', '2', '0', '2'};
}

const std::filesystem::path& OfflineServices::identity_path() const noexcept { return identity_path_; }
Availability OfflineServices::billing_availability() const noexcept { return Availability::unavailable; }
Availability OfflineServices::refresh_billing_inventory(bool) const noexcept { return Availability::unavailable; }
bool OfflineServices::purchase(std::string_view) const noexcept { return false; }
bool OfflineServices::restore_purchases() const noexcept { return false; }
void OfflineServices::process_pending_purchase_tasks() const noexcept {}
bool OfflineServices::show_rewarded_offers() const noexcept { return false; }
AdvertisementState OfflineServices::advertisements() const noexcept { return {}; }
Licensing OfflineServices::licensing() const noexcept { return Licensing::not_applicable; }
bool OfflineServices::push_enabled() const noexcept { return false; }
void OfflineServices::set_push_enabled(bool) const noexcept {}
bool OfflineServices::send_notification(std::int64_t, std::u16string_view) const noexcept { return false; }
bool OfflineServices::send_push(std::u16string_view, std::u16string_view) const noexcept { return false; }
void OfflineServices::cancel_notifications() const noexcept {}
std::vector<std::u16string> OfflineServices::received_notifications() const { return {}; }

void install(OfflineServices* services) noexcept { installed.store(services, std::memory_order_release); }
OfflineServices& active() {
    auto* service = installed.load(std::memory_order_acquire);
    if (!service) throw std::logic_error("Offline services host was not installed");
    return *service;
}
std::vector<std::uint8_t> register_local_wire() { return active().register_local_wire(); }
std::string device_id() { return active().device_id(); }
bool purchase(std::string_view) noexcept { return false; }
void refresh_billing_inventory() noexcept {}
std::int32_t ad_height() noexcept { return 0; }
bool advertisements_enabled() noexcept { return false; }
bool notifications_enabled() noexcept { return false; }
} // namespace pls::services
