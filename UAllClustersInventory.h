#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FItemNetInfo.h"

struct UAllClustersInventory : UObject
{
	char __padding[0xc0L];

	// Functions

	void AddItem(const FString * UserId, int MasterIndexNum) { NativeCall<void, const FString *, int>(this, "UAllClustersInventory.AddItem", UserId, MasterIndexNum); }
	void ClearLock(const FString * UserId) { NativeCall<void, const FString *>(this, "UAllClustersInventory.ClearLock", UserId); }
	void CreateLock(const FString * UserId) { NativeCall<void, const FString *>(this, "UAllClustersInventory.CreateLock", UserId); }
	FString * GetAllClustersPlayerPath(FString * result, const FString * UserId) { return NativeCall<FString *, FString *, const FString *>(this, "UAllClustersInventory.GetAllClustersPlayerPath", result, UserId); }
	void LoadAllClustersInventoryItemsRequestComplete(bool bSucceeded, TArray<unsigned char> * ReadBytes, const FString * RequestURL) { NativeCall<void, bool, TArray<unsigned char> *, const FString *>(this, "UAllClustersInventory.LoadAllClustersInventoryItemsRequestComplete", bSucceeded, ReadBytes, RequestURL); }
	void LoadArkTributeAllClustersInventoryItems(const FString * UserId) { NativeCall<void, const FString *>(this, "UAllClustersInventory.LoadArkTributeAllClustersInventoryItems", UserId); }
	void OnAllClustersItemsLoadBytesReady(const FString * UserId, const TArray<unsigned char> * Bytes) { NativeCall<void, const FString *, const TArray<unsigned char> *>(this, "UAllClustersInventory.OnAllClustersItemsLoadBytesReady", UserId, Bytes); }
	void OnFinishedClearLockForChangingItems(bool Success, const FString * UserId) { NativeCall<void, bool, const FString *>(this, "UAllClustersInventory.OnFinishedClearLockForChangingItems", Success, UserId); }
	void OnFinishedCreateLockForChangingItems(bool Success, const FString * UserId) { NativeCall<void, bool, const FString *>(this, "UAllClustersInventory.OnFinishedCreateLockForChangingItems", Success, UserId); }
	void OnFinishedLoadForChangingItems(bool Success, const FString * UserId, TArray<FItemNetInfo> * ArkItems) { NativeCall<void, bool, const FString *, TArray<FItemNetInfo> *>(this, "UAllClustersInventory.OnFinishedLoadForChangingItems", Success, UserId, ArkItems); }
	void OnFinishedReadLockForCreateLock(bool Success, const FString * UserId, bool Locked) { NativeCall<void, bool, const FString *, bool>(this, "UAllClustersInventory.OnFinishedReadLockForCreateLock", Success, UserId, Locked); }
	void OnFinishedSaveForChangingItems(bool Success, const FString * UserId) { NativeCall<void, bool, const FString *>(this, "UAllClustersInventory.OnFinishedSaveForChangingItems", Success, UserId); }
	void OnReadLockBytesReady(const FString * UserId, const TArray<unsigned char> * Bytes) { NativeCall<void, const FString *, const TArray<unsigned char> *>(this, "UAllClustersInventory.OnReadLockBytesReady", UserId, Bytes); }
	void ProcessItemsToChange() { NativeCall<void>(this, "UAllClustersInventory.ProcessItemsToChange"); }
	void ProcessS3UploadersAndDownloaders() { NativeCall<void>(this, "UAllClustersInventory.ProcessS3UploadersAndDownloaders"); }
	void ReadLock(const FString * UserId) { NativeCall<void, const FString *>(this, "UAllClustersInventory.ReadLock", UserId); }
	void ReadLockRequestComplete(bool bSucceeded, TArray<unsigned char> * ReadBytes, const FString * RequestURL) { NativeCall<void, bool, TArray<unsigned char> *, const FString *>(this, "UAllClustersInventory.ReadLockRequestComplete", bSucceeded, ReadBytes, RequestURL); }
	void RemoveArkTributeAllClustersInventoryItem(const FString * UserId, const FItemNetInfo * ArkItem) { NativeCall<void, const FString *, const FItemNetInfo *>(this, "UAllClustersInventory.RemoveArkTributeAllClustersInventoryItem", UserId, ArkItem); }
	void SaveArkTributeAllClustersInventoryItems(const FString * UserId, const TArray<FItemNetInfo> * ArkItems) { NativeCall<void, const FString *, const TArray<FItemNetInfo> *>(this, "UAllClustersInventory.SaveArkTributeAllClustersInventoryItems", UserId, ArkItems); }
	bool ShouldUploadToS3() { return NativeCall<bool>(this, "UAllClustersInventory.ShouldUploadToS3"); }
	void Tick() { NativeCall<void>(this, "UAllClustersInventory.Tick"); }
	void UploadToS3(FAmazonS3MultipartUpload ** S3Uploader, const FString * Filename, const TArray<unsigned char> * DataBytes) { NativeCall<void, FAmazonS3MultipartUpload **, const FString *, const TArray<unsigned char> *>(this, "UAllClustersInventory.UploadToS3", S3Uploader, Filename, DataBytes); }
};

