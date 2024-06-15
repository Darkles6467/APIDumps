#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHeightfieldComponentQuadVS : FGlobalShader
{
	char __padding[0x10L];
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FHeightfieldComponentQuadVS.HeightfieldDescriptionParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FHeightfieldComponentQuadVS.Serialize", Ar); }
};

