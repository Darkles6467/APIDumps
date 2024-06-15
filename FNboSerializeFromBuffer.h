#pragma once

#include "BaseDeclarations.h"
struct FNboSerializeFromBuffer
{
	char __padding[0x18L];
	const char * DataField() { return GetNativePointerField<const char *>(this, "FNboSerializeFromBuffer.Data"); }
	const int& NumBytesField() { return *GetNativePointerField<const int*>(this, "FNboSerializeFromBuffer.NumBytes"); }
	int& CurrentOffsetField() { return *GetNativePointerField<int*>(this, "FNboSerializeFromBuffer.CurrentOffset"); }
	bool& bHasOverflowedField() { return *GetNativePointerField<bool*>(this, "FNboSerializeFromBuffer.bHasOverflowed"); }
};

