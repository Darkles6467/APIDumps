#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventHandleShieldDamageBlocking_Parms
{
	char __padding[0x48L];
	AShooterCharacter * ForShooterCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalItem_eventHandleShieldDamageBlocking_Parms.ForShooterCharacter"); }
	float& DamageInField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventHandleShieldDamageBlocking_Parms.DamageIn"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventHandleShieldDamageBlocking_Parms.ReturnValue"); }
};

