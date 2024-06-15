#pragma once

#include "BaseDeclarations.h"
struct FLegacyTextureLookup
{
	char __padding[0x10L];
	int& TexCoordIndexField() { return *GetNativePointerField<int*>(this, "FLegacyTextureLookup.TexCoordIndex"); }
	int& TextureIndexField() { return *GetNativePointerField<int*>(this, "FLegacyTextureLookup.TextureIndex"); }
	float& UScaleField() { return *GetNativePointerField<float*>(this, "FLegacyTextureLookup.UScale"); }
	float& VScaleField() { return *GetNativePointerField<float*>(this, "FLegacyTextureLookup.VScale"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLegacyTextureLookup.Serialize", Ar); }
};

