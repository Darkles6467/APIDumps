#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldClipmap
{
	char __padding[0xc8L];
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FGlobalDistanceFieldClipmap.Bounds"); }
	FVector& ScrollOffsetField() { return *GetNativePointerField<FVector*>(this, "FGlobalDistanceFieldClipmap.ScrollOffset"); }
	TArray<FVolumeUpdateRegion,TInlineAllocator<3> >& UpdateRegionsField() { return *GetNativePointerField<TArray<FVolumeUpdateRegion,TInlineAllocator<3> >*>(this, "FGlobalDistanceFieldClipmap.UpdateRegions"); }
};

