#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FMorphVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	bool& bHasBeenUpdatedField() { return *GetNativePointerField<bool*>(this, "FMorphVertexBuffer.bHasBeenUpdated"); }
	int& LODIdxField() { return *GetNativePointerField<int*>(this, "FMorphVertexBuffer.LODIdx"); }
	FSkeletalMeshResource * SkelMeshResourceField() { return GetNativePointerField<FSkeletalMeshResource *>(this, "FMorphVertexBuffer.SkelMeshResource"); }
};

