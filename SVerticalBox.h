#pragma once

#include "BaseDeclarations.h"
#include "SBoxPanel.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FMargin.h"

struct SVerticalBox : SBoxPanel
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SVerticalBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SVerticalBox.FArguments"); }
	SVerticalBox::FSlot * FSlot(TSharedRef<SWidget,0> InWidget) { return NativeCall<SVerticalBox::FSlot *, TSharedRef<SWidget,0>>(this, "SVerticalBox.FSlot", InWidget); }
	SVerticalBox::FSlot * AddSlot() { return NativeCall<SVerticalBox::FSlot *>(this, "SVerticalBox.AddSlot"); }
	SVerticalBox::FSlot * FSlot() { return NativeCall<SVerticalBox::FSlot *>(this, "SVerticalBox.FSlot"); }
	SVerticalBox::FSlot * FSlot(TAttribute<FMargin> InPadding) { return NativeCall<SVerticalBox::FSlot *, TAttribute<FMargin>>(this, "SVerticalBox.FSlot", InPadding); }
	static SVerticalBox::FSlot * Slot() { return NativeCall<SVerticalBox::FSlot *>(nullptr, "SVerticalBox.Slot"); }
	SVerticalBox::FSlot * FSlot(float Left, float Top, float Right, float Bottom) { return NativeCall<SVerticalBox::FSlot *, float, float, float, float>(this, "SVerticalBox.FSlot", Left, Top, Right, Bottom); }
};

