#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UAnimationAsset : UObject
{
	char __padding[0x18L];
	USkeleton * SkeletonField() { return GetNativePointerField<USkeleton *>(this, "UAnimationAsset.Skeleton"); }
	FGuid& SkeletonGuidField() { return *GetNativePointerField<FGuid*>(this, "UAnimationAsset.SkeletonGuid"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "UAnimationAsset.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UAnimationAsset.Serialize", Ar); }
	void SetSkeleton(USkeleton * NewSkeleton) { NativeCall<void, USkeleton *>(this, "UAnimationAsset.SetSkeleton", NewSkeleton); }
};

