#pragma once

#include "BaseDeclarations.h"
struct FImageUtils
{

	// Functions

	static bool ExportTexture2DAsHDR(UTexture2D * TexRT, FArchive * Ar) { return NativeCall<bool, UTexture2D *, FArchive *>(nullptr, "FImageUtils.ExportTexture2DAsHDR", TexRT, Ar); }
};

