#pragma once

#include "BaseDeclarations.h"
#include "FKeyHandle.h"

struct FIndexedCurve
{
	char __padding[0x58L];
	FKeyHandleMap& KeyHandlesToIndicesField() { return *GetNativePointerField<FKeyHandleMap*>(this, "FIndexedCurve.KeyHandlesToIndices"); }

	// Functions

	int GetNumKeys() { return NativeCall<int>(this, "FIndexedCurve.GetNumKeys"); }
	void EnsureAllIndicesHaveHandles() { NativeCall<void>(this, "FIndexedCurve.EnsureAllIndicesHaveHandles"); }
	int GetIndex(FKeyHandle KeyHandle) { return NativeCall<int, FKeyHandle>(this, "FIndexedCurve.GetIndex", KeyHandle); }
	FKeyHandle * GetKeyHandle(FKeyHandle * result, int KeyIndex) { return NativeCall<FKeyHandle *, FKeyHandle *, int>(this, "FIndexedCurve.GetKeyHandle", result, KeyIndex); }
	bool IsKeyHandleValid(FKeyHandle KeyHandle) { return NativeCall<bool, FKeyHandle>(this, "FIndexedCurve.IsKeyHandleValid", KeyHandle); }
};

