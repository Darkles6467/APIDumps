#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"

struct FJsonValueBoolean : FJsonValue
{
	char __padding[0x8L];
	bool& ValueField() { return *GetNativePointerField<bool*>(this, "FJsonValueBoolean.Value"); }

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueBoolean.GetType", result); }
	bool TryGetBool(bool * OutBool) { return NativeCall<bool, bool *>(this, "FJsonValueBoolean.TryGetBool", OutBool); }
	bool TryGetNumber(long double * OutNumber) { return NativeCall<bool, long double *>(this, "FJsonValueBoolean.TryGetNumber", OutNumber); }
	bool TryGetString(FString * OutString) { return NativeCall<bool, FString *>(this, "FJsonValueBoolean.TryGetString", OutString); }
};

