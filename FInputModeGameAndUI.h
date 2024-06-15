#pragma once

#include "BaseDeclarations.h"
#include "FInputModeDataBase.h"
#include "SWidget.h"

struct FInputModeGameAndUI : FInputModeDataBase
{
	char __padding[0x18L];
	bool& bLockMouseToViewportField() { return *GetNativePointerField<bool*>(this, "FInputModeGameAndUI.bLockMouseToViewport"); }
	bool& bHideCursorDuringCaptureField() { return *GetNativePointerField<bool*>(this, "FInputModeGameAndUI.bHideCursorDuringCapture"); }

	// Functions

	FInputModeGameAndUI * SetWidgetToFocus(TSharedPtr<SWidget,0> InWidgetToFocus) { return NativeCall<FInputModeGameAndUI *, TSharedPtr<SWidget,0>>(this, "FInputModeGameAndUI.SetWidgetToFocus", InWidgetToFocus); }
	void ApplyInputMode(FReply * SlateOperations, UGameViewportClient * GameViewportClient, int ControllerId) { NativeCall<void, FReply *, UGameViewportClient *, int>(this, "FInputModeGameAndUI.ApplyInputMode", SlateOperations, GameViewportClient, ControllerId); }
};

