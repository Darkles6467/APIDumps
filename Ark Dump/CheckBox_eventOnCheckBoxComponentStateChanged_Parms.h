#pragma once

#include "BaseDeclarations.h"
struct CheckBox_eventOnCheckBoxComponentStateChanged_Parms
{
	char __padding[0x1L];
	bool& bIsCheckedField() { return *GetNativePointerField<bool*>(this, "CheckBox_eventOnCheckBoxComponentStateChanged_Parms.bIsChecked"); }
};

