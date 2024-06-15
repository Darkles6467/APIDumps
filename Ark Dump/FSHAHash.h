#pragma once

#include "BaseDeclarations.h"
struct FSHAHash
{
	char __padding[0x14L];
	FieldArray<char, 20> HashField() { return {this, "FSHAHash.Hash"}; }

	// Functions

	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FSHAHash.ToString", result); }
};

