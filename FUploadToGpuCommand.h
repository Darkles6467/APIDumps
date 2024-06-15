#pragma once

#include "BaseDeclarations.h"
struct FUploadToGpuCommand
{
	char __padding[0x18L];
	FByteBulkData * UnCompressedHDRData0Field() { return GetNativePointerField<FByteBulkData *>(this, "FUploadToGpuCommand.UnCompressedHDRData0"); }
	FByteBulkData * UnCompressedHDRData1Field() { return GetNativePointerField<FByteBulkData *>(this, "FUploadToGpuCommand.UnCompressedHDRData1"); }

	// Functions

};

