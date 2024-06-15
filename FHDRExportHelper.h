#pragma once

#include "BaseDeclarations.h"
struct FHDRExportHelper
{
	char __padding[0xcL];
	FIntPoint& SizeField() { return *GetNativePointerField<FIntPoint*>(this, "FHDRExportHelper.Size"); }
	EPixelFormat& FormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FHDRExportHelper.Format"); }

	// Functions

	bool ExportHDR(UTexture2D * Texture, FArchive * Ar) { return NativeCall<bool, UTexture2D *, FArchive *>(this, "FHDRExportHelper.ExportHDR", Texture, Ar); }
	static FColor * ToRGBEDithered(FColor * result, const FLinearColor * ColorIN, const FRandomStream * Rand) { return NativeCall<FColor *, FColor *, const FLinearColor *, const FRandomStream *>(nullptr, "FHDRExportHelper.ToRGBEDithered", result, ColorIN, Rand); }
	void WriteScanLine(FArchive * Ar, const TArray<unsigned char> * ScanLine) { NativeCall<void, FArchive *, const TArray<unsigned char> *>(this, "FHDRExportHelper.WriteScanLine", Ar, ScanLine); }
};

