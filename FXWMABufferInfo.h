#pragma once

#include "BaseDeclarations.h"
struct FXWMABufferInfo
{
	char __padding[0x58L];
	WAVEFORMATEXTENSIBLE& XWMAFormatField() { return *GetNativePointerField<WAVEFORMATEXTENSIBLE*>(this, "FXWMABufferInfo.XWMAFormat"); }
	XAUDIO2_BUFFER_WMA& XWMABufferDataField() { return *GetNativePointerField<XAUDIO2_BUFFER_WMA*>(this, "FXWMABufferInfo.XWMABufferData"); }
	char * XWMADataField() { return GetNativePointerField<char *>(this, "FXWMABufferInfo.XWMAData"); }
	unsigned int& XWMADataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXWMABufferInfo.XWMADataSize"); }
	unsigned int * XWMASeekDataField() { return GetNativePointerField<unsigned int *>(this, "FXWMABufferInfo.XWMASeekData"); }
	unsigned int& XWMASeekDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXWMABufferInfo.XWMASeekDataSize"); }
};

