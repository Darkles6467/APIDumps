#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventServerMoveOnlyRotation_Parms
{
	char __padding[0xcL];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventServerMoveOnlyRotation_Parms.TimeStamp"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventServerMoveOnlyRotation_Parms.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "CharacterMovementComponent_eventServerMoveOnlyRotation_Parms.View"); }
};

