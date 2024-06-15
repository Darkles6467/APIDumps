#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPConstrainAspectRatio_Parms
{
	char __padding[0x8L];
	float& OutAspectRatioField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPConstrainAspectRatio_Parms.OutAspectRatio"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPConstrainAspectRatio_Parms.ReturnValue"); }
};

