#pragma once

#include "BaseDeclarations.h"
#include "SButton.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSubMenuButton : SButton
{
	char __padding[0x18L];
	TAttribute<bool>& ShouldAppearHoveredField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SSubMenuButton.ShouldAppearHovered"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SSubMenuButton.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SSubMenuButton.FArguments"); }
	SSubMenuButton::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SSubMenuButton::FArguments *, const TSharedRef<SWidget,0>>(this, "SSubMenuButton.FArguments", InChild); }
	void Construct(const SSubMenuButton::FArguments * InArgs) { NativeCall<void, const SSubMenuButton::FArguments *>(this, "SSubMenuButton.Construct", InArgs); }
	FSlateColor * InvertOnHover(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SSubMenuButton.InvertOnHover", result); }
};

