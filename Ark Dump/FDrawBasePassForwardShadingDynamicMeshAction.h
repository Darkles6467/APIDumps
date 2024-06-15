#pragma once

#include "BaseDeclarations.h"
struct FDrawBasePassForwardShadingDynamicMeshAction
{
	char __padding[0x10L];
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawBasePassForwardShadingDynamicMeshAction.View"); }
	bool& bBackFaceField() { return *GetNativePointerField<bool*>(this, "FDrawBasePassForwardShadingDynamicMeshAction.bBackFace"); }
	FHitProxyId& HitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FDrawBasePassForwardShadingDynamicMeshAction.HitProxyId"); }
};

