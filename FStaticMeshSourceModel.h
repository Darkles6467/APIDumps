#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshSourceModel
{
	char __padding[0x60L];
	FMeshBuildSettings& BuildSettingsField() { return *GetNativePointerField<FMeshBuildSettings*>(this, "FStaticMeshSourceModel.BuildSettings"); }
	FMeshReductionSettings& ReductionSettingsField() { return *GetNativePointerField<FMeshReductionSettings*>(this, "FStaticMeshSourceModel.ReductionSettings"); }
	float& LODDistance_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FStaticMeshSourceModel.LODDistance_DEPRECATED"); }
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "FStaticMeshSourceModel.ScreenSize"); }

	// Functions

};

