#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FFinalSkinVertexBuffer : FVertexBuffer
{
	char __padding[0x10L];
	int& LODIdxField() { return *GetNativePointerField<int*>(this, "FFinalSkinVertexBuffer.LODIdx"); }
	FSkeletalMeshResource * SkeletalMeshResourceField() { return GetNativePointerField<FSkeletalMeshResource *>(this, "FFinalSkinVertexBuffer.SkeletalMeshResource"); }
};

