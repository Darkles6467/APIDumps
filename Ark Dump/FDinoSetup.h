#pragma once

#include "BaseDeclarations.h"
struct FDinoSetup
{
	char __padding[0xf0L];
	TSubclassOf<APrimalDinoCharacter>& DinoTypeField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoType"); }
	TAssetSubclassOf<APrimalDinoCharacter>& DinoSoftReferenceField() { return *GetNativePointerField<TAssetSubclassOf<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoSoftReference"); }
	FString& DinoBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoBlueprintPath"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoName"); }
	int& DinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoSetup.DinoLevel"); }
	FieldArray<char, 12> BasePointsPerStatField() { return {this, "FDinoSetup.BasePointsPerStat"}; }
	FieldArray<char, 12> PlayerAddedPointsPerStatField() { return {this, "FDinoSetup.PlayerAddedPointsPerStat"}; }
	FVector& SpawnOffsetField() { return *GetNativePointerField<FVector*>(this, "FDinoSetup.SpawnOffset"); }
	TEnumAsByte<enum EDinoTamedOrder::Type>& DinoStateField() { return *GetNativePointerField<TEnumAsByte<enum EDinoTamedOrder::Type>*>(this, "FDinoSetup.DinoState"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>& PrioritizeStatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>*>(this, "FDinoSetup.PrioritizeStats"); }
	TArray<FItemSetup>& TamedDinoInventoryField() { return *GetNativePointerField<TArray<FItemSetup>*>(this, "FDinoSetup.TamedDinoInventory"); }
	FString& SaddleBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.SaddleBlueprintPath"); }
	float& SaddleQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleQuality"); }
	float& SaddleMinRandomQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleMinRandomQuality"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetup.RandomWeight"); }
	float& WildRandomScaleOverrideField() { return *GetNativePointerField<float*>(this, "FDinoSetup.WildRandomScaleOverride"); }
	float& DinoImprintingQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.DinoImprintingQuality"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FDinoSetup.bNetInfoFromClient"); }

	// Functions

	FDinoSetup * operator=(const FDinoSetup * __that) { return NativeCall<FDinoSetup *, const FDinoSetup *>(this, "FDinoSetup.operator=", __that); }
	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FDinoSetup.NetSerialize", Ar, Map, bOutSuccess); }
	void SetBaseLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetBaseLevels", StatusType, Value); }
	void SetConstantSaddleQuality(float Quality) { NativeCall<void, float>(this, "FDinoSetup.SetConstantSaddleQuality", Quality); }
	void SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetPlayerAddedLevels", StatusType, Value); }
};

