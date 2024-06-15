#pragma once

#include "BaseDeclarations.h"
struct FDestructibleAdvancedParameters
{
	char __padding[0x10L];
	float& DamageCapField() { return *GetNativePointerField<float*>(this, "FDestructibleAdvancedParameters.DamageCap"); }
	float& ImpactVelocityThresholdField() { return *GetNativePointerField<float*>(this, "FDestructibleAdvancedParameters.ImpactVelocityThreshold"); }
	float& MaxChunkSpeedField() { return *GetNativePointerField<float*>(this, "FDestructibleAdvancedParameters.MaxChunkSpeed"); }
	float& FractureImpulseScaleField() { return *GetNativePointerField<float*>(this, "FDestructibleAdvancedParameters.FractureImpulseScale"); }

	// Functions

};

