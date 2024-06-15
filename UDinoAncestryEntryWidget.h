#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDinoAncestryEntryWidget : UPrimalUI
{
	char __padding[0x20L];
	UTextBlock * MaternalEntryLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoAncestryEntryWidget.MaternalEntryLabel"); }
	UTextBlock * PaternalEntryLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoAncestryEntryWidget.PaternalEntryLabel"); }
	UTextBlock * AncestryLevelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoAncestryEntryWidget.AncestryLevelLabel"); }
	UImage * ArrowIconField() { return GetNativePointerField<UImage *>(this, "UDinoAncestryEntryWidget.ArrowIcon"); }

	// Functions

	void InitializeMe() { NativeCall<void>(this, "UDinoAncestryEntryWidget.InitializeMe"); }
	void SetAncestryLevel(const FString * AncestryLevel) { NativeCall<void, const FString *>(this, "UDinoAncestryEntryWidget.SetAncestryLevel", AncestryLevel); }
	void SetIconVisibility(bool bVisible) { NativeCall<void, bool>(this, "UDinoAncestryEntryWidget.SetIconVisibility", bVisible); }
	void SetMaternalEntry(const FString * MaternalEntry) { NativeCall<void, const FString *>(this, "UDinoAncestryEntryWidget.SetMaternalEntry", MaternalEntry); }
	void SetPaternalEntry(const FString * PaternalEntry) { NativeCall<void, const FString *>(this, "UDinoAncestryEntryWidget.SetPaternalEntry", PaternalEntry); }
};

