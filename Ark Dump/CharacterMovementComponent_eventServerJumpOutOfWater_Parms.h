#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerJumpOutOfWater_Parms
{
	char __padding[0x10L];
	FVector_NetQuantize100& WallNormalField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerJumpOutOfWater_Parms.WallNormal"); }
	char& JumpFlagField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerJumpOutOfWater_Parms.JumpFlag"); }
};

