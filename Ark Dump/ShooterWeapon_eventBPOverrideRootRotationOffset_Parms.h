#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPOverrideRootRotationOffset_Parms
{
	char __padding[0x18L];
	FRotator& InRootRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterWeapon_eventBPOverrideRootRotationOffset_Parms.InRootRotation"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "ShooterWeapon_eventBPOverrideRootRotationOffset_Parms.ReturnValue"); }
};

