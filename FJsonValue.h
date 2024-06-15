#pragma once

#include "BaseDeclarations.h"
#include "FJsonObject.h"

struct FJsonValue
{
	char __padding[0x10L];
	EJson::Type& TypeField() { return *GetNativePointerField<EJson::Type*>(this, "FJsonValue.Type"); }

	// Functions

	bool IsNull() { return NativeCall<bool>(this, "FJsonValue.IsNull"); }
	bool AsBool() { return NativeCall<bool>(this, "FJsonValue.AsBool"); }
	long double AsNumber() { return NativeCall<long double>(this, "FJsonValue.AsNumber"); }
	const TSharedPtr<FJsonObject,0> * AsObject() { return NativeCall<const TSharedPtr<FJsonObject,0> *>(this, "FJsonValue.AsObject"); }
	FString * AsString(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValue.AsString", result); }
	static bool CompareEqual(const FJsonValue * Lhs, const FJsonValue * Rhs) { return NativeCall<bool, const FJsonValue *, const FJsonValue *>(nullptr, "FJsonValue.CompareEqual", Lhs, Rhs); }
	bool TryGetNumber(int * OutNumber) { return NativeCall<bool, int *>(this, "FJsonValue.TryGetNumber", OutNumber); }
	bool TryGetNumber(unsigned int * OutNumber) { return NativeCall<bool, unsigned int *>(this, "FJsonValue.TryGetNumber", OutNumber); }
};

