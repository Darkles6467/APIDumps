#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"
#include "FGraphEvent.h"

struct FStaticMeshInstanceBuffer : FVertexBuffer
{
	char __padding[0x30L];
	FStaticMeshInstanceData * InstanceDataField() { return GetNativePointerField<FStaticMeshInstanceData *>(this, "FStaticMeshInstanceBuffer.InstanceData"); }
	TRefCountPtr<FGraphEvent>& InitEventField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FStaticMeshInstanceBuffer.InitEvent"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshInstanceBuffer.Stride"); }
	unsigned int& NumInstancesField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshInstanceBuffer.NumInstances"); }
	bool& bDataReadyField() { return *GetNativePointerField<bool*>(this, "FStaticMeshInstanceBuffer.bDataReady"); }

	// Functions

	void AllocateData() { NativeCall<void>(this, "FStaticMeshInstanceBuffer.AllocateData"); }
	void AsyncDataComplete(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FStaticMeshInstanceBuffer.AsyncDataComplete", CurrentThread, MyCompletionGraphEvent); }
	void FinishCleanup() { NativeCall<void>(this, "FStaticMeshInstanceBuffer.FinishCleanup"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FStaticMeshInstanceBuffer.GetFriendlyName", result); }
	void Init(UInstancedStaticMeshComponent * InComponent, const TArray<TRefCountPtr<HHitProxy>> * InHitProxies, bool bInitAsync) { NativeCall<void, UInstancedStaticMeshComponent *, const TArray<TRefCountPtr<HHitProxy>> *, bool>(this, "FStaticMeshInstanceBuffer.Init", InComponent, InHitProxies, bInitAsync); }
	void InitRHI() { NativeCall<void>(this, "FStaticMeshInstanceBuffer.InitRHI"); }
	void PopulateAsync(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FStaticMeshInstanceBuffer.PopulateAsync", CurrentThread, MyCompletionGraphEvent); }
	void PopulateData(const TArray<TRefCountPtr<HHitProxy>> * InHitProxies) { NativeCall<void, const TArray<TRefCountPtr<HHitProxy>> *>(this, "FStaticMeshInstanceBuffer.PopulateData", InHitProxies); }
};

