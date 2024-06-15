#pragma once

#include "BaseDeclarations.h"
struct FSoundParseParameters
{
	char __padding[0x80L];
	FNotifyBufferFinishedHooks& NotifyBufferFinishedHooksField() { return *GetNativePointerField<FNotifyBufferFinishedHooks*>(this, "FSoundParseParameters.NotifyBufferFinishedHooks"); }
	USoundClass * SoundClassField() { return GetNativePointerField<USoundClass *>(this, "FSoundParseParameters.SoundClass"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FSoundParseParameters.Transform"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FSoundParseParameters.Velocity"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.Volume"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.VolumeMultiplier"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.Pitch"); }
	float& HighFrequencyGainField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.HighFrequencyGain"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.StartTime"); }
	float& OmniRadiusField() { return *GetNativePointerField<float*>(this, "FSoundParseParameters.OmniRadius"); }

	// Functions

};

