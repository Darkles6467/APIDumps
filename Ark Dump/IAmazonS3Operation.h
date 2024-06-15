#pragma once

#include "BaseDeclarations.h"
struct IAmazonS3Operation
{
	char __padding[0x20L];
	FString& AccessKeyIDField() { return *GetNativePointerField<FString*>(this, "IAmazonS3Operation.AccessKeyID"); }
	FString& SecretAccessKeyField() { return *GetNativePointerField<FString*>(this, "IAmazonS3Operation.SecretAccessKey"); }

	// Functions

	FString * Sign(FString * result, const FString * str) { return NativeCall<FString *, FString *, const FString *>(this, "IAmazonS3Operation.Sign", result, str); }
};

