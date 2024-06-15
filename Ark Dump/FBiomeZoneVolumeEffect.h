#pragma once

#include "BaseDeclarations.h"
struct FBiomeZoneVolumeEffect
{
	char __padding[0x48L];
	FieldArray<_BYTE, 1> BiomeZoneField() { return {this, "FBiomeZoneVolumeEffect.BiomeZone"}; }
	UParticleSystem * ParticleSystemField() { return GetNativePointerField<UParticleSystem *>(this, "FBiomeZoneVolumeEffect.ParticleSystem"); }
	FDecalData& DecalDataField() { return *GetNativePointerField<FDecalData*>(this, "FBiomeZoneVolumeEffect.DecalData"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FBiomeZoneVolumeEffect.Weight"); }
	float& MinSpawnDistanceField() { return *GetNativePointerField<float*>(this, "FBiomeZoneVolumeEffect.MinSpawnDistance"); }
	float& MaxSpawnDistanceField() { return *GetNativePointerField<float*>(this, "FBiomeZoneVolumeEffect.MaxSpawnDistance"); }
	float& ScaleAtMinDistanceField() { return *GetNativePointerField<float*>(this, "FBiomeZoneVolumeEffect.ScaleAtMinDistance"); }
	float& ScaleAtMaxDistanceField() { return *GetNativePointerField<float*>(this, "FBiomeZoneVolumeEffect.ScaleAtMaxDistance"); }

	// Functions

};

