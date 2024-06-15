#pragma once

#include "BaseDeclarations.h"
struct FWorldTileInfo
{
	char __padding[0x90L];
	FIntPoint& PositionField() { return *GetNativePointerField<FIntPoint*>(this, "FWorldTileInfo.Position"); }
	FIntPoint& AbsolutePositionField() { return *GetNativePointerField<FIntPoint*>(this, "FWorldTileInfo.AbsolutePosition"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FWorldTileInfo.Bounds"); }
	FWorldTileLayer& LayerField() { return *GetNativePointerField<FWorldTileLayer*>(this, "FWorldTileInfo.Layer"); }
	bool& Reserved0Field() { return *GetNativePointerField<bool*>(this, "FWorldTileInfo.Reserved0"); }
	FString& ParentTilePackageNameField() { return *GetNativePointerField<FString*>(this, "FWorldTileInfo.ParentTilePackageName"); }
	TArray<FWorldTileLODInfo>& LODListField() { return *GetNativePointerField<TArray<FWorldTileLODInfo>*>(this, "FWorldTileInfo.LODList"); }
	int& ZOrderField() { return *GetNativePointerField<int*>(this, "FWorldTileInfo.ZOrder"); }

	// Functions

	FWorldTileInfo * operator=(const FWorldTileInfo * __that) { return NativeCall<FWorldTileInfo *, const FWorldTileInfo *>(this, "FWorldTileInfo.operator=", __that); }
	static bool Read(const FString * InPackageFileName, FWorldTileInfo * OutInfo) { return NativeCall<bool, const FString *, FWorldTileInfo *>(nullptr, "FWorldTileInfo.Read", InPackageFileName, OutInfo); }
	bool operator==(const FWorldTileInfo * OtherInfo) { return NativeCall<bool, const FWorldTileInfo *>(this, "FWorldTileInfo.operator==", OtherInfo); }
};

