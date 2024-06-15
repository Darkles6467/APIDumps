#pragma once

#include "BaseDeclarations.h"
struct FD3D11BoundRenderTargets
{
	char __padding[0x50L];
	FieldArray<ID3D11RenderTargetView *[8], 3118> RenderTargetViewsField() { return {this, "FD3D11BoundRenderTargets.RenderTargetViews"}; }
	ID3D11DepthStencilView * DepthStencilViewField() { return GetNativePointerField<ID3D11DepthStencilView *>(this, "FD3D11BoundRenderTargets.DepthStencilView"); }
	int& NumActiveTargetsField() { return *GetNativePointerField<int*>(this, "FD3D11BoundRenderTargets.NumActiveTargets"); }
};

