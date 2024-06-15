#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FLandscapeGizmoMeshRenderProxy : FMaterialRenderProxy
{
	char __padding[0x70L];
	const float& TopHeightField() { return *GetNativePointerField<const float*>(this, "FLandscapeGizmoMeshRenderProxy.TopHeight"); }
	const float& BottomHeightField() { return *GetNativePointerField<const float*>(this, "FLandscapeGizmoMeshRenderProxy.BottomHeight"); }
	const FLinearColor& ScaleBiasField() { return *GetNativePointerField<const FLinearColor*>(this, "FLandscapeGizmoMeshRenderProxy.ScaleBias"); }
	const FMatrix& WorldToLandscapeMatrixField() { return *GetNativePointerField<const FMatrix*>(this, "FLandscapeGizmoMeshRenderProxy.WorldToLandscapeMatrix"); }
};

