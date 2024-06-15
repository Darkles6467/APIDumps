#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeOscillator : USoundNode
{
	char __padding[0x28L];
	float& AmplitudeMinField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.AmplitudeMin"); }
	float& AmplitudeMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.AmplitudeMax"); }
	float& FrequencyMinField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.FrequencyMin"); }
	float& FrequencyMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.FrequencyMax"); }
	float& OffsetMinField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.OffsetMin"); }
	float& OffsetMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.OffsetMax"); }
	float& CenterMinField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.CenterMin"); }
	float& CenterMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeOscillator.CenterMax"); }

	// Functions

	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeOscillator.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

