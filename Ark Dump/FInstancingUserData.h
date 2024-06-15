#pragma once

#include "BaseDeclarations.h"
struct FInstancingUserData
{
	char __padding[0x20L];
	FInstancedStaticMeshRenderData * RenderDataField() { return GetNativePointerField<FInstancedStaticMeshRenderData *>(this, "FInstancingUserData.RenderData"); }
	FStaticMeshRenderData * MeshRenderDataField() { return GetNativePointerField<FStaticMeshRenderData *>(this, "FInstancingUserData.MeshRenderData"); }
	int& StartCullDistanceField() { return *GetNativePointerField<int*>(this, "FInstancingUserData.StartCullDistance"); }
	int& EndCullDistanceField() { return *GetNativePointerField<int*>(this, "FInstancingUserData.EndCullDistance"); }
	bool& bRenderSelectedField() { return *GetNativePointerField<bool*>(this, "FInstancingUserData.bRenderSelected"); }
	bool& bRenderUnselectedField() { return *GetNativePointerField<bool*>(this, "FInstancingUserData.bRenderUnselected"); }
};

