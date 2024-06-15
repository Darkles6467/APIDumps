#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCharacterViewPanelWidget : UUserWidget
{
	char __padding[0x28L];
	FString& PreviewWidgetNameField() { return *GetNativePointerField<FString*>(this, "UCharacterViewPanelWidget.PreviewWidgetName"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UCharacterViewPanelWidget.InventoryUI"); }
	UUI_PreviewWidget * PreviewWidgetField() { return GetNativePointerField<UUI_PreviewWidget *>(this, "UCharacterViewPanelWidget.PreviewWidget"); }

	// Functions

	void HidePreview() { NativeCall<void>(this, "UCharacterViewPanelWidget.HidePreview"); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UCharacterViewPanelWidget.Init", InInventoryUI); }
	void RefreshPreviewWidget() { NativeCall<void>(this, "UCharacterViewPanelWidget.RefreshPreviewWidget"); }
	void ShowPreview() { NativeCall<void>(this, "UCharacterViewPanelWidget.ShowPreview"); }
	UUI_PreviewWidget * GetPreviewWidget() { return NativeCall<UUI_PreviewWidget *>(this, "UCharacterViewPanelWidget.GetPreviewWidget"); }
};

