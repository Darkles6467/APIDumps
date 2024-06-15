#pragma once

#include "BaseDeclarations.h"
struct FMaterialCompilationOutput
{
	char __padding[0x70L];
	FUniformExpressionSet& UniformExpressionSetField() { return *GetNativePointerField<FUniformExpressionSet*>(this, "FMaterialCompilationOutput.UniformExpressionSet"); }
	bool& bRequiresSceneColorCopyField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bRequiresSceneColorCopy"); }
	bool& bNeedsSceneTexturesField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bNeedsSceneTextures"); }
	bool& bUsesEyeAdaptationField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bUsesEyeAdaptation"); }
	bool& bModifiesMeshPositionField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bModifiesMeshPosition"); }
	bool& bNeedsGBufferField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bNeedsGBuffer"); }
	bool& bUsesPixelDepthOffsetField() { return *GetNativePointerField<bool*>(this, "FMaterialCompilationOutput.bUsesPixelDepthOffset"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialCompilationOutput.Serialize", Ar); }
};

