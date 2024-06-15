#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveRemoveInfo
{
	char __padding[0x28L];
	const FPrimitiveSceneInfo * PrimitiveField() { return GetNativePointerField<const FPrimitiveSceneInfo *>(this, "FPrimitiveRemoveInfo.Primitive"); }
	bool& bOftenMovingField() { return *GetNativePointerField<bool*>(this, "FPrimitiveRemoveInfo.bOftenMoving"); }
	TArray<int,TInlineAllocator<1> >& DistanceFieldInstanceIndicesField() { return *GetNativePointerField<TArray<int,TInlineAllocator<1> >*>(this, "FPrimitiveRemoveInfo.DistanceFieldInstanceIndices"); }
};

