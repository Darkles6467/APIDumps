#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeDelay : USoundNode
{
	char __padding[0x8L];
	float& DelayMinField() { return *GetNativePointerField<float*>(this, "USoundNodeDelay.DelayMin"); }
	float& DelayMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeDelay.DelayMax"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "USoundNodeDelay.GetDuration"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeDelay.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

