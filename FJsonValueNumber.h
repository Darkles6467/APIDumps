#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"

struct FJsonValueNumber : FJsonValue
{
	char __padding[0x8L];
	long double& ValueField() { return *GetNativePointerField<long double*>(this, "FJsonValueNumber.Value"); }

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueNumber.GetType", result); }
	bool TryGetBool(bool * OutBool) { return NativeCall<bool, bool *>(this, "FJsonValueNumber.TryGetBool", OutBool); }
	bool TryGetNumber(long double * OutNumber) { return NativeCall<bool, long double *>(this, "FJsonValueNumber.TryGetNumber", OutNumber); }
	bool TryGetString(FString * OutString) { return NativeCall<bool, FString *>(this, "FJsonValueNumber.TryGetString", OutString); }
};

