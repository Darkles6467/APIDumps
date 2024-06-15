#pragma once

#include "BaseDeclarations.h"
struct FNboSerializeToBuffer
{
	char __padding[0x18L];
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FNboSerializeToBuffer.Data"); }
	unsigned int& NumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FNboSerializeToBuffer.NumBytes"); }
	bool& bHasOverflowedField() { return *GetNativePointerField<bool*>(this, "FNboSerializeToBuffer.bHasOverflowed"); }
};

