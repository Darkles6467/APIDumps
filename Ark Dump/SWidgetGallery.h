#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWidgetGallery : SCompoundWidget
{
	enum ERadioChoice
	{
		Radio0 = 0x0,
		Radio1 = 0x1,
		Radio2 = 0x2,
	};

	char __padding[0xd8L];
	TSharedPtr<SBreadcrumbTrail<int>,0>& BreadcrumbTrailField() { return *GetNativePointerField<TSharedPtr<SBreadcrumbTrail<int>,0>*>(this, "SWidgetGallery.BreadcrumbTrail"); }
	bool& CheckBox1ChoiceField() { return *GetNativePointerField<bool*>(this, "SWidgetGallery.CheckBox1Choice"); }
	bool& CheckBox2ChoiceField() { return *GetNativePointerField<bool*>(this, "SWidgetGallery.CheckBox2Choice"); }
	bool& CheckBox3ChoiceField() { return *GetNativePointerField<bool*>(this, "SWidgetGallery.CheckBox3Choice"); }
	TSharedPtr<FString,0>& ComboStringField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "SWidgetGallery.ComboString"); }
	EVisibility& IsActiveTabVisibilityField() { return *GetNativePointerField<EVisibility*>(this, "SWidgetGallery.IsActiveTabVisibility"); }
	FCurveSequence& ProgressCurveField() { return *GetNativePointerField<FCurveSequence*>(this, "SWidgetGallery.ProgressCurve"); }
	TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>& SecondComboBoxField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>*>(this, "SWidgetGallery.SecondComboBox"); }
	TArray<TSharedPtr<FString,0>>& SecondComboBoxOptionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "SWidgetGallery.SecondComboBoxOptions"); }
	TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>& SelectorComboBoxField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>*>(this, "SWidgetGallery.SelectorComboBox"); }
	TArray<TSharedPtr<FString,0>>& SelectorComboBoxOptionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "SWidgetGallery.SelectorComboBoxOptions"); }
	TSharedPtr<FString,0>& SelectorComboBoxSelectedItemField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "SWidgetGallery.SelectorComboBoxSelectedItem"); }
	TSharedPtr<STextComboBox,0>& TextComboBoxField() { return *GetNativePointerField<TSharedPtr<STextComboBox,0>*>(this, "SWidgetGallery.TextComboBox"); }
	TArray<TSharedPtr<FString,0>>& TextComboBoxOptionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "SWidgetGallery.TextComboBoxOptions"); }
	TSharedPtr<FString,0>& TextComboBoxSelectedItemField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "SWidgetGallery.TextComboBoxSelectedItem"); }
};

