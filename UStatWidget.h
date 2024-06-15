#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStatWidget : UUserWidget
{
	char __padding[0xa0L];
	FText& StatNameField() { return *GetNativePointerField<FText*>(this, "UStatWidget.StatName"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UStatWidget.InventoryUI"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& LinkedCharacterStatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "UStatWidget.LinkedCharacterStatusValueType"); }
	FName& StatTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatTextBlockName"); }
	FName& StatValueBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatValueBlockName"); }
	FName& StatImageNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatImageName"); }
	FName& StatBarNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatBarName"); }
	FName& StatButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatButtonName"); }
	UProgressBar * StatBarField() { return GetNativePointerField<UProgressBar *>(this, "UStatWidget.StatBar"); }
	UTextBlock * StatTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatWidget.StatTextBlock"); }
	UTextBlock * StatValueBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatWidget.StatValueBlock"); }
	UImage * StatImageField() { return GetNativePointerField<UImage *>(this, "UStatWidget.StatImage"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UStatWidget.ClickedButton", clickedWidget); }
	void Refresh(UWidget * CurrentHighlightedWidget) { NativeCall<void, UWidget *>(this, "UStatWidget.Refresh", CurrentHighlightedWidget); }
	void SetPulsatingMode(bool bInPulsatingMode) { NativeCall<void, bool>(this, "UStatWidget.SetPulsatingMode", bInPulsatingMode); }
	void SynchronizeProperties() { NativeCall<void>(this, "UStatWidget.SynchronizeProperties"); }
};

