#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeVehicleEngine : USoundNode
{
	char __padding[0x20L];
	TArray<FVehicleEngineDatum>& EngineSamplesField() { return *GetNativePointerField<TArray<FVehicleEngineDatum>*>(this, "USoundNodeVehicleEngine.EngineSamples"); }
	float& CurrentMaxRPMField() { return *GetNativePointerField<float*>(this, "USoundNodeVehicleEngine.CurrentMaxRPM"); }
	float& CurrentRPMField() { return *GetNativePointerField<float*>(this, "USoundNodeVehicleEngine.CurrentRPM"); }
	float& CurrentRPMStoreTimeField() { return *GetNativePointerField<float*>(this, "USoundNodeVehicleEngine.CurrentRPMStoreTime"); }

	// Functions

	int GetMaxChildNodes() { return NativeCall<int>(this, "USoundNodeVehicleEngine.GetMaxChildNodes"); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeVehicleEngine.InsertChildNode", Index); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeVehicleEngine.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNodeVehicleEngine.RemoveChildNode", Index); }
	void StoreCurrentRPM(FAudioDevice * AudioDevice, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, float MaxRPM) { NativeCall<void, FAudioDevice *, FActiveSound *, const FSoundParseParameters *, float>(this, "USoundNodeVehicleEngine.StoreCurrentRPM", AudioDevice, ActiveSound, ParseParams, MaxRPM); }
};

