#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SWidgetBlock : SMultiBlockBaseWidget
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SWidgetBlock.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SWidgetBlock.FArguments"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SWidgetBlock.BuildMultiBlockWidget", StyleSet, StyleName); }
};

