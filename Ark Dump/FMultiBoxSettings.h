#pragma once

#include "BaseDeclarations.h"
#include "SToolTip.h"
#include "SWidget.h"

struct FMultiBoxSettings
{

	// Functions

	static TSharedRef<SToolTip,0> * ConstructDefaultToolTip(TSharedRef<SToolTip,0> * result, const TAttribute<FText> * ToolTipText, const TSharedPtr<SWidget,0> * OverrideContent, const TSharedPtr<FUICommandInfo const ,0> * Action) { return NativeCall<TSharedRef<SToolTip,0> *, TSharedRef<SToolTip,0> *, const TAttribute<FText> *, const TSharedPtr<SWidget,0> *, const TSharedPtr<FUICommandInfo const ,0> *>(nullptr, "FMultiBoxSettings.ConstructDefaultToolTip", result, ToolTipText, OverrideContent, Action); }
};

