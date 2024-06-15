#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FSkeletalMeshVertexInfluences_DEPRECATED : FVertexBuffer
{
	char __padding[0xb0L];
	TResourceArray<FVertexInfluence_DEPRECATED,0>& InfluencesField() { return *GetNativePointerField<TResourceArray<FVertexInfluence_DEPRECATED,0>*>(this, "FSkeletalMeshVertexInfluences_DEPRECATED.Influences"); }
	TArray<FSkelMeshSection>& SectionsField() { return *GetNativePointerField<TArray<FSkelMeshSection>*>(this, "FSkeletalMeshVertexInfluences_DEPRECATED.Sections"); }
	TArray<FSkelMeshChunk>& ChunksField() { return *GetNativePointerField<TArray<FSkelMeshChunk>*>(this, "FSkeletalMeshVertexInfluences_DEPRECATED.Chunks"); }
	TArray<unsigned short>& RequiredBonesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FSkeletalMeshVertexInfluences_DEPRECATED.RequiredBones"); }
	TArray<int>& CustomLeftRightSectionMapField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletalMeshVertexInfluences_DEPRECATED.CustomLeftRightSectionMap"); }

	// Functions

};

