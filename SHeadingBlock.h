#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SHeadingBlock : SMultiBlockBaseWidget
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SHeadingBlock.FArguments"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SHeadingBlock.BuildMultiBlockWidget", StyleSet, StyleName); }
};

