#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "FKey.h"

struct FReply
{
	char __padding[0xa0L];
	TOptional<FIntPoint>& RequestedMousePosField() { return *GetNativePointerField<TOptional<FIntPoint>*>(this, "FReply.RequestedMousePos"); }
	FKey& DetectDragForMouseButtonField() { return *GetNativePointerField<FKey*>(this, "FReply.DetectDragForMouseButton"); }
	EKeyboardFocusCause::Type& FocusChangeReasonField() { return *GetNativePointerField<EKeyboardFocusCause::Type*>(this, "FReply.FocusChangeReason"); }

	// Functions

	FReply * operator=(const FReply * __that) { return NativeCall<FReply *, const FReply *>(this, "FReply.operator=", __that); }
	static FReply * Unhandled(FReply * result) { return NativeCall<FReply *, FReply *>(nullptr, "FReply.Unhandled", result); }
	static FReply * Handled(FReply * result) { return NativeCall<FReply *, FReply *>(nullptr, "FReply.Handled", result); }
	bool IsEventHandled() { return NativeCall<bool>(this, "FReply.IsEventHandled"); }
	FReply * BeginDragDrop(TSharedRef<FDragDropOperation,0> InDragDropContent) { return NativeCall<FReply *, TSharedRef<FDragDropOperation,0>>(this, "FReply.BeginDragDrop", InDragDropContent); }
	FReply * DetectDrag(const TSharedRef<SWidget,0> * DetectDragInMe, FKey MouseButton) { return NativeCall<FReply *, const TSharedRef<SWidget,0> *, FKey>(this, "FReply.DetectDrag", DetectDragInMe, MouseButton); }
	FReply * CaptureMouse(TSharedRef<SWidget,0> InMouseCaptor) { return NativeCall<FReply *, TSharedRef<SWidget,0>>(this, "FReply.CaptureMouse", InMouseCaptor); }
	FReply * ReleaseMouseCapture() { return NativeCall<FReply *>(this, "FReply.ReleaseMouseCapture"); }
	const AccountId * GetMouseCaptor() { return NativeCall<const AccountId *>(this, "FReply.GetMouseCaptor"); }
	FReply * CaptureJoystick(TSharedRef<SWidget,0> InJoystickCaptor, bool bInAllJoysticks) { return NativeCall<FReply *, TSharedRef<SWidget,0>, bool>(this, "FReply.CaptureJoystick", InJoystickCaptor, bInAllJoysticks); }
	FKey * GetDetectDragRequestButton(FKey * result) { return NativeCall<FKey *, FKey *>(this, "FReply.GetDetectDragRequestButton", result); }
	FReply * ReleaseMouseLock() { return NativeCall<FReply *>(this, "FReply.ReleaseMouseLock"); }
	FReply * SetKeyboardFocus(TSharedRef<SWidget,0> GiveMeFocus, EKeyboardFocusCause::Type ReasonFocusIsChanging) { return NativeCall<FReply *, TSharedRef<SWidget,0>, EKeyboardFocusCause::Type>(this, "FReply.SetKeyboardFocus", GiveMeFocus, ReasonFocusIsChanging); }
	FReply * UseHighPrecisionMouseMovement(TSharedRef<SWidget,0> InMouseCaptor) { return NativeCall<FReply *, TSharedRef<SWidget,0>>(this, "FReply.UseHighPrecisionMouseMovement", InMouseCaptor); }
	FReply * LockMouseToWidget(TSharedRef<SWidget,0> InWidget) { return NativeCall<FReply *, TSharedRef<SWidget,0>>(this, "FReply.LockMouseToWidget", InWidget); }
};

