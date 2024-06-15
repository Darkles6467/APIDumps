#pragma once

#include "BaseDeclarations.h"
struct FRHIRenderPassInfo
{
	char __padding[0x150L];
	FieldArray<FRHIRenderPassInfo::FColorEntry, 8> ColorRenderTargetsField() { return {this, "FRHIRenderPassInfo.ColorRenderTargets"}; }
	FRHIRenderPassInfo::FDepthStencilEntry& DepthStencilRenderTargetField() { return *GetNativePointerField<FRHIRenderPassInfo::FDepthStencilEntry*>(this, "FRHIRenderPassInfo.DepthStencilRenderTarget"); }
	FResolveParams& ResolveParametersField() { return *GetNativePointerField<FResolveParams*>(this, "FRHIRenderPassInfo.ResolveParameters"); }
	unsigned int& NumOcclusionQueriesField() { return *GetNativePointerField<unsigned int*>(this, "FRHIRenderPassInfo.NumOcclusionQueries"); }
	bool& bOcclusionQueriesField() { return *GetNativePointerField<bool*>(this, "FRHIRenderPassInfo.bOcclusionQueries"); }
	bool& bGeneratingMipsField() { return *GetNativePointerField<bool*>(this, "FRHIRenderPassInfo.bGeneratingMips"); }
	int& UAVIndexField() { return *GetNativePointerField<int*>(this, "FRHIRenderPassInfo.UAVIndex"); }
	int& NumUAVsField() { return *GetNativePointerField<int*>(this, "FRHIRenderPassInfo.NumUAVs"); }
	bool& bIsMSAAField() { return *GetNativePointerField<bool*>(this, "FRHIRenderPassInfo.bIsMSAA"); }
};

