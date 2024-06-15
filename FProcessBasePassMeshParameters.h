#pragma once

#include "BaseDeclarations.h"
struct FProcessBasePassMeshParameters
{
	char __padding[0x38L];
	const unsigned __int64& BatchElementMaskField() { return *GetNativePointerField<const unsigned __int64*>(this, "FProcessBasePassMeshParameters.BatchElementMask"); }
	EBlendMode& BlendModeField() { return *GetNativePointerField<EBlendMode*>(this, "FProcessBasePassMeshParameters.BlendMode"); }
	EMaterialShadingModel& ShadingModelField() { return *GetNativePointerField<EMaterialShadingModel*>(this, "FProcessBasePassMeshParameters.ShadingModel"); }
	const bool& bAllowFogField() { return *GetNativePointerField<const bool*>(this, "FProcessBasePassMeshParameters.bAllowFog"); }
	const bool& bEditorCompositeDepthTestField() { return *GetNativePointerField<const bool*>(this, "FProcessBasePassMeshParameters.bEditorCompositeDepthTest"); }
	ESceneRenderTargetsMode::Type& TextureModeField() { return *GetNativePointerField<ESceneRenderTargetsMode::Type*>(this, "FProcessBasePassMeshParameters.TextureMode"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FProcessBasePassMeshParameters.FeatureLevel"); }
	const bool& bAllowMaskedZEqualField() { return *GetNativePointerField<const bool*>(this, "FProcessBasePassMeshParameters.bAllowMaskedZEqual"); }
};

