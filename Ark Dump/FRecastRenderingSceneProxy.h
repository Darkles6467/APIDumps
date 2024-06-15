#pragma once

#include "BaseDeclarations.h"
#include "FDebugRenderSceneProxy.h"
#include "FPrimitiveSceneProxy.h"

struct FRecastRenderingSceneProxy : FDebugRenderSceneProxy
{
	char __padding[0x1110L];
	FNavMeshIndexBuffer& IndexBufferField() { return *GetNativePointerField<FNavMeshIndexBuffer*>(this, "FRecastRenderingSceneProxy.IndexBuffer"); }
	FNavMeshVertexBuffer& VertexBufferField() { return *GetNativePointerField<FNavMeshVertexBuffer*>(this, "FRecastRenderingSceneProxy.VertexBuffer"); }
	FNavMeshVertexFactory& VertexFactoryField() { return *GetNativePointerField<FNavMeshVertexFactory*>(this, "FRecastRenderingSceneProxy.VertexFactory"); }
	TWeakObjectPtr<UNavMeshRenderingComponent>& RenderingComponentField() { return *GetNativePointerField<TWeakObjectPtr<UNavMeshRenderingComponent>*>(this, "FRecastRenderingSceneProxy.RenderingComponent"); }
};

