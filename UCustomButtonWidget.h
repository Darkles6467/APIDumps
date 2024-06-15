#pragma once

#include "BaseDeclarations.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCustomButtonWidget : UButton
{
	char __padding[0x58L];
	FCustomButtonWidgetStyle& ExtendedWidgetStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UCustomButtonWidget.ExtendedWidgetStyle"); }
	bool& IsToggleButtonField() { return *GetNativePointerField<bool*>(this, "UCustomButtonWidget.IsToggleButton"); }
	bool& IsToggledOnField() { return *GetNativePointerField<bool*>(this, "UCustomButtonWidget.IsToggledOn"); }

	// Functions

	bool GetIsToggleButton() { return NativeCall<bool>(this, "UCustomButtonWidget.GetIsToggleButton"); }
	bool GetToggledState() { return NativeCall<bool>(this, "UCustomButtonWidget.GetToggledState"); }
	void SetExtendedStyle(const FCustomButtonWidgetStyle * Style) { NativeCall<void, const FCustomButtonWidgetStyle *>(this, "UCustomButtonWidget.SetExtendedStyle", Style); }
	void SetIsToggleButton(bool IsToggle) { NativeCall<void, bool>(this, "UCustomButtonWidget.SetIsToggleButton", IsToggle); }
	void SetToggledState(bool IsToggled) { NativeCall<void, bool>(this, "UCustomButtonWidget.SetToggledState", IsToggled); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCustomButtonWidget.SynchronizeProperties"); }
	void SetParentScrollBox(UScrollBox * InParentScrollBox) { NativeCall<void, UScrollBox *>(this, "UCustomButtonWidget.SetParentScrollBox", InParentScrollBox); }
};

