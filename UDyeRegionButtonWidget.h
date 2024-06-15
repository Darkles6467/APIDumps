#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDyeRegionButtonWidget : UPrimalUI
{
	char __padding[0x48L];
	FLinearColor& DefaultBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDyeRegionButtonWidget.DefaultBackgroundColor"); }
	FLinearColor& DefaultPreviewColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDyeRegionButtonWidget.DefaultPreviewColor"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDyeRegionButtonWidget.Button"); }
	UTextBlock * DisplayStringField() { return GetNativePointerField<UTextBlock *>(this, "UDyeRegionButtonWidget.DisplayString"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDyeRegionButtonWidget.ClickedButton", clickedWidget); }
	void InitializeMe() { NativeCall<void>(this, "UDyeRegionButtonWidget.InitializeMe"); }
	bool IsEnabled() { return NativeCall<bool>(this, "UDyeRegionButtonWidget.IsEnabled"); }
	void ResetDefaultPreviewColor() { NativeCall<void>(this, "UDyeRegionButtonWidget.ResetDefaultPreviewColor"); }
	void SetBackgroundColor(FLinearColor NewColor) { NativeCall<void, FLinearColor>(this, "UDyeRegionButtonWidget.SetBackgroundColor", NewColor); }
	void SetDisplayString(FString String) { NativeCall<void, FString>(this, "UDyeRegionButtonWidget.SetDisplayString", String); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UDyeRegionButtonWidget.SetEnabled", bEnabled); }
	void SetPreviewColor(FLinearColor NewColor) { NativeCall<void, FLinearColor>(this, "UDyeRegionButtonWidget.SetPreviewColor", NewColor); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDyeRegionButtonWidget.SetSelected", bSelected); }
};

