#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientSpawnEmitter_Parms
{
	char __padding[0x50L];
	FTransform& EmitterTransformField() { return *GetNativePointerField<FTransform*>(this, "PrimalBuff_MissionData_eventClientSpawnEmitter_Parms.EmitterTransform"); }
	float& EmitterLifespanField() { return *GetNativePointerField<float*>(this, "PrimalBuff_MissionData_eventClientSpawnEmitter_Parms.EmitterLifespan"); }

	// Functions

};

