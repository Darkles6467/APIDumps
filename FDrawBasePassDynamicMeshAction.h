#pragma once

#include "BaseDeclarations.h"
struct FDrawBasePassDynamicMeshAction
{
	char __padding[0x10L];
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawBasePassDynamicMeshAction.View"); }
	bool& bBackFaceField() { return *GetNativePointerField<bool*>(this, "FDrawBasePassDynamicMeshAction.bBackFace"); }
	bool& bPreFogField() { return *GetNativePointerField<bool*>(this, "FDrawBasePassDynamicMeshAction.bPreFog"); }
	FHitProxyId& HitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FDrawBasePassDynamicMeshAction.HitProxyId"); }
};

