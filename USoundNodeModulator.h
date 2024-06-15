#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeModulator : USoundNode
{
	char __padding[0x10L];
	float& PitchMinField() { return *GetNativePointerField<float*>(this, "USoundNodeModulator.PitchMin"); }
	float& PitchMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeModulator.PitchMax"); }
	float& VolumeMinField() { return *GetNativePointerField<float*>(this, "USoundNodeModulator.VolumeMin"); }
	float& VolumeMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeModulator.VolumeMax"); }

	// Functions

	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeModulator.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

