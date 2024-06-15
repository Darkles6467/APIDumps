#pragma once

#include "BaseDeclarations.h"
#include "ISlateStyle.h"

struct FCoreStyle
{

	// Functions

	static void SetStyle(const TSharedRef<ISlateStyle,0> * NewStyle) { NativeCall<void, const TSharedRef<ISlateStyle,0> *>(nullptr, "FCoreStyle.SetStyle", NewStyle); }
};

