#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPaintingCache : UObject
{
	char __padding[0xc0L];
	TArray<TSharedRef<FPaintingStreamingJob,0>>& ActiveStreamingJobsField() { return *GetNativePointerField<TArray<TSharedRef<FPaintingStreamingJob,0>>*>(this, "UPaintingCache.ActiveStreamingJobs"); }
	TArray<TSharedRef<FPaintingStreamingJob,0>>& StreamingJobsField() { return *GetNativePointerField<TArray<TSharedRef<FPaintingStreamingJob,0>>*>(this, "UPaintingCache.StreamingJobs"); }
	TArray<UPaintingTexture *>& PaintingTexturesField() { return *GetNativePointerField<TArray<UPaintingTexture *>*>(this, "UPaintingCache.PaintingTextures"); }
	TArray<TSharedRef<FLoadingTaskInfo,0>>& PendingLoadingTasksField() { return *GetNativePointerField<TArray<TSharedRef<FLoadingTaskInfo,0>>*>(this, "UPaintingCache.PendingLoadingTasks"); }
	TArray<TSharedRef<FSavingTaskInfo,0>>& PendingSavingTasksField() { return *GetNativePointerField<TArray<TSharedRef<FSavingTaskInfo,0>>*>(this, "UPaintingCache.PendingSavingTasks"); }

	// Functions

	void AddItemToCache(int UniquePaintingId, UPaintingTexture * PaintingTexture) { NativeCall<void, int, UPaintingTexture *>(this, "UPaintingCache.AddItemToCache", UniquePaintingId, PaintingTexture); }
	UPaintingTexture * CreateNewTexture(int UniquePaintingId, int SizeX, int SizeY) { return NativeCall<UPaintingTexture *, int, int, int>(this, "UPaintingCache.CreateNewTexture", UniquePaintingId, SizeX, SizeY); }
	TSharedRef<FPaintingStreamingJob,0> * CreateStreamingJob(TSharedRef<FPaintingStreamingJob,0> * result, UStructurePaintingComponent * Structure, UPaintingStreamingComponent * Streamer) { return NativeCall<TSharedRef<FPaintingStreamingJob,0> *, TSharedRef<FPaintingStreamingJob,0> *, UStructurePaintingComponent *, UPaintingStreamingComponent *>(this, "UPaintingCache.CreateStreamingJob", result, Structure, Streamer); }
	bool ForceCacheLocalPaintingTemplatesToDisk(FString FileName, FString PaintingClass, UPaintingTexture * PaintingTexture) { return NativeCall<bool, FString, FString, UPaintingTexture *>(this, "UPaintingCache.ForceCacheLocalPaintingTemplatesToDisk", FileName, PaintingClass, PaintingTexture); }
	void ForceCachePaintingToDisk(int UniquePaintingId, UPaintingTexture * PaintingTexture) { NativeCall<void, int, UPaintingTexture *>(this, "UPaintingCache.ForceCachePaintingToDisk", UniquePaintingId, PaintingTexture); }
	UPaintingTexture * GetCachedItem(int UniquePaintingId) { return NativeCall<UPaintingTexture *, int>(this, "UPaintingCache.GetCachedItem", UniquePaintingId); }
	static FString * GetMyPaintingsSaveDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "UPaintingCache.GetMyPaintingsSaveDir", result); }
	FString * GetNewSaveDir(FString * result) { return NativeCall<FString *, FString *>(this, "UPaintingCache.GetNewSaveDir", result); }
	int GetNumStreamerActiveJobs(UPaintingStreamingComponent * Streamer) { return NativeCall<int, UPaintingStreamingComponent *>(this, "UPaintingCache.GetNumStreamerActiveJobs", Streamer); }
	FString * GetSaveDir(FString * result) { return NativeCall<FString *, FString *>(this, "UPaintingCache.GetSaveDir", result); }
	static UPaintingCache * Instance(UWorld * World) { return NativeCall<UPaintingCache *, UWorld *>(nullptr, "UPaintingCache.Instance", World); }
	bool IsLoading(int UniquePaintingId) { return NativeCall<bool, int>(this, "UPaintingCache.IsLoading", UniquePaintingId); }
	bool IsSaving(int UniquePaintingId) { return NativeCall<bool, int>(this, "UPaintingCache.IsSaving", UniquePaintingId); }
	UPaintingTexture * LaodTextureFromFileName(FString FileName) { return NativeCall<UPaintingTexture *, FString>(this, "UPaintingCache.LaodTextureFromFileName", FileName); }
	UPaintingTexture * LoadPaintingTexture(TArray<unsigned char> * FileContent) { return NativeCall<UPaintingTexture *, TArray<unsigned char> *>(this, "UPaintingCache.LoadPaintingTexture", FileContent); }
	void RemoveFromCache(int UniquePaintingId) { NativeCall<void, int>(this, "UPaintingCache.RemoveFromCache", UniquePaintingId); }
	UPaintingTexture * RequestPaintingTexture(int UniquePaintingId, bool * bIsLoading, const FString * Filename) { return NativeCall<UPaintingTexture *, int, bool *, const FString *>(this, "UPaintingCache.RequestPaintingTexture", UniquePaintingId, bIsLoading, Filename); }
	void SaveCache() { NativeCall<void>(this, "UPaintingCache.SaveCache"); }
	static void SavePaintingTexture(UPaintingTexture * PaintingTexture, TArray<unsigned char> * FileContent) { NativeCall<void, UPaintingTexture *, TArray<unsigned char> *>(nullptr, "UPaintingCache.SavePaintingTexture", PaintingTexture, FileContent); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UPaintingCache.Tick", DeltaSeconds); }
	void CancelStreamingJob(TSharedRef<FPaintingStreamingJob,0> Job) { NativeCall<void, TSharedRef<FPaintingStreamingJob,0>>(this, "UPaintingCache.CancelStreamingJob", Job); }
};

