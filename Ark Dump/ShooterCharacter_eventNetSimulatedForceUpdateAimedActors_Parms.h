#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventNetSimulatedForceUpdateAimedActors_Parms
{
	char __padding[0x4L];
	float& OverrideMaxDistanceField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventNetSimulatedForceUpdateAimedActors_Parms.OverrideMaxDistance"); }
};

