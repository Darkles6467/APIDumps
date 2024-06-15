#pragma once

#include "BaseDeclarations.h"
struct FRegexMatcher
{
	char __padding[0x10L];
	TSharedRef<FRegexMatcherImplementation,0>& ImplementationField() { return *GetNativePointerField<TSharedRef<FRegexMatcherImplementation,0>*>(this, "FRegexMatcher.Implementation"); }

	// Functions

	bool FindNext() { return NativeCall<bool>(this, "FRegexMatcher.FindNext"); }
	int GetBeginLimit() { return NativeCall<int>(this, "FRegexMatcher.GetBeginLimit"); }
	FString * GetCaptureGroup(FString * result, const int Index) { return NativeCall<FString *, FString *, const int>(this, "FRegexMatcher.GetCaptureGroup", result, Index); }
	int GetCaptureGroupBeginning(const int Index) { return NativeCall<int, const int>(this, "FRegexMatcher.GetCaptureGroupBeginning", Index); }
	int GetCaptureGroupEnding(const int Index) { return NativeCall<int, const int>(this, "FRegexMatcher.GetCaptureGroupEnding", Index); }
	int GetEndLimit() { return NativeCall<int>(this, "FRegexMatcher.GetEndLimit"); }
	int GetMatchBeginning() { return NativeCall<int>(this, "FRegexMatcher.GetMatchBeginning"); }
	int GetMatchEnding() { return NativeCall<int>(this, "FRegexMatcher.GetMatchEnding"); }
	void SetLimits(const int BeginIndex, const int EndIndex) { NativeCall<void, const int, const int>(this, "FRegexMatcher.SetLimits", BeginIndex, EndIndex); }
};

