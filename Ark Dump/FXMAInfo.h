#pragma once

#include "BaseDeclarations.h"
struct FXMAInfo
{
	char __padding[0x30L];
	void * EncodedBufferField() { return GetNativePointerField<void *>(this, "FXMAInfo.EncodedBuffer"); }
	unsigned int& EncodedBufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXMAInfo.EncodedBufferSize"); }
	void * EncodedBufferFormatField() { return GetNativePointerField<void *>(this, "FXMAInfo.EncodedBufferFormat"); }
	unsigned int& EncodedBufferFormatSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXMAInfo.EncodedBufferFormatSize"); }
	unsigned int * SeekTableField() { return GetNativePointerField<unsigned int *>(this, "FXMAInfo.SeekTable"); }
	unsigned int& SeekTableSizeField() { return *GetNativePointerField<unsigned int*>(this, "FXMAInfo.SeekTableSize"); }
};

