#pragma once

#include "BaseDeclarations.h"
struct FShadowStaticMeshElement
{
	char __padding[0x20L];
	const FStaticMesh * MeshField() { return GetNativePointerField<const FStaticMesh *>(this, "FShadowStaticMeshElement.Mesh"); }
	bool& bIsTwoSidedField() { return *GetNativePointerField<bool*>(this, "FShadowStaticMeshElement.bIsTwoSided"); }
};

