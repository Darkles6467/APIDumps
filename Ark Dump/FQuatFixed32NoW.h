#pragma once

#include "BaseDeclarations.h"
struct FQuatFixed32NoW
{
	char __padding[0x4L];
	unsigned int& PackedField() { return *GetNativePointerField<unsigned int*>(this, "FQuatFixed32NoW.Packed"); }

	// Functions

	void FromQuat(const FQuat * Quat) { NativeCall<void, const FQuat *>(this, "FQuatFixed32NoW.FromQuat", Quat); }
};

