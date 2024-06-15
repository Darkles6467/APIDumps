#pragma once

#include "BaseDeclarations.h"
struct FRHIDepthRenderTargetView
{
	char __padding[0x20L];
	ERenderTargetLoadAction& DepthLoadActionField() { return *GetNativePointerField<ERenderTargetLoadAction*>(this, "FRHIDepthRenderTargetView.DepthLoadAction"); }
	ERenderTargetStoreAction& DepthStoreActionField() { return *GetNativePointerField<ERenderTargetStoreAction*>(this, "FRHIDepthRenderTargetView.DepthStoreAction"); }
	ERenderTargetLoadAction& StencilLoadActionField() { return *GetNativePointerField<ERenderTargetLoadAction*>(this, "FRHIDepthRenderTargetView.StencilLoadAction"); }
	ERenderTargetStoreAction& StencilStoreActionField() { return *GetNativePointerField<ERenderTargetStoreAction*>(this, "FRHIDepthRenderTargetView.StencilStoreAction"); }
	FExclusiveDepthStencil& DepthStencilAccessField() { return *GetNativePointerField<FExclusiveDepthStencil*>(this, "FRHIDepthRenderTargetView.DepthStencilAccess"); }
};

