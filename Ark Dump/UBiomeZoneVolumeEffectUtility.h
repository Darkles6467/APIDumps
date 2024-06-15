#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBiomeZoneVolumeEffect.h"

struct UBiomeZoneVolumeEffectUtility : UObject
{

	// Functions

	static FBiomeZoneVolumeEffect * GetRelevantEffect(FBiomeZoneVolumeEffect * result, const TArray<FBiomeZoneVolumeEffect> * Effects, AActor * SourceActor, const FVector * ForLocation, const bool bIsImpactActor) { return NativeCall<FBiomeZoneVolumeEffect *, FBiomeZoneVolumeEffect *, const TArray<FBiomeZoneVolumeEffect> *, AActor *, const FVector *, const bool>(nullptr, "UBiomeZoneVolumeEffectUtility.GetRelevantEffect", result, Effects, SourceActor, ForLocation, bIsImpactActor); }
	static void SpawnRelevantEffect(const TArray<FBiomeZoneVolumeEffect> * Effects, AActor * AttachTo, const FVector * ForLocation, bool bIsImpactActor) { NativeCall<void, const TArray<FBiomeZoneVolumeEffect> *, AActor *, const FVector *, bool>(nullptr, "UBiomeZoneVolumeEffectUtility.SpawnRelevantEffect", Effects, AttachTo, ForLocation, bIsImpactActor); }
};

