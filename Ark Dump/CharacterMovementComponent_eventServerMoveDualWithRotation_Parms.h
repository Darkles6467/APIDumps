#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveDualWithRotation_Parms
{
	char __padding[0x70L];
	float& TimeStamp0Field() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.TimeStamp0"); }
	FVector_NetQuantize100& InAccel0Field() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.InAccel0"); }
	char& PendingFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.PendingFlags"); }
	unsigned int& View0Field() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.View0"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.TimeStamp"); }
	FVector_NetQuantize100& InAccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.InAccel"); }
	FVector_NetQuantize100& ClientLocField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.ClientLoc"); }
	char& NewFlagsField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.NewFlags"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.View"); }
	FName& ClientBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.ClientBaseBoneName"); }
	char& ClientMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.ClientMovementMode"); }
	FRotator& InRotation0Field() { return *GetNativePointerField<FRotator*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.InRotation0"); }
	FRotator& InRotationField() { return *GetNativePointerField<FRotator*>(this, "CharacterMovementComponent_eventServerMoveDualWithRotation_Parms.InRotation"); }
};

