#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveWithRotation_Parms
{
	char __padding[0x48L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.TimeStamp"); }
	FVector_NetQuantize100& InAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.InAccel"); }
	FVector_NetQuantize100& ClientLocField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.ClientLoc"); }
	char& CompressedMoveFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.CompressedMoveFlags"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.View"); }
	FName& ClientBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.ClientBaseBoneName"); }
	char& ClientMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.ClientMovementMode"); }
	FRotator& ClientRotationField() { return *GetNativePointerField<FRotator*>(this, "CharacterMovementComponent_eventServerMoveWithRotation_Parms.ClientRotation"); }
};

