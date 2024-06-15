#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPOverrideAimDirection_Parms
{
	char __padding[0x18L];
	FVector& DesiredAimDirectionField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPOverrideAimDirection_Parms.DesiredAimDirection"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPOverrideAimDirection_Parms.ReturnValue"); }
};

