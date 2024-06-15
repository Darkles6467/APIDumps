#pragma once

#include "BaseDeclarations.h"
struct FOpenGLRasterizerStateData
{
	char __padding[0x10L];
	unsigned int& FillModeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRasterizerStateData.FillMode"); }
	unsigned int& CullModeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRasterizerStateData.CullMode"); }
	float& DepthBiasField() { return *GetNativePointerField<float*>(this, "FOpenGLRasterizerStateData.DepthBias"); }
	float& SlopeScaleDepthBiasField() { return *GetNativePointerField<float*>(this, "FOpenGLRasterizerStateData.SlopeScaleDepthBias"); }
};

