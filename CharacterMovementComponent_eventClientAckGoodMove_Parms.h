#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventClientAckGoodMove_Parms
{
	char __padding[0x4L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientAckGoodMove_Parms.TimeStamp"); }
};

