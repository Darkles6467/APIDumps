#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventGetStandingAnimation_Parms
{
	char __padding[0x10L];
	float& OutBlendInTimeField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventGetStandingAnimation_Parms.OutBlendInTime"); }
	float& OutBlendOutTimeField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventGetStandingAnimation_Parms.OutBlendOutTime"); }
	UAnimSequence * ReturnValueField() { return GetNativePointerField<UAnimSequence *>(this, "ShooterWeapon_eventGetStandingAnimation_Parms.ReturnValue"); }
};

