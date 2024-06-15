#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"

struct UKismetInputLibrary : UBlueprintFunctionLibrary
{

	// Functions

	float PointerEvent_GetWheelDelta() { return NativeCall<float>(this, "UKismetInputLibrary.PointerEvent_GetWheelDelta"); }
	float ControllerEvent_GetAnalogValue() { return NativeCall<float>(this, "UKismetInputLibrary.ControllerEvent_GetAnalogValue"); }
	bool InputEvent_IsRepeat() { return NativeCall<bool>(this, "UKismetInputLibrary.InputEvent_IsRepeat"); }
	bool InputEvent_IsShiftDown() { return NativeCall<bool>(this, "UKismetInputLibrary.InputEvent_IsShiftDown"); }
	int ControllerEvent_GetUserIndex() { return NativeCall<int>(this, "UKismetInputLibrary.ControllerEvent_GetUserIndex"); }
	static FKey * GetKey(FKey * result, const FKeyboardEvent * Input) { return NativeCall<FKey *, FKey *, const FKeyboardEvent *>(nullptr, "UKismetInputLibrary.GetKey", result, Input); }
	static bool EqualEqual_KeyKey(FKey A, FKey B) { return NativeCall<bool, FKey, FKey>(nullptr, "UKismetInputLibrary.EqualEqual_KeyKey", A, B); }
	bool InputEvent_IsAltDown() { return NativeCall<bool>(this, "UKismetInputLibrary.InputEvent_IsAltDown"); }
	static bool InputEvent_IsCommandDown(const FInputEvent * Input) { return NativeCall<bool, const FInputEvent *>(nullptr, "UKismetInputLibrary.InputEvent_IsCommandDown", Input); }
	static bool InputEvent_IsLeftAltDown(const FInputEvent * Input) { return NativeCall<bool, const FInputEvent *>(nullptr, "UKismetInputLibrary.InputEvent_IsLeftAltDown", Input); }
	static bool InputEvent_IsLeftCommandDown(const FInputEvent * Input) { return NativeCall<bool, const FInputEvent *>(nullptr, "UKismetInputLibrary.InputEvent_IsLeftCommandDown", Input); }
	static bool InputEvent_IsRightAltDown(const FInputEvent * Input) { return NativeCall<bool, const FInputEvent *>(nullptr, "UKismetInputLibrary.InputEvent_IsRightAltDown", Input); }
	static bool InputEvent_IsRightCommandDown(const FInputEvent * Input) { return NativeCall<bool, const FInputEvent *>(nullptr, "UKismetInputLibrary.InputEvent_IsRightCommandDown", Input); }
	bool InputEvent_IsRightControlDown() { return NativeCall<bool>(this, "UKismetInputLibrary.InputEvent_IsRightControlDown"); }
	static FVector2D * PointerEvent_GetCursorDelta(FVector2D * result, const FPointerEvent * Input) { return NativeCall<FVector2D *, FVector2D *, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetCursorDelta", result, Input); }
	static FKey * PointerEvent_GetEffectingButton(FKey * result, const FPointerEvent * Input) { return NativeCall<FKey *, FKey *, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetEffectingButton", result, Input); }
	static FVector2D * PointerEvent_GetGestureDelta(FVector2D * result, const FPointerEvent * Input) { return NativeCall<FVector2D *, FVector2D *, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetGestureDelta", result, Input); }
	static FVector2D * PointerEvent_GetLastScreenSpacePosition(FVector2D * result, const FPointerEvent * Input) { return NativeCall<FVector2D *, FVector2D *, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetLastScreenSpacePosition", result, Input); }
	static FVector2D * PointerEvent_GetScreenSpacePosition(FVector2D * result, const FPointerEvent * Input) { return NativeCall<FVector2D *, FVector2D *, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetScreenSpacePosition", result, Input); }
	static int PointerEvent_GetUserIndex(const FPointerEvent * Input) { return NativeCall<int, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetUserIndex", Input); }
	static bool PointerEvent_IsMouseButtonDown(const FPointerEvent * Input, FKey MouseButton) { return NativeCall<bool, const FPointerEvent *, FKey>(nullptr, "UKismetInputLibrary.PointerEvent_IsMouseButtonDown", Input, MouseButton); }
	static bool PointerEvent_IsTouchEvent(const FPointerEvent * Input) { return NativeCall<bool, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_IsTouchEvent", Input); }
	static int PointerEvent_GetPointerIndex(const FPointerEvent * Input) { return NativeCall<int, const FPointerEvent *>(nullptr, "UKismetInputLibrary.PointerEvent_GetPointerIndex", Input); }
	bool InputEvent_IsLeftControlDown() { return NativeCall<bool>(this, "UKismetInputLibrary.InputEvent_IsLeftControlDown"); }
};

