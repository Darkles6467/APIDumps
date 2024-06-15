#pragma once

#include "BaseDeclarations.h"
#include "IBreakIterator.h"

struct FCamelCaseBreakIterator : IBreakIterator
{
	enum ETokenType
	{
		Uppercase = 0x0,
		Lowercase = 0x1,
		Digit = 0x2,
		Null = 0x3,
		Other = 0x4,
	};

	char __padding[0x28L];
	FString& StringField() { return *GetNativePointerField<FString*>(this, "FCamelCaseBreakIterator.String"); }
	int& CurrentPositionField() { return *GetNativePointerField<int*>(this, "FCamelCaseBreakIterator.CurrentPosition"); }
	TArray<int>& BreakPointsField() { return *GetNativePointerField<TArray<int>*>(this, "FCamelCaseBreakIterator.BreakPoints"); }
};

struct FICUCamelCaseBreakIterator : FCamelCaseBreakIterator
{
};

