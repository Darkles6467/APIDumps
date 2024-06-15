#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "SAutoRefreshViewport.h"

struct FInputModeDataBase
{
	char __padding[0x8L];

	// Functions

	void SetFocusAndLocking(FReply * SlateOperations, TSharedPtr<SWidget,0> InWidgetToFocus, bool bLockMouseToViewport, TSharedRef<SViewport,0> InViewportWidget) { NativeCall<void, FReply *, TSharedPtr<SWidget,0>, bool, TSharedRef<SViewport,0>>(this, "FInputModeDataBase.SetFocusAndLocking", SlateOperations, InWidgetToFocus, bLockMouseToViewport, InViewportWidget); }
};

