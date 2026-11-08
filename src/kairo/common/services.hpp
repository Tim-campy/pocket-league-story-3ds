#pragma once

#include <cstdint>
#include <filesystem>
#include <mutex>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace pls::services {

class PersistenceError : public std::runtime_error {
public:
    using std::runtime_error::runtime_error;
};

enum class Availability { unavailable };
enum class Licensing { not_applicable };

struct AdvertisementState {
    bool enabled = false;
    bool loaded = false;
    bool started = false;
    std::int32_t height = 0;
};

// Platform decisions, not a replacement save model. No method accepts a mutable
// game save or invokes a purchase/provisioning callback.
class OfflineServices final {
public:
    explicit OfflineServices(std::filesystem::path preferences_directory);
    std::string device_id();
    std::vector<std::uint8_t> register_local_wire();
    const std::filesystem::path& identity_path() const noexcept;

    Availability billing_availability() const noexcept;
    Availability refresh_billing_inventory(bool detail = false) const noexcept;
    bool purchase(std::string_view product_id) const noexcept;
    bool restore_purchases() const noexcept;
    void process_pending_purchase_tasks() const noexcept;
    bool show_rewarded_offers() const noexcept;

    AdvertisementState advertisements() const noexcept;
    Licensing licensing() const noexcept;
    bool push_enabled() const noexcept;
    void set_push_enabled(bool requested) const noexcept;
    bool send_notification(std::int64_t delay, std::u16string_view text) const noexcept;
    bool send_push(std::u16string_view friend_id, std::u16string_view text) const noexcept;
    void cancel_notifications() const noexcept;
    std::vector<std::u16string> received_notifications() const;

private:
    std::filesystem::path identity_path_;
    std::mutex identity_mutex_;
    std::string cached_id_;
};

// Installed before the generated game starts; the host owns the object's life.
// Passing nullptr removes it. These free hooks give generated native bridges a
// small ABI without introducing a second game/runtime object model.
void install(OfflineServices* services) noexcept;
OfflineServices& active();
std::vector<std::uint8_t> register_local_wire();
std::string device_id();
bool purchase(std::string_view product_id) noexcept;
void refresh_billing_inventory() noexcept;
std::int32_t ad_height() noexcept;
bool advertisements_enabled() noexcept;
bool notifications_enabled() noexcept;

} // namespace pls::services
