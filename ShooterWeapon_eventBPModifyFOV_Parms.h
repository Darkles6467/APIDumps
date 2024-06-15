#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPModifyFOV_Parms
{
	char __padding[0x8L];
	float& inFOVField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPModifyFOV_Parms.inFOV"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPModifyFOV_Parms.ReturnValue"); }

	// Functions

};

