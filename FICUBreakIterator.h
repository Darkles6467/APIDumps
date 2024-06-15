#pragma once

#include "BaseDeclarations.h"
#include "IBreakIterator.h"

struct FICUBreakIterator : IBreakIterator
{
	char __padding[0x10L];
	TWeakPtr<icu_53::BreakIterator,0>& ICUBreakIteratorHandleField() { return *GetNativePointerField<TWeakPtr<icu_53::BreakIterator,0>*>(this, "FICUBreakIterator.ICUBreakIteratorHandle"); }

	// Functions

	void ClearString() { NativeCall<void>(this, "FICUBreakIterator.ClearString"); }
	int GetCurrentPosition() { return NativeCall<int>(this, "FICUBreakIterator.GetCurrentPosition"); }
	TSharedRef<icu_53::BreakIterator,0> * GetInternalBreakIterator(TSharedRef<icu_53::BreakIterator,0> * result) { return NativeCall<TSharedRef<icu_53::BreakIterator,0> *, TSharedRef<icu_53::BreakIterator,0> *>(this, "FICUBreakIterator.GetInternalBreakIterator", result); }
	int MoveToCandidateAfter(const int InIndex) { return NativeCall<int, const int>(this, "FICUBreakIterator.MoveToCandidateAfter", InIndex); }
	int MoveToCandidateBefore(const int InIndex) { return NativeCall<int, const int>(this, "FICUBreakIterator.MoveToCandidateBefore", InIndex); }
	int MoveToNext() { return NativeCall<int>(this, "FICUBreakIterator.MoveToNext"); }
	int MoveToPrevious() { return NativeCall<int>(this, "FICUBreakIterator.MoveToPrevious"); }
	int ResetToBeginning() { return NativeCall<int>(this, "FICUBreakIterator.ResetToBeginning"); }
	int ResetToEnd() { return NativeCall<int>(this, "FICUBreakIterator.ResetToEnd"); }
	void SetString(const FString * InString) { NativeCall<void, const FString *>(this, "FICUBreakIterator.SetString", InString); }
	void SetString(const FText * InText) { NativeCall<void, const FText *>(this, "FICUBreakIterator.SetString", InText); }
	void SetString(const wchar_t *const InString, const int InStringLength) { NativeCall<void, const wchar_t *const, const int>(this, "FICUBreakIterator.SetString", InString, InStringLength); }
};

