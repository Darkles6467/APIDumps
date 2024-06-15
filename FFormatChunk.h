#pragma once

#include "BaseDeclarations.h"
struct FFormatChunk
{
	char __padding[0x14L];
	unsigned __int16& wFormatTagField() { return *GetNativePointerField<unsigned __int16*>(this, "FFormatChunk.wFormatTag"); }
	unsigned __int16& nChannelsField() { return *GetNativePointerField<unsigned __int16*>(this, "FFormatChunk.nChannels"); }
	unsigned int& nSamplesPerSecField() { return *GetNativePointerField<unsigned int*>(this, "FFormatChunk.nSamplesPerSec"); }
	unsigned int& nAvgBytesPerSecField() { return *GetNativePointerField<unsigned int*>(this, "FFormatChunk.nAvgBytesPerSec"); }
	unsigned __int16& nBlockAlignField() { return *GetNativePointerField<unsigned __int16*>(this, "FFormatChunk.nBlockAlign"); }
	unsigned __int16& wBitsPerSampleField() { return *GetNativePointerField<unsigned __int16*>(this, "FFormatChunk.wBitsPerSample"); }
	unsigned __int16& cbSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FFormatChunk.cbSize"); }
};

