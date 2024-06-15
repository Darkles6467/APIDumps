#pragma once

#include "BaseDeclarations.h"
struct FQuatFloat32NoW
{
	char __padding[0x4L];
	unsigned int& PackedField() { return *GetNativePointerField<unsigned int*>(this, "FQuatFloat32NoW.Packed"); }

	// Functions

	void FromQuat(const FQuat * Quat) { NativeCall<void, const FQuat *>(this, "FQuatFloat32NoW.FromQuat", Quat); }
	void ToQuat(FQuat * Out) { NativeCall<void, FQuat *>(this, "FQuatFloat32NoW.ToQuat", Out); }
};

