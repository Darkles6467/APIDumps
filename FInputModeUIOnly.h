#pragma once

#include "BaseDeclarations.h"
#include "FInputModeDataBase.h"
#include "SWidget.h"

struct FInputModeUIOnly : FInputModeDataBase
{
	char __padding[0x18L];
	bool& bLockMouseToViewportField() { return *GetNativePointerField<bool*>(this, "FInputModeUIOnly.bLockMouseToViewport"); }

	// Functions

	FInputModeUIOnly * SetWidgetToFocus(TSharedPtr<SWidget,0> InWidgetToFocus) { return NativeCall<FInputModeUIOnly *, TSharedPtr<SWidget,0>>(this, "FInputModeUIOnly.SetWidgetToFocus", InWidgetToFocus); }
	void ApplyInputMode(FReply * SlateOperations, UGameViewportClient * GameViewportClient, int ControllerId) { NativeCall<void, FReply *, UGameViewportClient *, int>(this, "FInputModeUIOnly.ApplyInputMode", SlateOperations, GameViewportClient, ControllerId); }
};

