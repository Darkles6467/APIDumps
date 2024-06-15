#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeModulatorContinuous : USoundNode
{
	char __padding[0xb0L];
	FModulatorContinuousParams& PitchModulationParamsField() { return *GetNativePointerField<FModulatorContinuousParams*>(this, "USoundNodeModulatorContinuous.PitchModulationParams"); }
	FModulatorContinuousParams& VolumeModulationParamsField() { return *GetNativePointerField<FModulatorContinuousParams*>(this, "USoundNodeModulatorContinuous.VolumeModulationParams"); }

	// Functions

	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeModulatorContinuous.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundNodeModulatorContinuous.Serialize", Ar); }
};

