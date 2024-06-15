#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "SWindow.h"

struct FInputEvent
{
	char __padding[0x20L];
	FModifierKeysState& ModifierKeysField() { return *GetNativePointerField<FModifierKeysState*>(this, "FInputEvent.ModifierKeys"); }
	bool& bIsRepeatField() { return *GetNativePointerField<bool*>(this, "FInputEvent.bIsRepeat"); }
	const FWidgetPath * EventPathField() { return GetNativePointerField<const FWidgetPath *>(this, "FInputEvent.EventPath"); }

	// Functions

	FGeometry * FindGeometry(FGeometry * result, const TSharedRef<SWidget,0> * WidgetToFind) { return NativeCall<FGeometry *, FGeometry *, const TSharedRef<SWidget,0> *>(this, "FInputEvent.FindGeometry", result, WidgetToFind); }
	TSharedRef<SWindow,0> * GetWindow(TSharedRef<SWindow,0> * result) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *>(this, "FInputEvent.GetWindow", result); }
	bool IsControlDown() { return NativeCall<bool>(this, "FInputEvent.IsControlDown"); }
};

