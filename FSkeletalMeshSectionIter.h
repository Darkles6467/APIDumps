#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshSectionIter
{
	char __padding[0x28L];
	int& SectionIndexField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshSectionIter.SectionIndex"); }
	const FSkeletalMeshSceneProxy::FLODSectionElements * LODSectionElementsField() { return GetNativePointerField<const FSkeletalMeshSceneProxy::FLODSectionElements *>(this, "FSkeletalMeshSectionIter.LODSectionElements"); }
	const TArray<FSkelMeshSection> * SectionsField() { return GetNativePointerField<const TArray<FSkelMeshSection> *>(this, "FSkeletalMeshSectionIter.Sections"); }
	const TArray<FSkelMeshChunk> * ChunksField() { return GetNativePointerField<const TArray<FSkelMeshChunk> *>(this, "FSkeletalMeshSectionIter.Chunks"); }
};

