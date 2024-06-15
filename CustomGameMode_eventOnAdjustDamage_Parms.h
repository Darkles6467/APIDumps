#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAdjustDamage_Parms
{
	char __padding[0x48L];
	float& DefaultDamageField() { return *GetNativePointerField<float*>(this, "CustomGameMode_eventOnAdjustDamage_Parms.DefaultDamage"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "CustomGameMode_eventOnAdjustDamage_Parms.ReturnValue"); }
};

