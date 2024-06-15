#pragma once

#include "BaseDeclarations.h"
struct FWordWrapper
{
	char __padding[0x38L];
	const wchar_t *const& StringField() { return *GetNativePointerField<const wchar_t *const*>(this, "FWordWrapper.String"); }
	const int& StringLengthField() { return *GetNativePointerField<const int*>(this, "FWordWrapper.StringLength"); }
	int& StartIndexField() { return *GetNativePointerField<int*>(this, "FWordWrapper.StartIndex"); }
	TArray<TPair<int,int>> * WrappedLineDataField() { return GetNativePointerField<TArray<TPair<int,int>> *>(this, "FWordWrapper.WrappedLineData"); }

	// Functions

	int FindFirstMandatoryBreakBetween(const int InStartIndex, const int WrapIndex) { return NativeCall<int, const int, const int>(this, "FWordWrapper.FindFirstMandatoryBreakBetween", InStartIndex, WrapIndex); }
	bool ProcessLine() { return NativeCall<bool>(this, "FWordWrapper.ProcessLine"); }
};

