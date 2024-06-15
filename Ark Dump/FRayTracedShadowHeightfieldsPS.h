#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FRayTracedShadowHeightfieldsPS : FGlobalShader
{
	char __padding[0x78L];
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FRayTracedShadowHeightfieldsPS.HeightfieldDescriptionParameters"); }
	FGlobalHeightfieldParameters& GlobalHeightfieldParametersField() { return *GetNativePointerField<FGlobalHeightfieldParameters*>(this, "FRayTracedShadowHeightfieldsPS.GlobalHeightfieldParameters"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FRayTracedShadowHeightfieldsPS.ObjectParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FRayTracedShadowHeightfieldsPS.Serialize", Ar); }
};

