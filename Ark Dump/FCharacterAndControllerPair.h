#pragma once

#include "BaseDeclarations.h"
struct FCharacterAndControllerPair
{
	char __padding[0x10L];
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "FCharacterAndControllerPair.Character"); }
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "FCharacterAndControllerPair.Controller"); }

	// Functions

	bool IsAliveAndValid() { return NativeCall<bool>(this, "FCharacterAndControllerPair.IsAliveAndValid"); }
};

