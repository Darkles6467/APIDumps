#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeLooping : USoundNode
{

	// Functions

	float MaxAudibleDistance(float CurrentMaxDistance) { return NativeCall<float, float>(this, "USoundNodeLooping.MaxAudibleDistance", CurrentMaxDistance); }
	bool NotifyWaveInstanceFinished(FWaveInstance * InWaveInstance) { return NativeCall<bool, FWaveInstance *>(this, "USoundNodeLooping.NotifyWaveInstanceFinished", InWaveInstance); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeLooping.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

