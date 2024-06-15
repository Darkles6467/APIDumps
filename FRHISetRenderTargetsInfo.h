#pragma once

#include "BaseDeclarations.h"
struct FRHISetRenderTargetsInfo
{
	char __padding[0x1c0L];
	FieldArray<FRHIRenderTargetView, 8> ColorRenderTargetField() { return {this, "FRHISetRenderTargetsInfo.ColorRenderTarget"}; }
	FieldArray<FLinearColor, 8> ClearColorsField() { return {this, "FRHISetRenderTargetsInfo.ClearColors"}; }
	int& NumColorRenderTargetsField() { return *GetNativePointerField<int*>(this, "FRHISetRenderTargetsInfo.NumColorRenderTargets"); }
	bool& bClearColorField() { return *GetNativePointerField<bool*>(this, "FRHISetRenderTargetsInfo.bClearColor"); }
	FRHIDepthRenderTargetView& DepthStencilRenderTargetField() { return *GetNativePointerField<FRHIDepthRenderTargetView*>(this, "FRHISetRenderTargetsInfo.DepthStencilRenderTarget"); }
	float& DepthClearValueField() { return *GetNativePointerField<float*>(this, "FRHISetRenderTargetsInfo.DepthClearValue"); }
	unsigned int& StencilClearValueField() { return *GetNativePointerField<unsigned int*>(this, "FRHISetRenderTargetsInfo.StencilClearValue"); }
	bool& bClearDepthField() { return *GetNativePointerField<bool*>(this, "FRHISetRenderTargetsInfo.bClearDepth"); }
	bool& bClearStencilField() { return *GetNativePointerField<bool*>(this, "FRHISetRenderTargetsInfo.bClearStencil"); }
	int& NumUAVsField() { return *GetNativePointerField<int*>(this, "FRHISetRenderTargetsInfo.NumUAVs"); }

	// Functions

};

