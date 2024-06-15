#pragma once

#include "BaseDeclarations.h"
struct FAssetData
{
	char __padding[0x90L];
	FName& ObjectPathField() { return *GetNativePointerField<FName*>(this, "FAssetData.ObjectPath"); }
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FAssetData.PackageName"); }
	FName& PackagePathField() { return *GetNativePointerField<FName*>(this, "FAssetData.PackagePath"); }
	FName& GroupNamesField() { return *GetNativePointerField<FName*>(this, "FAssetData.GroupNames"); }
	FName& AssetNameField() { return *GetNativePointerField<FName*>(this, "FAssetData.AssetName"); }
	FName& AssetClassField() { return *GetNativePointerField<FName*>(this, "FAssetData.AssetClass"); }
	TArray<int>& ChunkIDsField() { return *GetNativePointerField<TArray<int>*>(this, "FAssetData.ChunkIDs"); }

	// Functions

	bool IsUAsset() { return NativeCall<bool>(this, "FAssetData.IsUAsset"); }
	void PrintAssetData() { NativeCall<void>(this, "FAssetData.PrintAssetData"); }
	UPackage * GetPackage() { return NativeCall<UPackage *>(this, "FAssetData.GetPackage"); }
};

