#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerNetEndClimbingLadder_Parms
{
	char __padding[0x14L];
	bool& bIsClimbOverField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerNetEndClimbingLadder_Parms.bIsClimbOver"); }
	FVector& ClimbOverLocField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventServerNetEndClimbingLadder_Parms.ClimbOverLoc"); }
	float& RightDirField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerNetEndClimbingLadder_Parms.RightDir"); }
};

