#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FReflectorNode.h"

struct SReflectorToolTipWidget : SCompoundWidget
{
	char __padding[0x20L];
	TAttribute<TSharedPtr<FReflectorNode,0> >& WidgetInfoField() { return *GetNativePointerField<TAttribute<TSharedPtr<FReflectorNode,0> >*>(this, "SReflectorToolTipWidget.WidgetInfo"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SReflectorToolTipWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SReflectorToolTipWidget.FArguments"); }
	void Construct(const SReflectorToolTipWidget::FArguments * InArgs) { NativeCall<void, const SReflectorToolTipWidget::FArguments *>(this, "SReflectorToolTipWidget.Construct", InArgs); }
	FString * GetEnabled(FString * result) { return NativeCall<FString *, FString *>(this, "SReflectorToolTipWidget.GetEnabled", result); }
	FString * GetSizeInfo(FString * result) { return NativeCall<FString *, FString *>(this, "SReflectorToolTipWidget.GetSizeInfo", result); }
	FString * GetWidgetActualSize(FString * result) { return NativeCall<FString *, FString *>(this, "SReflectorToolTipWidget.GetWidgetActualSize", result); }
	FString * GetWidgetsDesiredSize(FString * result) { return NativeCall<FString *, FString *>(this, "SReflectorToolTipWidget.GetWidgetsDesiredSize", result); }
	SReflectorToolTipWidget::FArguments * FArguments(TSharedPtr<FReflectorNode,0> InArg) { return NativeCall<SReflectorToolTipWidget::FArguments *, TSharedPtr<FReflectorNode,0>>(this, "SReflectorToolTipWidget.FArguments", InArg); }
};

