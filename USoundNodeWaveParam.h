#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeWaveParam : USoundNode
{
	char __padding[0x8L];
	FName& WaveParameterNameField() { return *GetNativePointerField<FName*>(this, "USoundNodeWaveParam.WaveParameterName"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "USoundNodeWaveParam.GetDuration"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeWaveParam.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

