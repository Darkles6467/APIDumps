#pragma once

#include "BaseDeclarations.h"
struct FCustomItemByteArray
{
	char __padding[0x10L];
	TArray<unsigned char>& BytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCustomItemByteArray.Bytes"); }

	// Functions

};

