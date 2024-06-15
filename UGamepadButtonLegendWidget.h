#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGamepadButtonLegendWidget : UUserWidget
{
	char __padding[0x40L];
	FText& ButtonDescriptionField() { return *GetNativePointerField<FText*>(this, "UGamepadButtonLegendWidget.ButtonDescription"); }
	UTextBlock * ButtonDescriptionBlockField() { return GetNativePointerField<UTextBlock *>(this, "UGamepadButtonLegendWidget.ButtonDescriptionBlock"); }
	UImage * ButtonIconImageField() { return GetNativePointerField<UImage *>(this, "UGamepadButtonLegendWidget.ButtonIconImage"); }

	// Functions

	void SetText(const FText * InText) { NativeCall<void, const FText *>(this, "UGamepadButtonLegendWidget.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UGamepadButtonLegendWidget.SynchronizeProperties"); }
};

