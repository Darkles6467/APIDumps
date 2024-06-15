#pragma once

#include "BaseDeclarations.h"
struct FQuatIntervalFixed32NoW
{
	char __padding[0x4L];
	unsigned int& PackedField() { return *GetNativePointerField<unsigned int*>(this, "FQuatIntervalFixed32NoW.Packed"); }

	// Functions

	void FromQuat(const FQuat * Quat, const float * Mins, const float * Ranges) { NativeCall<void, const FQuat *, const float *, const float *>(this, "FQuatIntervalFixed32NoW.FromQuat", Quat, Mins, Ranges); }
	void ToQuat(FQuat * Out, const float * Mins, const float * Ranges) { NativeCall<void, FQuat *, const float *, const float *>(this, "FQuatIntervalFixed32NoW.ToQuat", Out, Mins, Ranges); }
};

