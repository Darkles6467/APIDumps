#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FTranslucencyShadowDepthDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x10L];
	FTranslucencyShadowDepthVS * VertexShaderField() { return GetNativePointerField<FTranslucencyShadowDepthVS *>(this, "FTranslucencyShadowDepthDrawingPolicy.VertexShader"); }
	FTranslucencyShadowDepthPS * PixelShaderField() { return GetNativePointerField<FTranslucencyShadowDepthPS *>(this, "FTranslucencyShadowDepthDrawingPolicy.PixelShader"); }
};

