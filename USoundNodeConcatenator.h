#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeConcatenator : USoundNode
{
	char __padding[0x10L];
	TArray<float>& InputVolumeField() { return *GetNativePointerField<TArray<float>*>(this, "USoundNodeConcatenator.InputVolume"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "USoundNodeConcatenator.GetDuration"); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeConcatenator.InsertChildNode", Index); }
	bool NotifyWaveInstanceFinished(FWaveInstance * WaveInstance) { return NativeCall<bool, FWaveInstance *>(this, "USoundNodeConcatenator.NotifyWaveInstanceFinished", WaveInstance); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeConcatenator.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeConcatenator.RemoveChildNode", Index); }
};

