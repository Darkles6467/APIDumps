#pragma once

#include "BaseDeclarations.h"
struct FDefaultValueHelper
{

	// Functions

	static bool IsStringValidFloat(const wchar_t * Start, const wchar_t * End) { return NativeCall<bool, const wchar_t *, const wchar_t *>(nullptr, "FDefaultValueHelper.IsStringValidFloat", Start, End); }
	static bool IsStringValidFloat(const FString * Source) { return NativeCall<bool, const FString *>(nullptr, "FDefaultValueHelper.IsStringValidFloat", Source); }
	static FString * RemoveWhitespaces(FString * result, const FString * Source) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FDefaultValueHelper.RemoveWhitespaces", result, Source); }
	static bool Trim(const wchar_t ** Start, const wchar_t * End) { return NativeCall<bool, const wchar_t **, const wchar_t *>(nullptr, "FDefaultValueHelper.Trim", Start, End); }
};

