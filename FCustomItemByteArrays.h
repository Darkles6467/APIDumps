#pragma once

#include "BaseDeclarations.h"
struct FCustomItemByteArrays
{
	char __padding[0x10L];
	TArray<FCustomItemByteArray>& ByteArraysField() { return *GetNativePointerField<TArray<FCustomItemByteArray>*>(this, "FCustomItemByteArrays.ByteArrays"); }

	// Functions

};

