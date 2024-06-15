#pragma once

#include "BaseDeclarations.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicSpriteEmitterDataBase : FDynamicEmitterDataBase
{
	char __padding[0x298L];
	bool& bAsyncTaskOutstandingField() { return *GetNativePointerField<bool*>(this, "FDynamicSpriteEmitterDataBase.bAsyncTaskOutstanding"); }
	TRefCountPtr<FGraphEvent>& AsyncTaskField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FDynamicSpriteEmitterDataBase.AsyncTask"); }
	TArray<FAsyncBufferFillData,TInlineAllocator<2> >& AsyncBufferFillTasksField() { return *GetNativePointerField<TArray<FAsyncBufferFillData,TInlineAllocator<2> >*>(this, "FDynamicSpriteEmitterDataBase.AsyncBufferFillTasks"); }
	TArray<FGlobalDynamicVertexBuffer::FAllocation,TInlineAllocator<2> >& InstanceDataAllocationsField() { return *GetNativePointerField<TArray<FGlobalDynamicVertexBuffer::FAllocation,TInlineAllocator<2> >*>(this, "FDynamicSpriteEmitterDataBase.InstanceDataAllocations"); }
	TArray<FGlobalDynamicIndexBuffer::FAllocation,TInlineAllocator<2> >& IndexDataAllocationsField() { return *GetNativePointerField<TArray<FGlobalDynamicIndexBuffer::FAllocation,TInlineAllocator<2> >*>(this, "FDynamicSpriteEmitterDataBase.IndexDataAllocations"); }
	TArray<FGlobalDynamicVertexBuffer::FAllocation,TInlineAllocator<2> >& DynamicParameterDataAllocationsField() { return *GetNativePointerField<TArray<FGlobalDynamicVertexBuffer::FAllocation,TInlineAllocator<2> >*>(this, "FDynamicSpriteEmitterDataBase.DynamicParameterDataAllocations"); }

	// Functions

	void BuildViewFillData(const FParticleSystemSceneProxy * Proxy, FSceneView * InView, int InVertexCount, int InVertexSize, int InDynamicParameterVertexStride, FGlobalDynamicVertexBuffer::FAllocation * DynamicVertexAllocation, FGlobalDynamicIndexBuffer::FAllocation * DynamicIndexAllocation, FGlobalDynamicVertexBuffer::FAllocation * DynamicParameterAllocation, FAsyncBufferFillData * Data) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, int, int, int, FGlobalDynamicVertexBuffer::FAllocation *, FGlobalDynamicIndexBuffer::FAllocation *, FGlobalDynamicVertexBuffer::FAllocation *, FAsyncBufferFillData *>(this, "FDynamicSpriteEmitterDataBase.BuildViewFillData", Proxy, InView, InVertexCount, InVertexSize, InDynamicParameterVertexStride, DynamicVertexAllocation, DynamicIndexAllocation, DynamicParameterAllocation, Data); }
	const FAsyncBufferFillData * EnsureFillCompletion(FSceneView * InView) { return NativeCall<const FAsyncBufferFillData *, FSceneView *>(this, "FDynamicSpriteEmitterDataBase.EnsureFillCompletion", InView); }
	void RenderDebug(const FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View, bool bCrosses) { NativeCall<void, const FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *, bool>(this, "FDynamicSpriteEmitterDataBase.RenderDebug", Proxy, PDI, View, bCrosses); }
	void SortSpriteParticles(int SortMode, bool bLocalSpace, int ParticleCount, const TArray<unsigned char> * ParticleData, int ParticleStride, const TArray<unsigned short> * ParticleIndices, FSceneView * View, const FMatrix * LocalToWorld, FParticleOrder * ParticleOrder) { NativeCall<void, int, bool, int, const TArray<unsigned char> *, int, const TArray<unsigned short> *, FSceneView *, const FMatrix *, FParticleOrder *>(this, "FDynamicSpriteEmitterDataBase.SortSpriteParticles", SortMode, bLocalSpace, ParticleCount, ParticleData, ParticleStride, ParticleIndices, View, LocalToWorld, ParticleOrder); }
};

