#pragma once

#include "BaseDeclarations.h"
struct FDiskCachedAssetData
{
	char __padding[0x68L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FDiskCachedAssetData.PackageName"); }
	FDateTime& TimestampField() { return *GetNativePointerField<FDateTime*>(this, "FDiskCachedAssetData.Timestamp"); }
	TArray<FAssetData>& AssetDataListField() { return *GetNativePointerField<TArray<FAssetData>*>(this, "FDiskCachedAssetData.AssetDataList"); }
	FPackageDependencyData& DependencyDataField() { return *GetNativePointerField<FPackageDependencyData*>(this, "FDiskCachedAssetData.DependencyData"); }

	// Functions

};

