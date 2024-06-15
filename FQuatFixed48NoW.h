#pragma once

#include "BaseDeclarations.h"
struct FQuatFixed48NoW
{
	char __padding[0x6L];
	unsigned __int16& XField() { return *GetNativePointerField<unsigned __int16*>(this, "FQuatFixed48NoW.X"); }
	unsigned __int16& YField() { return *GetNativePointerField<unsigned __int16*>(this, "FQuatFixed48NoW.Y"); }
	unsigned __int16& ZField() { return *GetNativePointerField<unsigned __int16*>(this, "FQuatFixed48NoW.Z"); }

	// Functions

	void FromQuat(const FQuat * Quat) { NativeCall<void, const FQuat *>(this, "FQuatFixed48NoW.FromQuat", Quat); }
};

