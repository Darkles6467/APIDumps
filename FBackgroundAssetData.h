#pragma once

#include "BaseDeclarations.h"
struct FBackgroundAssetData
{
	char __padding[0xd0L];
	FString& ObjectPathField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.ObjectPath"); }
	FString& PackageNameField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.PackageName"); }
	FString& PackagePathField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.PackagePath"); }
	FString& GroupNamesField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.GroupNames"); }
	FString& AssetNameField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.AssetName"); }
	FString& AssetClassField() { return *GetNativePointerField<FString*>(this, "FBackgroundAssetData.AssetClass"); }
	TArray<int>& ChunkIDsField() { return *GetNativePointerField<TArray<int>*>(this, "FBackgroundAssetData.ChunkIDs"); }
	bool& bIsCookedField() { return *GetNativePointerField<bool*>(this, "FBackgroundAssetData.bIsCooked"); }

	// Functions

	bool IsCooked() { return NativeCall<bool>(this, "FBackgroundAssetData.IsCooked"); }
	FAssetData * ToAssetData(FAssetData * result) { return NativeCall<FAssetData *, FAssetData *>(this, "FBackgroundAssetData.ToAssetData", result); }
};

