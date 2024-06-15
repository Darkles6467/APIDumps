#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FLandscapeInfoDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x10L];
	FLandscapeInfoVS * VertexShaderField() { return GetNativePointerField<FLandscapeInfoVS *>(this, "FLandscapeInfoDrawingPolicy.VertexShader"); }
	FLandscapeInfoBasePS * PixelShaderField() { return GetNativePointerField<FLandscapeInfoBasePS *>(this, "FLandscapeInfoDrawingPolicy.PixelShader"); }

	// Functions

	FBoundShaderStateInput * GetBoundShaderStateInput(FBoundShaderStateInput * result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FBoundShaderStateInput *, FBoundShaderStateInput *, ERHIFeatureLevel::Type>(this, "FLandscapeInfoDrawingPolicy.GetBoundShaderStateInput", result, InFeatureLevel); }
};

