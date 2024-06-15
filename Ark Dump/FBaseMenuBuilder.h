#pragma once

#include "BaseDeclarations.h"
#include "FMultiBoxBuilder.h"

struct FBaseMenuBuilder : FMultiBoxBuilder
{
	char __padding[0x8L];
	bool& bCloseSelfOnlyField() { return *GetNativePointerField<bool*>(this, "FBaseMenuBuilder.bCloseSelfOnly"); }

	// Functions

	void AddMenuEntry(const TAttribute<FText> * InLabel, const TAttribute<FText> * InToolTip, const FSlateIcon * InIcon, const FUIAction * InAction, FName InExtensionHook, const EUserInterfaceActionType::Type UserInterfaceActionType, FName InTutorialHighlightName) { NativeCall<void, const TAttribute<FText> *, const TAttribute<FText> *, const FSlateIcon *, const FUIAction *, FName, const EUserInterfaceActionType::Type, FName>(this, "FBaseMenuBuilder.AddMenuEntry", InLabel, InToolTip, InIcon, InAction, InExtensionHook, UserInterfaceActionType, InTutorialHighlightName); }
	void AddMenuEntry(const TSharedPtr<FUICommandInfo const ,0> InCommand, FName InExtensionHook, const TAttribute<FText> * InLabelOverride, const TAttribute<FText> * InToolTipOverride, const FSlateIcon * InIconOverride, FName InTutorialHighlightName) { NativeCall<void, const TSharedPtr<FUICommandInfo const ,0>, FName, const TAttribute<FText> *, const TAttribute<FText> *, const FSlateIcon *, FName>(this, "FBaseMenuBuilder.AddMenuEntry", InCommand, InExtensionHook, InLabelOverride, InToolTipOverride, InIconOverride, InTutorialHighlightName); }
};

