#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "FKey.h"

struct UContextMenuItem : UUserWidget
{
	char __padding[0x100L];
	FName& SubmenuMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SubmenuMenuAnchorName"); }
	FName& SubmenuIndicatorNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SubmenuIndicatorName"); }
	FName& ShortcutKeyWidgetNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.ShortcutKeyWidgetName"); }
	FName& SwitchNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SwitchName"); }
	FName& SwitchContainerNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SwitchContainerName"); }
	bool& IsSwitchedOnField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem.IsSwitchedOn"); }
	FName& CustomNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.CustomName"); }
	UMenuAnchor * SubmenuAnchorField() { return GetNativePointerField<UMenuAnchor *>(this, "UContextMenuItem.SubmenuAnchor"); }
	UTextBlock * LabelTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UContextMenuItem.LabelTextBlock"); }
	UInputKeyDisplayWidget * ShortcutKeyWidgetField() { return GetNativePointerField<UInputKeyDisplayWidget *>(this, "UContextMenuItem.ShortcutKeyWidget"); }
	UCheckBox * SwitchField() { return GetNativePointerField<UCheckBox *>(this, "UContextMenuItem.Switch"); }
	FText& CaptionField() { return *GetNativePointerField<FText*>(this, "UContextMenuItem.Caption"); }
	ETextJustify::Type& JustificationField() { return *GetNativePointerField<ETextJustify::Type*>(this, "UContextMenuItem.Justification"); }
	TArray<FKey>& AssignedKeysField() { return *GetNativePointerField<TArray<FKey>*>(this, "UContextMenuItem.AssignedKeys"); }
	bool& SubmenuEnabledField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem.SubmenuEnabled"); }

	// Functions

	void FOnButtonClickedEventObjectCustom(UContextMenuItem * InParam1, const FName * InParam2) { NativeCall<void, UContextMenuItem *, const FName *>(this, "UContextMenuItem.FOnButtonClickedEventObjectCustom", InParam1, InParam2); }
	FText * GetCaption(FText * result) { return NativeCall<FText *, FText *>(this, "UContextMenuItem.GetCaption", result); }
	ETextJustify::Type GetJustification() { return NativeCall<ETextJustify::Type>(this, "UContextMenuItem.GetJustification"); }
	UMenuAnchor * GetSubmenuAnchor() { return NativeCall<UMenuAnchor *>(this, "UContextMenuItem.GetSubmenuAnchor"); }
	bool GetSubmenuEnabled() { return NativeCall<bool>(this, "UContextMenuItem.GetSubmenuEnabled"); }
	void InitializeMe(UContextMenu * ParentContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenuItem.InitializeMe", ParentContextMenu); }
	void InternalRefresh() { NativeCall<void>(this, "UContextMenuItem.InternalRefresh"); }
	void OnButtonClicked() { NativeCall<void>(this, "UContextMenuItem.OnButtonClicked"); }
	void OnMouseEnter_Implementation(FGeometry MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, FGeometry, const FPointerEvent *>(this, "UContextMenuItem.OnMouseEnter_Implementation", MyGeometry, MouseEvent); }
	void SetCaption(const FText * caption) { NativeCall<void, const FText *>(this, "UContextMenuItem.SetCaption", caption); }
	void SetJustification(ETextJustify::Type Value) { NativeCall<void, ETextJustify::Type>(this, "UContextMenuItem.SetJustification", Value); }
	void SetShortcutKey(int ComboKeyIdx, FKey key) { NativeCall<void, int, FKey>(this, "UContextMenuItem.SetShortcutKey", ComboKeyIdx, key); }
	void SetSubmenuEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UContextMenuItem.SetSubmenuEnabled", bEnabled); }
	void SynchronizeProperties() { NativeCall<void>(this, "UContextMenuItem.SynchronizeProperties"); }
};

