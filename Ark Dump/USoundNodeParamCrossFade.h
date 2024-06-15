#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeDistanceCrossFade : USoundNode
{
	char __padding[0x10L];
	TArray<FDistanceDatum>& CrossFadeInputField() { return *GetNativePointerField<TArray<FDistanceDatum>*>(this, "USoundNodeDistanceCrossFade.CrossFadeInput"); }

	// Functions

	bool AllowCrossfading(FActiveSound * ActiveSound) { return NativeCall<bool, FActiveSound *>(this, "USoundNodeDistanceCrossFade.AllowCrossfading", ActiveSound); }
	float GetCurrentDistance(FAudioDevice * AudioDevice, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams) { return NativeCall<float, FAudioDevice *, FActiveSound *, const FSoundParseParameters *>(this, "USoundNodeDistanceCrossFade.GetCurrentDistance", AudioDevice, ActiveSound, ParseParams); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeDistanceCrossFade.InsertChildNode", Index); }
	float MaxAudibleDistance(float CurrentMaxDistance) { return NativeCall<float, float>(this, "USoundNodeDistanceCrossFade.MaxAudibleDistance", CurrentMaxDistance); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeDistanceCrossFade.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeDistanceCrossFade.RemoveChildNode", Index); }
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade
{
	char __padding[0x8L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "USoundNodeParamCrossFade.ParamName"); }

	// Functions

	float GetCurrentDistance(FAudioDevice * AudioDevice, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams) { return NativeCall<float, FAudioDevice *, FActiveSound *, const FSoundParseParameters *>(this, "USoundNodeParamCrossFade.GetCurrentDistance", AudioDevice, ActiveSound, ParseParams); }
};

