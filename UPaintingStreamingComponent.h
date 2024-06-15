#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPaintingStreamingComponent : UActorComponent
{
	char __padding[0x70L];
	TArray<TSharedRef<FPaintingStreamingJob,0>>& ServerPendingJobsField() { return *GetNativePointerField<TArray<TSharedRef<FPaintingStreamingJob,0>>*>(this, "UPaintingStreamingComponent.ServerPendingJobs"); }
	TArray<TSharedRef<FPaintingStreamingJob,0>>& ClientPendingJobsField() { return *GetNativePointerField<TArray<TSharedRef<FPaintingStreamingJob,0>>*>(this, "UPaintingStreamingComponent.ClientPendingJobs"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UPaintingStreamingComponent.BeginDestroy"); }
	void ClientBeginStreamingJob_Implementation(UStructurePaintingComponent * PaintingComponent, int Revision) { NativeCall<void, UStructurePaintingComponent *, int>(this, "UPaintingStreamingComponent.ClientBeginStreamingJob_Implementation", PaintingComponent, Revision); }
	void ClientCancelSteamingJob_Implementation(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ClientCancelSteamingJob_Implementation", PaintingComponent); }
	void ClientEndStreamingJob_Implementation(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ClientEndStreamingJob_Implementation", PaintingComponent); }
	void ClientRecieveChunk_Implementation(UStructurePaintingComponent * PaintingComponent, const TArray<unsigned char> * Bytes) { NativeCall<void, UStructurePaintingComponent *, const TArray<unsigned char> *>(this, "UPaintingStreamingComponent.ClientRecieveChunk_Implementation", PaintingComponent, Bytes); }
	void DestroyComponent() { NativeCall<void>(this, "UPaintingStreamingComponent.DestroyComponent"); }
	TSharedPtr<FPaintingStreamingJob,0> * GetClientPendingJob(TSharedPtr<FPaintingStreamingJob,0> * result, UStructurePaintingComponent * PaintingComponent) { return NativeCall<TSharedPtr<FPaintingStreamingJob,0> *, TSharedPtr<FPaintingStreamingJob,0> *, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.GetClientPendingJob", result, PaintingComponent); }
	TSharedPtr<FPaintingStreamingJob,0> * GetServerPendingJob(TSharedPtr<FPaintingStreamingJob,0> * result, UStructurePaintingComponent * PaintingComponent) { return NativeCall<TSharedPtr<FPaintingStreamingJob,0> *, TSharedPtr<FPaintingStreamingJob,0> *, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.GetServerPendingJob", result, PaintingComponent); }
	bool HasServerPendingJob(UStructurePaintingComponent * PaintingComponent) { return NativeCall<bool, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.HasServerPendingJob", PaintingComponent); }
	UPaintingCache * PaintingCache() { return NativeCall<UPaintingCache *>(this, "UPaintingStreamingComponent.PaintingCache"); }
	TSharedRef<FPaintingStreamingJob,0> * RequestPaintingStream(TSharedRef<FPaintingStreamingJob,0> * result, UStructurePaintingComponent * PaintingComponent) { return NativeCall<TSharedRef<FPaintingStreamingJob,0> *, TSharedRef<FPaintingStreamingJob,0> *, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.RequestPaintingStream", result, PaintingComponent); }
	void ServerCancelPaintingStream_Implementation(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerCancelPaintingStream_Implementation", PaintingComponent); }
	void ServerRequestPaintingStream_Implementation(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerRequestPaintingStream_Implementation", PaintingComponent); }
	void ServerSendNextChunk_Implementation(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerSendNextChunk_Implementation", PaintingComponent); }
	void ClientBeginStreamingJob(UStructurePaintingComponent * PaintingComponent, int Revision) { NativeCall<void, UStructurePaintingComponent *, int>(this, "UPaintingStreamingComponent.ClientBeginStreamingJob", PaintingComponent, Revision); }
	void ClientCancelSteamingJob(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ClientCancelSteamingJob", PaintingComponent); }
	void ClientEndStreamingJob(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ClientEndStreamingJob", PaintingComponent); }
	void ClientRecieveChunk(UStructurePaintingComponent * PaintingComponent, const TArray<unsigned char> * Bytes) { NativeCall<void, UStructurePaintingComponent *, const TArray<unsigned char> *>(this, "UPaintingStreamingComponent.ClientRecieveChunk", PaintingComponent, Bytes); }
	void ServerCancelPaintingStream(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerCancelPaintingStream", PaintingComponent); }
	void ServerRequestPaintingStream(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerRequestPaintingStream", PaintingComponent); }
	void ServerSendNextChunk(UStructurePaintingComponent * PaintingComponent) { NativeCall<void, UStructurePaintingComponent *>(this, "UPaintingStreamingComponent.ServerSendNextChunk", PaintingComponent); }
};

