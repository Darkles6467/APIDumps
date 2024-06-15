#pragma once

#include "BaseDeclarations.h"
struct FDrawTranslucentMeshForwardShadingAction
{
	char __padding[0x10L];
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawTranslucentMeshForwardShadingAction.View"); }
	bool& bBackFaceField() { return *GetNativePointerField<bool*>(this, "FDrawTranslucentMeshForwardShadingAction.bBackFace"); }
	FHitProxyId& HitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FDrawTranslucentMeshForwardShadingAction.HitProxyId"); }
};

