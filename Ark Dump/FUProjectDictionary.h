#pragma once

#include "BaseDeclarations.h"
struct FUProjectDictionary
{
	char __padding[0x50L];

	// Functions

	static FUProjectDictionary * GetDefault() { return NativeCall<FUProjectDictionary *>(nullptr, "FUProjectDictionary.GetDefault"); }
	FString * GetRelativeProjectPathForGame(FString * result, const wchar_t * InGameName, const FString * BaseDir) { return NativeCall<FString *, FString *, const wchar_t *, const FString *>(this, "FUProjectDictionary.GetRelativeProjectPathForGame", result, InGameName, BaseDir); }
};

