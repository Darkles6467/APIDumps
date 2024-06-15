#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDialogueWave : UObject
{
	char __padding[0x38L];
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "UDialogueWave.SpokenText"); }
	TArray<FDialogueContextMapping>& ContextMappingsField() { return *GetNativePointerField<TArray<FDialogueContextMapping>*>(this, "UDialogueWave.ContextMappings"); }
	FGuid& LocalizationGUIDField() { return *GetNativePointerField<FGuid*>(this, "UDialogueWave.LocalizationGUID"); }

	// Functions

	FString * GetContextLocalizationKey(FString * result, const FDialogueContext * Context) { return NativeCall<FString *, FString *, const FDialogueContext *>(this, "UDialogueWave.GetContextLocalizationKey", result, Context); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UDialogueWave.GetDesc", result); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UDialogueWave.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UDialogueWave.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDialogueWave.Serialize", Ar); }
	bool SupportsContext(const FDialogueContext * Context) { return NativeCall<bool, const FDialogueContext *>(this, "UDialogueWave.SupportsContext", Context); }
	void UpdateMappingProxy(FDialogueContextMapping * ContextMapping) { NativeCall<void, FDialogueContextMapping *>(this, "UDialogueWave.UpdateMappingProxy", ContextMapping); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UDialogueWave.GetAssetRegistryTags", OutTags); }
};

