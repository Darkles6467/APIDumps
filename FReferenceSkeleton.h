#pragma once

#include "BaseDeclarations.h"
struct FReferenceSkeleton
{
	char __padding[0x70L];
	TArray<FMeshBoneInfo>& RefBoneInfoField() { return *GetNativePointerField<TArray<FMeshBoneInfo>*>(this, "FReferenceSkeleton.RefBoneInfo"); }
	TArray<FTransform>& RefBonePoseField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FReferenceSkeleton.RefBonePose"); }

	// Functions

	int FindBoneIndex(const FName * BoneName) { return NativeCall<int, const FName *>(this, "FReferenceSkeleton.FindBoneIndex", BoneName); }
	void Empty() { NativeCall<void>(this, "FReferenceSkeleton.Empty"); }
	void RebuildNameToIndexMap() { NativeCall<void>(this, "FReferenceSkeleton.RebuildNameToIndexMap"); }
	void RemoveDuplicateBones(UObject * Requester, TArray<unsigned short> * DuplicateBones) { NativeCall<void, UObject *, TArray<unsigned short> *>(this, "FReferenceSkeleton.RemoveDuplicateBones", Requester, DuplicateBones); }
};

