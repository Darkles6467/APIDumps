#pragma once

#include "BaseDeclarations.h"
#include "SButton.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SHyperlink : SButton
{
	char __padding[0x8L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SHyperlink.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SHyperlink.FArguments"); }
	void Construct(const SHyperlink::FArguments * InArgs) { NativeCall<void, const SHyperlink::FArguments *>(this, "SHyperlink.Construct", InArgs); }
	FReply * Hyperlink_OnClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SHyperlink.Hyperlink_OnClicked", result); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SHyperlink.OnCursorQuery", result, MyGeometry, CursorEvent); }
};

struct SRichTextHyperlink : SHyperlink
{
	char __padding[0x10L];
	TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel,0>& ViewModelField() { return *GetNativePointerField<TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel,0>*>(this, "SRichTextHyperlink.ViewModel"); }
};

