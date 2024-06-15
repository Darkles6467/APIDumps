#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"
#include "FJsonObject.h"

struct FJsonValueObject : FJsonValue
{
	char __padding[0x10L];
	TSharedPtr<FJsonObject,0>& ValueField() { return *GetNativePointerField<TSharedPtr<FJsonObject,0>*>(this, "FJsonValueObject.Value"); }

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueObject.GetType", result); }
	bool TryGetObject(const TSharedPtr<FJsonObject,0> ** OutObject) { return NativeCall<bool, const TSharedPtr<FJsonObject,0> **>(this, "FJsonValueObject.TryGetObject", OutObject); }
};

