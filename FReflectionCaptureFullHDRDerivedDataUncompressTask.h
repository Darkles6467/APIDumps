#pragma once

#include "BaseDeclarations.h"
struct FReflectionCaptureFullHDRDerivedDataUncompressTask
{
	char __padding[0x8L];
	FReflectionCaptureFullHDRDerivedData * HDRDataRefField() { return GetNativePointerField<FReflectionCaptureFullHDRDerivedData *>(this, "FReflectionCaptureFullHDRDerivedDataUncompressTask.HDRDataRef"); }
};

