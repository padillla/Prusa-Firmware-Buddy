#pragma once

#include "DialogStateful.hpp"
#include "window_text.hpp"
#include "window_roll_text.hpp"
#include "window_icon.hpp"
#include "DialogStateful.hpp"
#include "client_fsm_types.h"
#include "radio_button_fsm.hpp"

class DialogQuickPause : public AddSuperWindow<IDialogMarlin> {
    window_icon_t icon;
    window_text_t text;
    window_roll_text_t gcode_name;
    RadioButtonFsm<PhasesQuickPause> radio;

protected:
    virtual bool change(uint8_t phase, fsm::PhaseData data) override;

public:
    DialogQuickPause(fsm::BaseData data);
};