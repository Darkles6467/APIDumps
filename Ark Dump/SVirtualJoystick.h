#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SVirtualJoystick : SLeafWidget
{
	enum EVirtualJoystickState
	{
		State_Active = 0x0,
		State_CountingDownToInactive = 0x1,
		State_CountingDownToReset = 0x2,
		State_Inactive = 0x3,
		State_WaitForStart = 0x4,
		State_CountingDownToStart = 0x5,
	};

	char __padding[0x38L];
	TArray<SVirtualJoystick::FControlInfo>& ControlsField() { return *GetNativePointerField<TArray<SVirtualJoystick::FControlInfo>*>(this, "SVirtualJoystick.Controls"); }
	float& ActiveOpacityField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.ActiveOpacity"); }
	float& InactiveOpacityField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.InactiveOpacity"); }
	float& TimeUntilDeactiveField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.TimeUntilDeactive"); }
	float& TimeUntilResetField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.TimeUntilReset"); }
	float& ActivationDelayField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.ActivationDelay"); }
	float& StartupDelayField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.StartupDelay"); }
	SVirtualJoystick::EVirtualJoystickState& StateField() { return *GetNativePointerField<SVirtualJoystick::EVirtualJoystickState*>(this, "SVirtualJoystick.State"); }
	float& CurrentOpacityField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.CurrentOpacity"); }
	float& CountdownField() { return *GetNativePointerField<float*>(this, "SVirtualJoystick.Countdown"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SVirtualJoystick.ComputeDesiredSize", result); }
	void Construct(const SVirtualJoystick::FArguments * InArgs) { NativeCall<void, const SVirtualJoystick::FArguments *>(this, "SVirtualJoystick.Construct", InArgs); }
	bool HandleTouch(int ControlIndex, const FVector2D * LocalCoord, const FVector2D * ScreenSize) { return NativeCall<bool, int, const FVector2D *, const FVector2D *>(this, "SVirtualJoystick.HandleTouch", ControlIndex, LocalCoord, ScreenSize); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SVirtualJoystick.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * Event) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SVirtualJoystick.OnTouchEnded", result, MyGeometry, Event); }
	FReply * OnTouchMoved(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * Event) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SVirtualJoystick.OnTouchMoved", result, MyGeometry, Event); }
	FReply * OnTouchStarted(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * Event) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SVirtualJoystick.OnTouchStarted", result, MyGeometry, Event); }
	void SetGlobalParameters(float InActiveOpacity, float InInactiveOpacity, float InTimeUntilDeactive, float InTimeUntilReset, float InActivationDelay, bool InbPreventReCenter, float InStartupDelay) { NativeCall<void, float, float, float, float, float, bool, float>(this, "SVirtualJoystick.SetGlobalParameters", InActiveOpacity, InInactiveOpacity, InTimeUntilDeactive, InTimeUntilReset, InActivationDelay, InbPreventReCenter, InStartupDelay); }
	void SetJoystickVisibility(const bool bInVisible, const bool bInFade) { NativeCall<void, const bool, const bool>(this, "SVirtualJoystick.SetJoystickVisibility", bInVisible, bInFade); }
	static bool ShouldDisplayTouchInterface() { return NativeCall<bool>(nullptr, "SVirtualJoystick.ShouldDisplayTouchInterface"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SVirtualJoystick.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void FArguments() { NativeCall<void>(this, "SVirtualJoystick.FArguments"); }
	void FControlInfo() { NativeCall<void>(this, "SVirtualJoystick.FControlInfo"); }
	void FControlInfo(const SVirtualJoystick::FControlInfo * __that) { NativeCall<void, const SVirtualJoystick::FControlInfo *>(this, "SVirtualJoystick.FControlInfo", __that); }
};

