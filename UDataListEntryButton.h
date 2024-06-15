#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"

struct UDataListEntryButton : UCustomCanvasWidget
{
	char __padding[0x110L];
	FString& DisplayStringField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton.DisplayString"); }
	FString& AdditionalDisplayStringField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton.AdditionalDisplayString"); }
	FName& ContextMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryButton.ContextMenuAnchorName"); }
	FLinearColor& ForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton.ForegroundColor"); }
	bool& bUseSelectedBackgroundColorField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bUseSelectedBackgroundColor"); }
	FLinearColor& SelectedBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton.SelectedBackgroundColor"); }
	float& NameOffsetField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton.NameOffset"); }
	bool& bClickableField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bClickable"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bEnabled"); }
	bool& bUseDisplayStringField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bUseDisplayString"); }
	FLinearColor& DisplayStringColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton.DisplayStringColor"); }
	FVector2D& DisplayStringOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton.DisplayStringOffset"); }
	float& TextDisplayStringSizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton.TextDisplayStringSize"); }
	FVector2D& DisplayStringScaleField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton.DisplayStringScale"); }
	bool& bDisplayStringCenterXField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bDisplayStringCenterX"); }
	bool& bDisplayStringCenterYField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bDisplayStringCenterY"); }
	bool& bSetIndexPlusOneToDisplayStringField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bSetIndexPlusOneToDisplayString"); }
	bool& bAllowClickingWhenNoEntryField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton.bAllowClickingWhenNoEntry"); }
	UFont * DisplayStringFontField() { return GetNativePointerField<UFont *>(this, "UDataListEntryButton.DisplayStringFont"); }
	FLinearColor& DisabledColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton.DisabledColor"); }
	FLinearColor& TintColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton.TintColorOverride"); }
	FString& EntryOverridenTextField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton.EntryOverridenText"); }
	FVector2D& WrappedTextSpacingAdjustField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton.WrappedTextSpacingAdjust"); }
	UDataListEntryWidget * MyDataListEntryWidgetField() { return GetNativePointerField<UDataListEntryWidget *>(this, "UDataListEntryButton.MyDataListEntryWidget"); }
	long double& LastButtonClickedTimeField() { return *GetNativePointerField<long double*>(this, "UDataListEntryButton.LastButtonClickedTime"); }
	long double& LastDoubleClickedTimeField() { return *GetNativePointerField<long double*>(this, "UDataListEntryButton.LastDoubleClickedTime"); }
	UMenuAnchor * ContextMenuAnchorField() { return GetNativePointerField<UMenuAnchor *>(this, "UDataListEntryButton.ContextMenuAnchor"); }

	// Functions

	bool CanBeClicked() { return NativeCall<bool>(this, "UDataListEntryButton.CanBeClicked"); }
	bool CanBeDragged() { return NativeCall<bool>(this, "UDataListEntryButton.CanBeDragged"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton.ClickedButton", clickedWidget); }
	void ClickedSecondaryButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton.ClickedSecondaryButton", clickedWidget); }
	void DoubleClickedButton() { NativeCall<void>(this, "UDataListEntryButton.DoubleClickedButton"); }
	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UDataListEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	UDataListPanel * GetDataListPanel() { return NativeCall<UDataListPanel *>(this, "UDataListEntryButton.GetDataListPanel"); }
	UUI_Inventory * GetInventoryUI() { return NativeCall<UUI_Inventory *>(this, "UDataListEntryButton.GetInventoryUI"); }
	FLinearColor * GetTintColor(FLinearColor * result, const FLinearColor * color) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *>(this, "UDataListEntryButton.GetTintColor", result, color); }
	void InitializeMe(UDataListEntryWidget * forWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UDataListEntryButton.InitializeMe", forWidget); }
	bool IsDoubleClick() { return NativeCall<bool>(this, "UDataListEntryButton.IsDoubleClick"); }
	bool IsEnabled() { return NativeCall<bool>(this, "UDataListEntryButton.IsEnabled"); }
	void OnAfterContextMenuCreated(UWidget * ContextMenu) { NativeCall<void, UWidget *>(this, "UDataListEntryButton.OnAfterContextMenuCreated", ContextMenu); }
	void SetEnabled(bool bEnable) { NativeCall<void, bool>(this, "UDataListEntryButton.SetEnabled", bEnable); }
	void SetSelected(bool bSelect) { NativeCall<void, bool>(this, "UDataListEntryButton.SetSelected", bSelect); }
	bool UseCustomToolTip(bool bWantToDisplayTooltip) { return NativeCall<bool, bool>(this, "UDataListEntryButton.UseCustomToolTip", bWantToDisplayTooltip); }
};

