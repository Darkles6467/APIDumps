#pragma once

#include "BaseDeclarations.h"
struct FDrawTranslucentMeshAction
{
	char __padding[0x20L];
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawTranslucentMeshAction.View"); }
	bool& bBackFaceField() { return *GetNativePointerField<bool*>(this, "FDrawTranslucentMeshAction.bBackFace"); }
	FHitProxyId& HitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FDrawTranslucentMeshAction.HitProxyId"); }
	const FProjectedShadowInfo * TranslucentSelfShadowField() { return GetNativePointerField<const FProjectedShadowInfo *>(this, "FDrawTranslucentMeshAction.TranslucentSelfShadow"); }
	bool& bUseTranslucentSelfShadowingField() { return *GetNativePointerField<bool*>(this, "FDrawTranslucentMeshAction.bUseTranslucentSelfShadowing"); }
};

