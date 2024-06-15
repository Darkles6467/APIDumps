#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnExtraShooterCharacterTick_Parms
{
	char __padding[0x10L];
	AShooterCharacter * ForCharField() { return GetNativePointerField<AShooterCharacter *>(this, "CustomGameState_eventOnExtraShooterCharacterTick_Parms.ForChar"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "CustomGameState_eventOnExtraShooterCharacterTick_Parms.DeltaTime"); }
};

