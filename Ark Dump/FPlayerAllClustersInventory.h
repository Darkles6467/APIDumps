#pragma once

#include "BaseDeclarations.h"
struct FPlayerAllClustersInventory
{
	enum LockStatus
	{
		LS_Unlocked = 0x0,
		LS_Locked = 0x1,
		LS_Locking = 0x2,
	};

	char __padding[0x38L];
	TArray<FItemNetInfo>& ItemsToRemoveField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "FPlayerAllClustersInventory.ItemsToRemove"); }
	TArray<int>& ItemsToAddField() { return *GetNativePointerField<TArray<int>*>(this, "FPlayerAllClustersInventory.ItemsToAdd"); }
	FPlayerAllClustersInventory::LockStatus& LockingField() { return *GetNativePointerField<FPlayerAllClustersInventory::LockStatus*>(this, "FPlayerAllClustersInventory.Locking"); }
	FAmazonS3MultipartUpload * S3UploaderField() { return GetNativePointerField<FAmazonS3MultipartUpload *>(this, "FPlayerAllClustersInventory.S3Uploader"); }
	FAmazonS3GetObject * S3DownloaderField() { return GetNativePointerField<FAmazonS3GetObject *>(this, "FPlayerAllClustersInventory.S3Downloader"); }

	// Functions

	FPlayerAllClustersInventory * operator=(const FPlayerAllClustersInventory * __that) { return NativeCall<FPlayerAllClustersInventory *, const FPlayerAllClustersInventory *>(this, "FPlayerAllClustersInventory.operator=", __that); }
};

