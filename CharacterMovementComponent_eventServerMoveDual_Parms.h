#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveDual_Parms
{
	char __padding[0x58L];
	float& TimeStamp0Field() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.TimeStamp0"); }
	FVector_NetQuantize100& InAccel0Field() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.InAccel0"); }
	char& PendingFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.PendingFlags"); }
	unsigned int& View0Field() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.View0"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.TimeStamp"); }
	FVector_NetQuantize100& InAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.InAccel"); }
	FVector_NetQuantize100& ClientLocField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.ClientLoc"); }
	char& NewFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.NewFlags"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.View"); }
	FName& ClientBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.ClientBaseBoneName"); }
	char& ClientMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDual_Parms.ClientMovementMode"); }
};

