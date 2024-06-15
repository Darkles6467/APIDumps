#pragma once

#include "BaseDeclarations.h"
struct FIOSystem
{
	char __padding[0x8L];

	// Functions

	static bool HasShutdown() { return NativeCall<bool>(nullptr, "FIOSystem.HasShutdown"); }
};

struct FAsyncIOSystemBase : FIOSystem
{
	char __padding[0xb0L];
	FWindowsCriticalSection * CriticalSectionField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FAsyncIOSystemBase.CriticalSection"); }
	TArray<FAsyncIOSystemBase::FAsyncIORequest>& OutstandingRequestsField() { return *GetNativePointerField<TArray<FAsyncIOSystemBase::FAsyncIORequest>*>(this, "FAsyncIOSystemBase.OutstandingRequests"); }
	FThreadSafeCounter& BusyWithRequestField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FAsyncIOSystemBase.BusyWithRequest"); }
	FThreadSafeCounter& IsRunningField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FAsyncIOSystemBase.IsRunning"); }
	unsigned __int64& RequestIndexField() { return *GetNativePointerField<unsigned __int64*>(this, "FAsyncIOSystemBase.RequestIndex"); }
	FThreadSafeCounter& SuspendCountField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FAsyncIOSystemBase.SuspendCount"); }
	FWindowsCriticalSection * ExclusiveReadCriticalSectionField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FAsyncIOSystemBase.ExclusiveReadCriticalSection"); }
	EAsyncIOPriority& MinPriorityField() { return *GetNativePointerField<EAsyncIOPriority*>(this, "FAsyncIOSystemBase.MinPriority"); }

	// Functions

	void BlockTillAllRequestsFinished() { NativeCall<void>(this, "FAsyncIOSystemBase.BlockTillAllRequestsFinished"); }
	void BlockTillAllRequestsFinishedAndFlushHandles() { NativeCall<void>(this, "FAsyncIOSystemBase.BlockTillAllRequestsFinishedAndFlushHandles"); }
	void CancelAllOutstandingRequests() { NativeCall<void>(this, "FAsyncIOSystemBase.CancelAllOutstandingRequests"); }
	int CancelRequests(unsigned __int64 * RequestIndices, int NumIndices) { return NativeCall<int, unsigned __int64 *, int>(this, "FAsyncIOSystemBase.CancelRequests", RequestIndices, NumIndices); }
	void Exit() { NativeCall<void>(this, "FAsyncIOSystemBase.Exit"); }
	void FlushHandles() { NativeCall<void>(this, "FAsyncIOSystemBase.FlushHandles"); }
	void FulfillCompressedRead(const FAsyncIOSystemBase::FAsyncIORequest * IORequest, IFileHandle * FileHandle) { NativeCall<void, const FAsyncIOSystemBase::FAsyncIORequest *, IFileHandle *>(this, "FAsyncIOSystemBase.FulfillCompressedRead", IORequest, FileHandle); }
	FSingleThreadRunnable * GetSingleThreadInterface() { return NativeCall<FSingleThreadRunnable *>(this, "FAsyncIOSystemBase.GetSingleThreadInterface"); }
	void HintDoneWithFile(const FString * Filename) { NativeCall<void, const FString *>(this, "FAsyncIOSystemBase.HintDoneWithFile", Filename); }
	bool Init() { return NativeCall<bool>(this, "FAsyncIOSystemBase.Init"); }
	bool InternalRead(IFileHandle * FileHandle, __int64 Offset, __int64 Size, void * Dest) { return NativeCall<bool, IFileHandle *, __int64, __int64, void *>(this, "FAsyncIOSystemBase.InternalRead", FileHandle, Offset, Size, Dest); }
	unsigned __int64 LoadCompressedData(const FString * FileName, __int64 Offset, __int64 Size, __int64 UncompressedSize, void * Dest, ECompressionFlags CompressionFlags, FThreadSafeCounter * Counter, EAsyncIOPriority Priority) { return NativeCall<unsigned __int64, const FString *, __int64, __int64, __int64, void *, ECompressionFlags, FThreadSafeCounter *, EAsyncIOPriority>(this, "FAsyncIOSystemBase.LoadCompressedData", FileName, Offset, Size, UncompressedSize, Dest, CompressionFlags, Counter, Priority); }
	unsigned __int64 LoadData(const FString * FileName, __int64 Offset, __int64 Size, void * Dest, FThreadSafeCounter * Counter, EAsyncIOPriority Priority) { return NativeCall<unsigned __int64, const FString *, __int64, __int64, void *, FThreadSafeCounter *, EAsyncIOPriority>(this, "FAsyncIOSystemBase.LoadData", FileName, Offset, Size, Dest, Counter, Priority); }
	__int64 MinimumReadSize() { return NativeCall<__int64>(this, "FAsyncIOSystemBase.MinimumReadSize"); }
	int PlatformGetNextRequestIndex() { return NativeCall<int>(this, "FAsyncIOSystemBase.PlatformGetNextRequestIndex"); }
	void PlatformHandleHintDoneWithFile(const FString * Filename) { NativeCall<void, const FString *>(this, "FAsyncIOSystemBase.PlatformHandleHintDoneWithFile", Filename); }
	bool PlatformReadDoNotCallDirectly(IFileHandle * FileHandle, __int64 Offset, __int64 Size, void * Dest) { return NativeCall<bool, IFileHandle *, __int64, __int64, void *>(this, "FAsyncIOSystemBase.PlatformReadDoNotCallDirectly", FileHandle, Offset, Size, Dest); }
	unsigned __int64 QueueDestroyHandleRequest(const FString * FileName) { return NativeCall<unsigned __int64, const FString *>(this, "FAsyncIOSystemBase.QueueDestroyHandleRequest", FileName); }
	unsigned __int64 QueueIORequest(const FString * FileName, __int64 Offset, __int64 Size, __int64 UncompressedSize, void * Dest, ECompressionFlags CompressionFlags, FThreadSafeCounter * Counter, EAsyncIOPriority Priority) { return NativeCall<unsigned __int64, const FString *, __int64, __int64, __int64, void *, ECompressionFlags, FThreadSafeCounter *, EAsyncIOPriority>(this, "FAsyncIOSystemBase.QueueIORequest", FileName, Offset, Size, UncompressedSize, Dest, CompressionFlags, Counter, Priority); }
	void Resume() { NativeCall<void>(this, "FAsyncIOSystemBase.Resume"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FAsyncIOSystemBase.Run"); }
	void SetMinPriority(EAsyncIOPriority InMinPriority) { NativeCall<void, EAsyncIOPriority>(this, "FAsyncIOSystemBase.SetMinPriority", InMinPriority); }
	void Stop() { NativeCall<void>(this, "FAsyncIOSystemBase.Stop"); }
	void Suspend() { NativeCall<void>(this, "FAsyncIOSystemBase.Suspend"); }
	void Tick() { NativeCall<void>(this, "FAsyncIOSystemBase.Tick"); }
	void TickSingleThreaded() { NativeCall<void>(this, "FAsyncIOSystemBase.TickSingleThreaded"); }
	FString * FAsyncIORequest(FString * result) { return NativeCall<FString *, FString *>(this, "FAsyncIOSystemBase.FAsyncIORequest", result); }
};

