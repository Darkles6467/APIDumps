#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms
{
	char __padding[0x14L];
	float& TimeStamp0Field() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms.TimeStamp0"); }
	unsigned int& View0Field() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms.View0"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms.TimeStamp"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveDualOnlyRotation_Parms.View"); }
};

