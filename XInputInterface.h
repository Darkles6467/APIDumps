#pragma once

#include "BaseDeclarations.h"
struct XInputInterface
{
	char __padding[0x4a8L];
	bool& bAllowControllerInputWithCursorField() { return *GetNativePointerField<bool*>(this, "XInputInterface.bAllowControllerInputWithCursor"); }
	bool& bNeedsControllerStateUpdateField() { return *GetNativePointerField<bool*>(this, "XInputInterface.bNeedsControllerStateUpdate"); }
	FieldArray<char, 24> X360ToXboxControllerMappingField() { return {this, "XInputInterface.X360ToXboxControllerMapping"}; }
	FieldArray<XInputInterface::FControllerState, 4> ControllerStatesField() { return {this, "XInputInterface.ControllerStates"}; }
	float& InitialButtonRepeatDelayField() { return *GetNativePointerField<float*>(this, "XInputInterface.InitialButtonRepeatDelay"); }
	float& ButtonRepeatDelayField() { return *GetNativePointerField<float*>(this, "XInputInterface.ButtonRepeatDelay"); }
	FieldArray<EControllerButtons::Type, 24> ButtonsField() { return {this, "XInputInterface.Buttons"}; }
	bool& bControllerMovesMouseField() { return *GetNativePointerField<bool*>(this, "XInputInterface.bControllerMovesMouse"); }
	long double& LastPlatformTimeField() { return *GetNativePointerField<long double*>(this, "XInputInterface.LastPlatformTime"); }
};

