#pragma once
#include "semantic_runtime.hpp"
namespace pls::kairo {
struct DialogButton {std::int32_t result{};cs::String label;};
struct DialogRequest {std::int32_t type{};cs::String title,message;std::vector<DialogButton> buttons;};
class DialogPresenter : public cs::Object {
public:virtual std::int32_t Present(const DialogRequest&)=0;
};
// Labels come from generated/localized code. This layer contains no extracted
// game text and never chooses a positive result on behalf of the user.
void install_dialog_service(cs::Ref<DialogPresenter>,cs::Delegate<cs::Array<cs::String>(std::int32_t)> labels);
std::int32_t show_dialog(std::int32_t type,cs::String title,cs::String message,cs::String custom_buttons={});
}
