#pragma once

#include "BaseDeclarations.h"
struct FICUBreakIteratorManager
{
	char __padding[0x78L];
	FWindowsCriticalSection& AllocatedIteratorsCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FICUBreakIteratorManager.AllocatedIteratorsCS"); }

	// Functions

	TWeakPtr<icu_53::BreakIterator,0> * CreateLineBreakIterator(TWeakPtr<icu_53::BreakIterator,0> * result) { return NativeCall<TWeakPtr<icu_53::BreakIterator,0> *, TWeakPtr<icu_53::BreakIterator,0> *>(this, "FICUBreakIteratorManager.CreateLineBreakIterator", result); }
	TWeakPtr<icu_53::BreakIterator,0> * CreateWordBreakIterator(TWeakPtr<icu_53::BreakIterator,0> * result) { return NativeCall<TWeakPtr<icu_53::BreakIterator,0> *, TWeakPtr<icu_53::BreakIterator,0> *>(this, "FICUBreakIteratorManager.CreateWordBreakIterator", result); }
	void DestroyIterator(TWeakPtr<icu_53::BreakIterator,0> * InIterator) { NativeCall<void, TWeakPtr<icu_53::BreakIterator,0> *>(this, "FICUBreakIteratorManager.DestroyIterator", InIterator); }
};

