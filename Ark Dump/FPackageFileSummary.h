#pragma once

#include "BaseDeclarations.h"
struct FPackageFileSummary
{
	char __padding[0x120L];
	int& TagField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.Tag"); }
	int& FileVersionUE3Field() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.FileVersionUE3"); }
	int& FileVersionUE4Field() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.FileVersionUE4"); }
	int& FileVersionLicenseeUE4Field() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.FileVersionLicenseeUE4"); }
	FCustomVersionContainer& CustomVersionContainerField() { return *GetNativePointerField<FCustomVersionContainer*>(this, "FPackageFileSummary.CustomVersionContainer"); }
	int& TotalHeaderSizeField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.TotalHeaderSize"); }
	unsigned int& PackageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FPackageFileSummary.PackageFlags"); }
	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FPackageFileSummary.FolderName"); }
	int& NameCountField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.NameCount"); }
	int& NameOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.NameOffset"); }
	int& ExportCountField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.ExportCount"); }
	int& ExportOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.ExportOffset"); }
	int& ImportCountField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.ImportCount"); }
	int& ImportOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.ImportOffset"); }
	int& DependsOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.DependsOffset"); }
	int& StringAssetReferencesCountField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.StringAssetReferencesCount"); }
	int& StringAssetReferencesOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.StringAssetReferencesOffset"); }
	int& ThumbnailTableOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.ThumbnailTableOffset"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FPackageFileSummary.Guid"); }
	TArray<FGenerationInfo>& GenerationsField() { return *GetNativePointerField<TArray<FGenerationInfo>*>(this, "FPackageFileSummary.Generations"); }
	FEngineVersion& EngineVersionField() { return *GetNativePointerField<FEngineVersion*>(this, "FPackageFileSummary.EngineVersion"); }
	unsigned int& CompressionFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FPackageFileSummary.CompressionFlags"); }
	unsigned int& PackageSourceField() { return *GetNativePointerField<unsigned int*>(this, "FPackageFileSummary.PackageSource"); }
	unsigned __int64& PackageIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FPackageFileSummary.PackageID"); }
	TArray<FCompressedChunk>& CompressedChunksField() { return *GetNativePointerField<TArray<FCompressedChunk>*>(this, "FPackageFileSummary.CompressedChunks"); }
	TArray<FString>& AdditionalPackagesToCookField() { return *GetNativePointerField<TArray<FString>*>(this, "FPackageFileSummary.AdditionalPackagesToCook"); }
	bool& bHadLegacyVersionNumbersField() { return *GetNativePointerField<bool*>(this, "FPackageFileSummary.bHadLegacyVersionNumbers"); }
	bool& bUnversionedField() { return *GetNativePointerField<bool*>(this, "FPackageFileSummary.bUnversioned"); }
	FTextureAllocations& TextureAllocationsField() { return *GetNativePointerField<FTextureAllocations*>(this, "FPackageFileSummary.TextureAllocations"); }
	int& AssetRegistryDataOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.AssetRegistryDataOffset"); }
	__int64& BulkDataStartOffsetField() { return *GetNativePointerField<__int64*>(this, "FPackageFileSummary.BulkDataStartOffset"); }
	int& WorldTileInfoDataOffsetField() { return *GetNativePointerField<int*>(this, "FPackageFileSummary.WorldTileInfoDataOffset"); }
	TArray<int>& ChunkIDsField() { return *GetNativePointerField<TArray<int>*>(this, "FPackageFileSummary.ChunkIDs"); }

	// Functions

};

