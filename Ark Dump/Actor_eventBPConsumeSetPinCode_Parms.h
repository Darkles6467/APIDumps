#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPConsumeSetPinCode_Parms
{
	char __padding[0x18L];
	int& appledPinCodeField() { return *GetNativePointerField<int*>(this, "Actor_eventBPConsumeSetPinCode_Parms.appledPinCode"); }
	bool& bIsSettingField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPConsumeSetPinCode_Parms.bIsSetting"); }
	int& TheCustomIndexField() { return *GetNativePointerField<int*>(this, "Actor_eventBPConsumeSetPinCode_Parms.TheCustomIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPConsumeSetPinCode_Parms.ReturnValue"); }
};

