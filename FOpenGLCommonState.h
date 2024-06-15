#pragma once

#include "BaseDeclarations.h"
struct FOpenGLCommonState
{
	char __padding[0x20L];
	FTextureStage * TexturesField() { return GetNativePointerField<FTextureStage *>(this, "FOpenGLCommonState.Textures"); }
	FOpenGLSamplerState ** SamplerStatesField() { return GetNativePointerField<FOpenGLSamplerState **>(this, "FOpenGLCommonState.SamplerStates"); }
	FUAVStage * UAVsField() { return GetNativePointerField<FUAVStage *>(this, "FOpenGLCommonState.UAVs"); }

	// Functions

	void CleanupResources() { NativeCall<void>(this, "FOpenGLCommonState.CleanupResources"); }
	void InitializeResources(int NumCombinedTextures, int NumComputeUAVUnits) { NativeCall<void, int, int>(this, "FOpenGLCommonState.InitializeResources", NumCombinedTextures, NumComputeUAVUnits); }
};

