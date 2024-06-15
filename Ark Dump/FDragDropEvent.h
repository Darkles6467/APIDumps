#pragma once

#include "BaseDeclarations.h"
#include "FInputEvent.h"
#include "FKey.h"

struct FPointerEvent : FInputEvent
{
	char __padding[0x58L];
	FVector2D& ScreenSpacePositionField() { return *GetNativePointerField<FVector2D*>(this, "FPointerEvent.ScreenSpacePosition"); }
	FVector2D& LastScreenSpacePositionField() { return *GetNativePointerField<FVector2D*>(this, "FPointerEvent.LastScreenSpacePosition"); }
	FVector2D& CursorDeltaField() { return *GetNativePointerField<FVector2D*>(this, "FPointerEvent.CursorDelta"); }
	FKey& EffectingButtonField() { return *GetNativePointerField<FKey*>(this, "FPointerEvent.EffectingButton"); }
	unsigned int& UserIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPointerEvent.UserIndex"); }
	unsigned int& PointerIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPointerEvent.PointerIndex"); }
	unsigned int& TouchpadIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPointerEvent.TouchpadIndex"); }
	bool& bIsTouchEventField() { return *GetNativePointerField<bool*>(this, "FPointerEvent.bIsTouchEvent"); }
	EGestureEvent::Type& GestureTypeField() { return *GetNativePointerField<EGestureEvent::Type*>(this, "FPointerEvent.GestureType"); }
	FVector2D& WheelOrGestureDeltaField() { return *GetNativePointerField<FVector2D*>(this, "FPointerEvent.WheelOrGestureDelta"); }
	char& FlagsField() { return *GetNativePointerField<char*>(this, "FPointerEvent.Flags"); }

	// Functions

	bool IsMouseButtonDown(FKey MouseButton) { return NativeCall<bool, FKey>(this, "FPointerEvent.IsMouseButtonDown", MouseButton); }
	FKey * GetEffectingButton(FKey * result) { return NativeCall<FKey *, FKey *>(this, "FPointerEvent.GetEffectingButton", result); }
	FVector2D * GetCursorDelta(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "FPointerEvent.GetCursorDelta", result); }
};

struct FDragDropEvent : FPointerEvent
{
	char __padding[0x10L];

	// Functions

};

