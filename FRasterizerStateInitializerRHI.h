#pragma once

#include "BaseDeclarations.h"
struct FRasterizerStateInitializerRHI
{
	char __padding[0x10L];
	TEnumAsByte<enum ERasterizerFillMode>& FillModeField() { return *GetNativePointerField<TEnumAsByte<enum ERasterizerFillMode>*>(this, "FRasterizerStateInitializerRHI.FillMode"); }
	TEnumAsByte<enum ERasterizerCullMode>& CullModeField() { return *GetNativePointerField<TEnumAsByte<enum ERasterizerCullMode>*>(this, "FRasterizerStateInitializerRHI.CullMode"); }
	float& DepthBiasField() { return *GetNativePointerField<float*>(this, "FRasterizerStateInitializerRHI.DepthBias"); }
	float& SlopeScaleDepthBiasField() { return *GetNativePointerField<float*>(this, "FRasterizerStateInitializerRHI.SlopeScaleDepthBias"); }
	bool& bAllowMSAAField() { return *GetNativePointerField<bool*>(this, "FRasterizerStateInitializerRHI.bAllowMSAA"); }
	bool& bEnableLineAAField() { return *GetNativePointerField<bool*>(this, "FRasterizerStateInitializerRHI.bEnableLineAA"); }
};

