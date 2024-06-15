#pragma once

#include "BaseDeclarations.h"
struct FBase64
{

	// Functions

	static bool Decode(const FString * Source, TArray<unsigned char> * Dest) { return NativeCall<bool, const FString *, TArray<unsigned char> *>(nullptr, "FBase64.Decode", Source, Dest); }
	static FString * Encode(FString * result, const TArray<unsigned char> * Source) { return NativeCall<FString *, FString *, const TArray<unsigned char> *>(nullptr, "FBase64.Encode", result, Source); }
	static FString * Encode(FString * result, char * Source, unsigned int Length) { return NativeCall<FString *, FString *, char *, unsigned int>(nullptr, "FBase64.Encode", result, Source, Length); }
};

