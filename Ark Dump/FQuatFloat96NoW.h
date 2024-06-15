#pragma once

#include "BaseDeclarations.h"
struct FQuatFloat96NoW
{
	char __padding[0xcL];
	float& XField() { return *GetNativePointerField<float*>(this, "FQuatFloat96NoW.X"); }
	float& YField() { return *GetNativePointerField<float*>(this, "FQuatFloat96NoW.Y"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FQuatFloat96NoW.Z"); }

	// Functions

	void FromQuat(const FQuat * Quat) { NativeCall<void, const FQuat *>(this, "FQuatFloat96NoW.FromQuat", Quat); }
};

