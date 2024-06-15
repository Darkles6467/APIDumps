#pragma once

#include "BaseDeclarations.h"
struct FPCMBufferInfo
{
	char __padding[0x28L];
	tWAVEFORMATEX& PCMFormatField() { return *GetNativePointerField<tWAVEFORMATEX*>(this, "FPCMBufferInfo.PCMFormat"); }
	char * PCMDataField() { return GetNativePointerField<char *>(this, "FPCMBufferInfo.PCMData"); }
	unsigned int& PCMDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FPCMBufferInfo.PCMDataSize"); }
};

