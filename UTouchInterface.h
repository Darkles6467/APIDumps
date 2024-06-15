#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SVirtualJoystick.h"

struct UTouchInterface : UObject
{
	char __padding[0x30L];
	TArray<FTouchInputControl>& ControlsField() { return *GetNativePointerField<TArray<FTouchInputControl>*>(this, "UTouchInterface.Controls"); }
	float& ActiveOpacityField() { return *GetNativePointerField<float*>(this, "UTouchInterface.ActiveOpacity"); }
	float& InactiveOpacityField() { return *GetNativePointerField<float*>(this, "UTouchInterface.InactiveOpacity"); }
	float& TimeUntilDeactiveField() { return *GetNativePointerField<float*>(this, "UTouchInterface.TimeUntilDeactive"); }
	float& TimeUntilResetField() { return *GetNativePointerField<float*>(this, "UTouchInterface.TimeUntilReset"); }
	float& ActivationDelayField() { return *GetNativePointerField<float*>(this, "UTouchInterface.ActivationDelay"); }
	bool& bPreventRecenterField() { return *GetNativePointerField<bool*>(this, "UTouchInterface.bPreventRecenter"); }
	float& StartupDelayField() { return *GetNativePointerField<float*>(this, "UTouchInterface.StartupDelay"); }

	// Functions

	void Activate(TSharedPtr<SVirtualJoystick,0> VirtualJoystick) { NativeCall<void, TSharedPtr<SVirtualJoystick,0>>(this, "UTouchInterface.Activate", VirtualJoystick); }
};

