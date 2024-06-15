#pragma once

#include "BaseDeclarations.h"
struct FNFSMessageHeader
{
	char __padding[0xcL];
	unsigned int& MagicField() { return *GetNativePointerField<unsigned int*>(this, "FNFSMessageHeader.Magic"); }
	unsigned int& PayloadSizeField() { return *GetNativePointerField<unsigned int*>(this, "FNFSMessageHeader.PayloadSize"); }
	unsigned int& PayloadCrcField() { return *GetNativePointerField<unsigned int*>(this, "FNFSMessageHeader.PayloadCrc"); }
};

