#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"

struct FJsonValueString : FJsonValue
{
	char __padding[0x10L];
	FString& ValueField() { return *GetNativePointerField<FString*>(this, "FJsonValueString.Value"); }

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueString.GetType", result); }
	bool TryGetBool(bool * OutBool) { return NativeCall<bool, bool *>(this, "FJsonValueString.TryGetBool", OutBool); }
	bool TryGetNumber(long double * OutDouble) { return NativeCall<bool, long double *>(this, "FJsonValueString.TryGetNumber", OutDouble); }
	bool TryGetString(FString * OutString) { return NativeCall<bool, FString *>(this, "FJsonValueString.TryGetString", OutString); }
};

