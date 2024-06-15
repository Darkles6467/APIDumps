#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowHeightfieldsPS : FGlobalShader
{
	char __padding[0x40L];
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FShadowHeightfieldsPS.HeightfieldDescriptionParameters"); }
	FGlobalHeightfieldParameters& GlobalHeightfieldParametersField() { return *GetNativePointerField<FGlobalHeightfieldParameters*>(this, "FShadowHeightfieldsPS.GlobalHeightfieldParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FShadowHeightfieldsPS.Serialize", Ar); }
	static bool ShouldCache(EShaderPlatform Platform) { return NativeCall<bool, EShaderPlatform>(nullptr, "FShadowHeightfieldsPS.ShouldCache", Platform); }
};

