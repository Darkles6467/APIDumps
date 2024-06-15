#pragma once

#include "BaseDeclarations.h"
struct GamepadTextInputDismissed_t
{
	char __padding[0x8L];
	bool& m_bSubmittedField() { return *GetNativePointerField<bool*>(this, "GamepadTextInputDismissed_t.m_bSubmitted"); }
	unsigned int& m_unSubmittedTextField() { return *GetNativePointerField<unsigned int*>(this, "GamepadTextInputDismissed_t.m_unSubmittedText"); }
};

