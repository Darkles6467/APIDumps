#pragma once

#include "BaseDeclarations.h"
#include "FSlateWordWrapperBase.h"
#include "FWordWrapper.h"

struct FSlateWordWrapperSingle : FSlateWordWrapperBase
{
	char __padding[0x18L];
	FString& ResultField() { return *GetNativePointerField<FString*>(this, "FSlateWordWrapperSingle.Result"); }
	bool& bPendingNewLineField() { return *GetNativePointerField<bool*>(this, "FSlateWordWrapperSingle.bPendingNewLine"); }
};

