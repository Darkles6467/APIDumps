#pragma once

#include "BaseDeclarations.h"
#include "FDebugRenderSceneProxy.h"
#include "FPrimitiveSceneProxy.h"

struct FEQSSceneProxy : FDebugRenderSceneProxy
{
	char __padding[0x60L];
	const IEQSQueryResultSourceInterface * QueryDataSourceField() { return GetNativePointerField<const IEQSQueryResultSourceInterface *>(this, "FEQSSceneProxy.QueryDataSource"); }
	bool& bDrawOnlyWhenSelectedField() { return *GetNativePointerField<bool*>(this, "FEQSSceneProxy.bDrawOnlyWhenSelected"); }

	// Functions

	void DrawDebugLabels(UCanvas * Canvas, APlayerController * PC) { NativeCall<void, UCanvas *, APlayerController *>(this, "FEQSSceneProxy.DrawDebugLabels", Canvas, PC); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FEQSSceneProxy.GetViewRelevance", result, View); }
};

