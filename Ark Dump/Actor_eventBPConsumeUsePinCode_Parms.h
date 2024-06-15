#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPConsumeUsePinCode_Parms
{
	char __padding[0x18L];
	int& appledPinCodeField() { return *GetNativePointerField<int*>(this, "Actor_eventBPConsumeUsePinCode_Parms.appledPinCode"); }
	bool& bIsActivatingField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPConsumeUsePinCode_Parms.bIsActivating"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPConsumeUsePinCode_Parms.ReturnValue"); }
};

