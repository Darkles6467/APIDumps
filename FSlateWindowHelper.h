#pragma once

#include "BaseDeclarations.h"
#include "EVisibility.h"
#include "SWindow.h"

struct FSlateWindowHelper
{

	// Functions

	static bool FindPathToWidget(const TArray<TSharedRef<SWindow,0>> WindowsToSearch, TSharedRef<SWidget const ,0> InWidget, FWidgetPath * OutWidgetPath, EVisibility VisibilityFilter) { return NativeCall<bool, const TArray<TSharedRef<SWindow,0>>, TSharedRef<SWidget const ,0>, FWidgetPath *, EVisibility>(nullptr, "FSlateWindowHelper.FindPathToWidget", WindowsToSearch, InWidget, OutWidgetPath, VisibilityFilter); }
	static void RemoveWindowFromList(TArray<TSharedRef<SWindow,0>> * Windows, const TSharedRef<SWindow,0> * WindowToRemove) { NativeCall<void, TArray<TSharedRef<SWindow,0>> *, const TSharedRef<SWindow,0> *>(nullptr, "FSlateWindowHelper.RemoveWindowFromList", Windows, WindowToRemove); }
};

