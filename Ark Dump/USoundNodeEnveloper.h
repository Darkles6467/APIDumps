#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeEnveloper : USoundNode
{
	char __padding[0x118L];
	float& LoopStartField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.LoopStart"); }
	float& LoopEndField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.LoopEnd"); }
	float& DurationAfterLoopField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.DurationAfterLoop"); }
	int& LoopCountField() { return *GetNativePointerField<int*>(this, "USoundNodeEnveloper.LoopCount"); }
	FRuntimeFloatCurve& VolumeCurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "USoundNodeEnveloper.VolumeCurve"); }
	FRuntimeFloatCurve& PitchCurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "USoundNodeEnveloper.PitchCurve"); }
	float& PitchMinField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.PitchMin"); }
	float& PitchMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.PitchMax"); }
	float& VolumeMinField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.VolumeMin"); }
	float& VolumeMaxField() { return *GetNativePointerField<float*>(this, "USoundNodeEnveloper.VolumeMax"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "USoundNodeEnveloper.GetDuration"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeEnveloper.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void PostInitProperties() { NativeCall<void>(this, "USoundNodeEnveloper.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundNodeEnveloper.Serialize", Ar); }
};

