#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SMenuSeparatorBlock : SMultiBlockBaseWidget
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SMenuSeparatorBlock.FArguments"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SMenuSeparatorBlock.BuildMultiBlockWidget", StyleSet, StyleName); }
};

