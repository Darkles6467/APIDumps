#pragma once

#include "BaseDeclarations.h"
#include "FSlateWordWrapperBase.h"
#include "FWordWrapper.h"

struct FSlateWordWrapperMulti : FSlateWordWrapperBase
{
	char __padding[0x10L];
	FString * StringReferenceField() { return GetNativePointerField<FString *>(this, "FSlateWordWrapperMulti.StringReference"); }
	TArray<FWrappedStringSlice> * ResultField() { return GetNativePointerField<TArray<FWrappedStringSlice> *>(this, "FSlateWordWrapperMulti.Result"); }
};

