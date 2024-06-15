#pragma once

#include "BaseDeclarations.h"
struct FKeyBind
{
	char __padding[0x30L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FKeyBind.Key"); }
	FString& CommandField() { return *GetNativePointerField<FString*>(this, "FKeyBind.Command"); }

	// Functions

	FKeyBind * operator=(const FKeyBind * __that) { return NativeCall<FKeyBind *, const FKeyBind *>(this, "FKeyBind.operator=", __that); }
};

