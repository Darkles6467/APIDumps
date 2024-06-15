#pragma once

#include "BaseDeclarations.h"
struct FSkeletonToMeshLinkup
{
	char __padding[0x20L];
	TArray<int>& SkeletonToMeshTableField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletonToMeshLinkup.SkeletonToMeshTable"); }
	TArray<int>& MeshToSkeletonTableField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletonToMeshLinkup.MeshToSkeletonTable"); }

	// Functions

};

