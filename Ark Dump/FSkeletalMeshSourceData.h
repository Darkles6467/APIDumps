#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshSourceData
{
	char __padding[0x8L];
	FStaticLODModel * LODModelField() { return GetNativePointerField<FStaticLODModel *>(this, "FSkeletalMeshSourceData.LODModel"); }

	// Functions

	void Serialize(FArchive * Ar, USkeletalMesh * SkeletalMesh) { NativeCall<void, FArchive *, USkeletalMesh *>(this, "FSkeletalMeshSourceData.Serialize", Ar, SkeletalMesh); }
};

