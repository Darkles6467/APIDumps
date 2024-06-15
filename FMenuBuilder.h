#pragma once

#include "BaseDeclarations.h"
#include "FBaseMenuBuilder.h"
#include "FMultiBoxBuilder.h"
#include "SWidget.h"

struct FMenuBuilder : FBaseMenuBuilder
{
	char __padding[0x38L];
	FName& CurrentSectionExtensionHookField() { return *GetNativePointerField<FName*>(this, "FMenuBuilder.CurrentSectionExtensionHook"); }
	FText& CurrentSectionHeadingTextField() { return *GetNativePointerField<FText*>(this, "FMenuBuilder.CurrentSectionHeadingText"); }
	bool& bSectionNeedsToBeAppliedField() { return *GetNativePointerField<bool*>(this, "FMenuBuilder.bSectionNeedsToBeApplied"); }

	// Functions

	void AddWidget(TSharedRef<SWidget,0> InWidget, const FText * Label, bool bNoIndent) { NativeCall<void, TSharedRef<SWidget,0>, const FText *, bool>(this, "FMenuBuilder.AddWidget", InWidget, Label, bNoIndent); }
	void ApplyHook(FName InExtensionHook, EExtensionHook::Position HookPosition) { NativeCall<void, FName, EExtensionHook::Position>(this, "FMenuBuilder.ApplyHook", InExtensionHook, HookPosition); }
	void ApplySectionBeginning() { NativeCall<void>(this, "FMenuBuilder.ApplySectionBeginning"); }
	void BeginSection(FName InExtensionHook, const TAttribute<FText> * InHeadingText) { NativeCall<void, FName, const TAttribute<FText> *>(this, "FMenuBuilder.BeginSection", InExtensionHook, InHeadingText); }
	void EndSection() { NativeCall<void>(this, "FMenuBuilder.EndSection"); }
};

