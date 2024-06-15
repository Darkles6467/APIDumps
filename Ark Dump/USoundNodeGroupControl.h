#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeGroupControl : USoundNode
{
	char __padding[0x10L];
	TArray<int>& GroupSizesField() { return *GetNativePointerField<TArray<int>*>(this, "USoundNodeGroupControl.GroupSizes"); }

	// Functions

	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeGroupControl.InsertChildNode", Index); }
	bool NotifyWaveInstanceFinished(FWaveInstance * WaveInstance) { return NativeCall<bool, FWaveInstance *>(this, "USoundNodeGroupControl.NotifyWaveInstanceFinished", WaveInstance); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeGroupControl.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeGroupControl.RemoveChildNode", Index); }
};

