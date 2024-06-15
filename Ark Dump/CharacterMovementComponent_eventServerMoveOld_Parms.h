#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveOld_Parms
{
	char __padding[0x14L];
	float& OldTimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveOld_Parms.OldTimeStamp"); }
	FVector_NetQuantize100& OldAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveOld_Parms.OldAccel"); }
	char& OldMoveFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveOld_Parms.OldMoveFlags"); }
};

