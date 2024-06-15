#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventSetCarriedPitchYaw_Parms
{
	char __padding[0x8L];
	float& NewCarriedPitchField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventSetCarriedPitchYaw_Parms.NewCarriedPitch"); }
	float& NewCarriedYawField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventSetCarriedPitchYaw_Parms.NewCarriedYaw"); }
};

