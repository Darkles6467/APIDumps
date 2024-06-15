#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeRandom : USoundNode
{
	char __padding[0x30L];
	TArray<float>& WeightsField() { return *GetNativePointerField<TArray<float>*>(this, "USoundNodeRandom.Weights"); }
	int& PreselectAtLevelLoadField() { return *GetNativePointerField<int*>(this, "USoundNodeRandom.PreselectAtLevelLoad"); }
	TArray<bool>& HasBeenUsedField() { return *GetNativePointerField<TArray<bool>*>(this, "USoundNodeRandom.HasBeenUsed"); }
	int& NumRandomUsedField() { return *GetNativePointerField<int*>(this, "USoundNodeRandom.NumRandomUsed"); }

	// Functions

	void CreateStartingConnectors() { NativeCall<void>(this, "USoundNodeRandom.CreateStartingConnectors"); }
	void FixHasBeenUsedArray() { NativeCall<void>(this, "USoundNodeRandom.FixHasBeenUsedArray"); }
	unsigned int GetMaxChildNodes() { return NativeCall<unsigned int>(this, "USoundNodeRandom.GetMaxChildNodes"); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeRandom.InsertChildNode", Index); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeRandom.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void PostLoad() { NativeCall<void>(this, "USoundNodeRandom.PostLoad"); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeRandom.RemoveChildNode", Index); }
};

