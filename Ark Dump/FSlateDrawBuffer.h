#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"

struct FSlateDrawBuffer
{
	char __padding[0x18L];
	TArray<FSlateWindowElementList>& WindowElementListsField() { return *GetNativePointerField<TArray<FSlateWindowElementList>*>(this, "FSlateDrawBuffer.WindowElementLists"); }
	int& LockedField() { return *GetNativePointerField<int*>(this, "FSlateDrawBuffer.Locked"); }

	// Functions

	FSlateWindowElementList * AddWindowElementList(TSharedRef<SWindow,0> ForWindow) { return NativeCall<FSlateWindowElementList *, TSharedRef<SWindow,0>>(this, "FSlateDrawBuffer.AddWindowElementList", ForWindow); }
};

