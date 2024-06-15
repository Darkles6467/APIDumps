#pragma once

#include "BaseDeclarations.h"
struct FAnimSetMeshLinkup
{
	char __padding[0x10L];
	TArray<int>& BoneToTrackTableField() { return *GetNativePointerField<TArray<int>*>(this, "FAnimSetMeshLinkup.BoneToTrackTable"); }

	// Functions

	void BuildLinkup(USkeletalMesh * InSkelMesh, UAnimSet * InAnimSet) { NativeCall<void, USkeletalMesh *, UAnimSet *>(this, "FAnimSetMeshLinkup.BuildLinkup", InSkelMesh, InAnimSet); }
};

