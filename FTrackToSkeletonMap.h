#pragma once

#include "BaseDeclarations.h"
struct FTrackToSkeletonMap
{
	char __padding[0x8L];
	int& SkeletonIndex_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "FTrackToSkeletonMap.SkeletonIndex_DEPRECATED"); }
	int& BoneTreeIndexField() { return *GetNativePointerField<int*>(this, "FTrackToSkeletonMap.BoneTreeIndex"); }

	// Functions

};

