#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMove_Parms
{
	char __padding[0x40L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMove_Parms.TimeStamp"); }
	FVector_NetQuantize100& InAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMove_Parms.InAccel"); }
	FVector_NetQuantize100& ClientLocField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMove_Parms.ClientLoc"); }
	char& CompressedMoveFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMove_Parms.CompressedMoveFlags"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMove_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMove_Parms.View"); }
	FName& ClientBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventServerMove_Parms.ClientBaseBoneName"); }
	char& ClientMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMove_Parms.ClientMovementMode"); }
};

