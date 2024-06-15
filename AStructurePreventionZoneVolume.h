#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AStructurePreventionZoneVolume : AVolume
{
	char __padding[0x40L];
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AStructurePreventionZoneVolume.StructureDamageMultiplier"); }
	TArray<FName>& ForcePreventStructuresWithTheseTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AStructurePreventionZoneVolume.ForcePreventStructuresWithTheseTags"); }

	// Functions

	static AStructurePreventionZoneVolume * BPIsWithinAnyStructurePreventionVolume(UWorld * ForWorld, const FVector * AtPoint, bool bCheckDisabled, bool bIsForDamageCheck, bool bIgnoreOptionalVolumes) { return NativeCall<AStructurePreventionZoneVolume *, UWorld *, const FVector *, bool, bool, bool>(nullptr, "AStructurePreventionZoneVolume.BPIsWithinAnyStructurePreventionVolume", ForWorld, AtPoint, bCheckDisabled, bIsForDamageCheck, bIgnoreOptionalVolumes); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AStructurePreventionZoneVolume.EndPlay", EndPlayReason); }
	static bool IsPointAllowed(UWorld * ForWorld, FVector AtPoint, bool bAllowInRegularPreventionVolumes, const APrimalStructure * Structure) { return NativeCall<bool, UWorld *, FVector, bool, const APrimalStructure *>(nullptr, "AStructurePreventionZoneVolume.IsPointAllowed", ForWorld, AtPoint, bAllowInRegularPreventionVolumes, Structure); }
	static bool IsStructureAllowed(const UWorld * ForWorld, const APrimalStructure * Structure) { return NativeCall<bool, const UWorld *, const APrimalStructure *>(nullptr, "AStructurePreventionZoneVolume.IsStructureAllowed", ForWorld, Structure); }
	static bool IsWithinAnyVolume(UWorld * ForWorld, FVector AtPoint, bool bCheckDisabled, AStructurePreventionZoneVolume ** TheVolume, bool bIsForDamageCheck, bool bIgnoreOptionalVolumes, float * OutDamageMultiplier) { return NativeCall<bool, UWorld *, FVector, bool, AStructurePreventionZoneVolume **, bool, bool, float *>(nullptr, "AStructurePreventionZoneVolume.IsWithinAnyVolume", ForWorld, AtPoint, bCheckDisabled, TheVolume, bIsForDamageCheck, bIgnoreOptionalVolumes, OutDamageMultiplier); }
	void PreLoadSaveGame() { NativeCall<void>(this, "AStructurePreventionZoneVolume.PreLoadSaveGame"); }
};

