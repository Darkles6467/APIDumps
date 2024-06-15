#pragma once

#include "BaseDeclarations.h"
struct FSurfelBufferAllocator
{
	char __padding[0x68L];
	int& NumSurfelsInBufferField() { return *GetNativePointerField<int*>(this, "FSurfelBufferAllocator.NumSurfelsInBuffer"); }
	TArray<FPrimitiveSurfelFreeEntry>& FreeListField() { return *GetNativePointerField<TArray<FPrimitiveSurfelFreeEntry>*>(this, "FSurfelBufferAllocator.FreeList"); }

	// Functions

	void AddPrimitive(const FPrimitiveSceneInfo * PrimitiveSceneInfo, int PrimitiveLOD0Surfels, int PrimitiveNumSurfels, int NumInstances) { NativeCall<void, const FPrimitiveSceneInfo *, int, int, int>(this, "FSurfelBufferAllocator.AddPrimitive", PrimitiveSceneInfo, PrimitiveLOD0Surfels, PrimitiveNumSurfels, NumInstances); }
	const FPrimitiveSurfelAllocation * FindAllocation(const FPrimitiveSceneInfo * Primitive) { return NativeCall<const FPrimitiveSurfelAllocation *, const FPrimitiveSceneInfo *>(this, "FSurfelBufferAllocator.FindAllocation", Primitive); }
	void RemovePrimitive(const FPrimitiveSceneInfo * Primitive) { NativeCall<void, const FPrimitiveSceneInfo *>(this, "FSurfelBufferAllocator.RemovePrimitive", Primitive); }
};

