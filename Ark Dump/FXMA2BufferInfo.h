#pragma once

#include "BaseDeclarations.h"
struct FXMA2BufferInfo
{
	char __padding[0x48L];
	XMA2WAVEFORMATEX& XMA2FormatField() { return *GetNativePointerField<XMA2WAVEFORMATEX*>(this, "FXMA2BufferInfo.XMA2Format"); }
	char * XMA2DataField() { return GetNativePointerField<char *>(this, "FXMA2BufferInfo.XMA2Data"); }
	unsigned int& XMA2DataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXMA2BufferInfo.XMA2DataSize"); }
};

