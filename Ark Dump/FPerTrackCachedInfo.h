#pragma once

#include "BaseDeclarations.h"
struct FPerTrackCachedInfo
{
	char __padding[0x28L];
	const FAnimSetMeshLinkup * AnimLinkupField() { return GetNativePointerField<const FAnimSetMeshLinkup *>(this, "FPerTrackCachedInfo.AnimLinkup"); }
	TArray<FAnimPerturbationError>& PerTrackErrorsField() { return *GetNativePointerField<TArray<FAnimPerturbationError>*>(this, "FPerTrackCachedInfo.PerTrackErrors"); }
	TArray<int>& TrackHeightsField() { return *GetNativePointerField<TArray<int>*>(this, "FPerTrackCachedInfo.TrackHeights"); }
};

