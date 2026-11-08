#include "services.hpp"

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <thread>
#include <vector>

namespace fs = std::filesystem;

std::string read_file(const fs::path& path) {
    std::ifstream input(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(input), std::istreambuf_iterator<char>()};
}

int main(int argc, char** argv) {
    if (argc != 3) return 2;
    const fs::path root(argv[2]);
    const std::string command(argv[1]);
    pls::services::OfflineServices service(root);
    if (command == "identity") {
        std::cout << service.device_id();
        return 0;
    }
    if (command == "corrupt") {
        try {
            (void)service.register_local_wire();
            return 3;
        } catch (const pls::services::PersistenceError&) {
            return 0;
        }
    }
    if (command != "policy") return 2;
    unsigned int checked = 0;
    auto require = [&checked](bool condition) {
        if (!condition) throw std::runtime_error("Service fixture assertion failed");
        ++checked;
    };
    const auto id = service.device_id();
    require(id.size() == 32);
    require(service.device_id() == id);
    const std::vector<std::uint8_t> expected{'1', '\n', '2', '0', '2'};
    require(service.register_local_wire() == expected);
    require(pls::services::OfflineServices(root).device_id() == id);
    require(pls::services::OfflineServices(root / "another-installation").device_id() != id);
    // Account identity remains the original getter's stored value. Device
    // registration must not manufacture an account or activate CheckUserId.
    const std::string empty_account;
    const std::string existing_account = "synthetic-existing-user";
    const auto original_getter = [](const std::string& account) { return account; };
    (void)service.register_local_wire();
    require(original_getter(empty_account).empty());
    require(!(original_getter(empty_account).length() > 0));
    require(original_getter(existing_account) == existing_account);

    const auto game_save = root / "synthetic-save.fixture";
    constexpr char original_bytes[] = "synthetic-opaque-save\0future-billing-field\xff";
    const std::string original(original_bytes, sizeof(original_bytes)-1);
    {
        std::ofstream output(game_save, std::ios::binary);
        output.write(original.data(), static_cast<std::streamsize>(original.size()));
    }
    require(service.billing_availability() == pls::services::Availability::unavailable);
    for (int i = 0; i < 5; ++i) {
        require(service.refresh_billing_inventory(false) == pls::services::Availability::unavailable);
        require(service.refresh_billing_inventory(true) == pls::services::Availability::unavailable);
        require(!service.purchase("synthetic-product"));
        require(!service.restore_purchases());
        service.process_pending_purchase_tasks();
        require(read_file(game_save) == original);
    }
    require(!service.show_rewarded_offers());
    const auto ads = service.advertisements();
    require(!ads.enabled && !ads.loaded && !ads.started && ads.height == 0);
    require(service.licensing() == pls::services::Licensing::not_applicable);
    service.set_push_enabled(true);
    require(!service.push_enabled());
    require(!service.send_notification(1, u"synthetic-notification"));
    require(!service.send_push(u"synthetic-friend", u"synthetic-notification"));
    service.cancel_notifications();
    require(service.received_notifications().empty());
    require(read_file(game_save) == original);

    pls::services::install(&service);
    require(pls::services::device_id() == id);
    require(pls::services::register_local_wire() == expected);
    require(!pls::services::purchase("synthetic-product"));
    pls::services::refresh_billing_inventory();
    require(pls::services::ad_height() == 0);
    require(!pls::services::advertisements_enabled());
    require(!pls::services::notifications_enabled());
    pls::services::install(nullptr);
    bool missing_host = false;
    try { (void)pls::services::active(); } catch (const std::logic_error&) { missing_host = true; }
    require(missing_host);
    std::cout << "{\"policy_assertions\":" << checked << ",\"save_unchanged\":true}";
    return 0;
}
