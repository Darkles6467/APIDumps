#pragma once

#include "BaseDeclarations.h"
struct FOpusDecoderWrapper
{
	char __padding[0x10L];
	struct OpusMSDecoder * DecoderField() { return GetNativePointerField<struct OpusMSDecoder *>(this, "FOpusDecoderWrapper.Decoder"); }
	int& DecErrorField() { return *GetNativePointerField<int*>(this, "FOpusDecoderWrapper.DecError"); }

	// Functions

};

