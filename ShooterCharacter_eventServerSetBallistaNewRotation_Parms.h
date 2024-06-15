#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSetBallistaNewRotation_Parms
{
	char __padding[0x8L];
	float& PitchField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerSetBallistaNewRotation_Parms.Pitch"); }
	float& YawField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerSetBallistaNewRotation_Parms.Yaw"); }
};

