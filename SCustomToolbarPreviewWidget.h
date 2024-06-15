#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SCustomToolbarPreviewWidget : SMultiBlockBaseWidget
{
	char __padding[0x10L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SCustomToolbarPreviewWidget.FArguments"); }
	void BuildMultiBlockWidget(const ISlateStyle * StyleSet, const FName * StyleName) { NativeCall<void, const ISlateStyle *, const FName *>(this, "SCustomToolbarPreviewWidget.BuildMultiBlockWidget", StyleSet, StyleName); }
	void Construct(const SCustomToolbarPreviewWidget::FArguments * InArgs) { NativeCall<void, const SCustomToolbarPreviewWidget::FArguments *>(this, "SCustomToolbarPreviewWidget.Construct", InArgs); }
};

