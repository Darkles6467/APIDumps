#pragma once

#include "BaseDeclarations.h"
#include "FDerivedDataPluginInterface.h"

struct FDerivedAudioDataCompressor : FDerivedDataPluginInterface
{
	char __padding[0x18L];
	FName& FormatField() { return *GetNativePointerField<FName*>(this, "FDerivedAudioDataCompressor.Format"); }
	const IAudioFormat * CompressorField() { return GetNativePointerField<const IAudioFormat *>(this, "FDerivedAudioDataCompressor.Compressor"); }
};

