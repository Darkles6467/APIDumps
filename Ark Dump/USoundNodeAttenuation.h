#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeAttenuation : USoundNode
{
	char __padding[0x60L];
	USoundAttenuation * AttenuationSettingsField() { return GetNativePointerField<USoundAttenuation *>(this, "USoundNodeAttenuation.AttenuationSettings"); }
	FAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FAttenuationSettings*>(this, "USoundNodeAttenuation.AttenuationOverrides"); }
	float& dBAttenuationAtMax_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USoundNodeAttenuation.dBAttenuationAtMax_DEPRECATED"); }
	TEnumAsByte<enum ESoundDistanceModel>& DistanceAlgorithm_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ESoundDistanceModel>*>(this, "USoundNodeAttenuation.DistanceAlgorithm_DEPRECATED"); }
	TEnumAsByte<enum ESoundDistanceCalc>& DistanceType_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ESoundDistanceCalc>*>(this, "USoundNodeAttenuation.DistanceType_DEPRECATED"); }
	float& RadiusMin_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USoundNodeAttenuation.RadiusMin_DEPRECATED"); }
	float& RadiusMax_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USoundNodeAttenuation.RadiusMax_DEPRECATED"); }
	float& LPFRadiusMin_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USoundNodeAttenuation.LPFRadiusMin_DEPRECATED"); }
	float& LPFRadiusMax_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USoundNodeAttenuation.LPFRadiusMax_DEPRECATED"); }

	// Functions

	float MaxAudibleDistance(float CurrentMaxDistance) { return NativeCall<float, float>(this, "USoundNodeAttenuation.MaxAudibleDistance", CurrentMaxDistance); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeAttenuation.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundNodeAttenuation.Serialize", Ar); }
};

