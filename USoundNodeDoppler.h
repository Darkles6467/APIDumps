#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeDoppler : USoundNode
{
	char __padding[0x8L];
	float& DopplerIntensityField() { return *GetNativePointerField<float*>(this, "USoundNodeDoppler.DopplerIntensity"); }

	// Functions

	float GetDopplerPitchMultiplier(const FListener * InListener, const FVector Location, const FVector Velocity) { return NativeCall<float, const FListener *, const FVector, const FVector>(this, "USoundNodeDoppler.GetDopplerPitchMultiplier", InListener, Location, Velocity); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeDoppler.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

