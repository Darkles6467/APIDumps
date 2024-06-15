#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms
{
	char __padding[0x28L];
	char& TypeField() { return *GetNativePointerField<char*>(this, "ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms.Type"); }
	char& ModeField() { return *GetNativePointerField<char*>(this, "ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms.Mode"); }
	FVector_NetQuantize100& DirectionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms.Direction"); }
	FVector_NetQuantize100& PositionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms.Position"); }
	FVector_NetQuantizeNormal& NormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterWeapon_Climb_eventSetClimbingAnchorPoint_Parms.Normal"); }
};

