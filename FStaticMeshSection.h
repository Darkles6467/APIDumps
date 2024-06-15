#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshSection
{
	char __padding[0x18L];
	int& MaterialIndexField() { return *GetNativePointerField<int*>(this, "FStaticMeshSection.MaterialIndex"); }
	unsigned int& FirstIndexField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshSection.FirstIndex"); }
	unsigned int& NumTrianglesField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshSection.NumTriangles"); }
	unsigned int& MinVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshSection.MinVertexIndex"); }
	unsigned int& MaxVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshSection.MaxVertexIndex"); }
	bool& bEnableCollisionField() { return *GetNativePointerField<bool*>(this, "FStaticMeshSection.bEnableCollision"); }
	bool& bCastShadowField() { return *GetNativePointerField<bool*>(this, "FStaticMeshSection.bCastShadow"); }
};

