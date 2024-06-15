#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPackage : UObject
{
	char __padding[0x68L];
	bool& bDirtyField() { return *GetNativePointerField<bool*>(this, "UPackage.bDirty"); }
	bool& bHasBeenFullyLoadedField() { return *GetNativePointerField<bool*>(this, "UPackage.bHasBeenFullyLoaded"); }
	bool& bShouldFindExportsInMemoryFirstField() { return *GetNativePointerField<bool*>(this, "UPackage.bShouldFindExportsInMemoryFirst"); }
	FName& FolderNameField() { return *GetNativePointerField<FName*>(this, "UPackage.FolderName"); }
	float& LoadTimeField() { return *GetNativePointerField<float*>(this, "UPackage.LoadTime"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "UPackage.Guid"); }
	TArray<int>& ChunkIDsField() { return *GetNativePointerField<TArray<int>*>(this, "UPackage.ChunkIDs"); }
	FName& ForcedExportBasePackageNameField() { return *GetNativePointerField<FName*>(this, "UPackage.ForcedExportBasePackageName"); }
	unsigned int& PackageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "UPackage.PackageFlags"); }
	FName& FileNameField() { return *GetNativePointerField<FName*>(this, "UPackage.FileName"); }
	__int64& FileSizeField() { return *GetNativePointerField<__int64*>(this, "UPackage.FileSize"); }
	UMetaData * MetaDataField() { return GetNativePointerField<UMetaData *>(this, "UPackage.MetaData"); }
	TScopedPointer<FWorldTileInfo>& WorldTileInfoField() { return *GetNativePointerField<TScopedPointer<FWorldTileInfo>*>(this, "UPackage.WorldTileInfo"); }

	// Functions

	void FullyLoad() { NativeCall<void>(this, "UPackage.FullyLoad"); }
	static bool IsEmptyPackage(UPackage * Package, UObject * LastReferencer) { return NativeCall<bool, UPackage *, UObject *>(nullptr, "UPackage.IsEmptyPackage", Package, LastReferencer); }
	bool IsFullyLoaded() { return NativeCall<bool>(this, "UPackage.IsFullyLoaded"); }
	void PostInitProperties() { NativeCall<void>(this, "UPackage.PostInitProperties"); }
	void SetDirtyFlag(bool bIsDirty) { NativeCall<void, bool>(this, "UPackage.SetDirtyFlag", bIsDirty); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UPackage.TagSubobjects", NewFlags); }
};

