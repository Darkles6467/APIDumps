#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveOldWithRotation_Parms
{
	char __padding[0x20L];
	float& OldTimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveOldWithRotation_Parms.OldTimeStamp"); }
	FVector_NetQuantize100& OldAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveOldWithRotation_Parms.OldAccel"); }
	char& OldMoveFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveOldWithRotation_Parms.OldMoveFlags"); }
	FRotator& OldRotationField() { return *GetNativePointerField<FRotator*>(this, "CharacterMovementComponent_eventServerMoveOldWithRotation_Parms.OldRotation"); }
};

