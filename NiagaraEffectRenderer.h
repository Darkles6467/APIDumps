#pragma once

#include "BaseDeclarations.h"
struct NiagaraEffectRenderer
{
	char __padding[0x20L];
	FNiagaraSceneProxy * SceneProxyField() { return GetNativePointerField<FNiagaraSceneProxy *>(this, "NiagaraEffectRenderer.SceneProxy"); }

	// Functions

	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "NiagaraEffectRenderer.GetViewRelevance", result, View); }
};

