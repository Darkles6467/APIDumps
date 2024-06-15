#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"
#include "FInputActionKeyMapping.h"
#include "FDateTime.h"

struct UPlayerInput : UObject
{
	char __padding[0x310L];
	FieldArray<FVector, 11> TouchesField() { return {this, "UPlayerInput.Touches"}; }
	FieldArray<float, 2> ZeroTimeField() { return {this, "UPlayerInput.ZeroTime"}; }
	FieldArray<float, 2> SmoothedMouseField() { return {this, "UPlayerInput.SmoothedMouse"}; }
	int& MouseSamplesField() { return *GetNativePointerField<int*>(this, "UPlayerInput.MouseSamples"); }
	float& MouseSamplingTotalField() { return *GetNativePointerField<float*>(this, "UPlayerInput.MouseSamplingTotal"); }
	TEnumAsByte<enum EInputEvent>& CurrentEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "UPlayerInput.CurrentEvent"); }
	TArray<FKeyBind>& DebugExecBindingsField() { return *GetNativePointerField<TArray<FKeyBind>*>(this, "UPlayerInput.DebugExecBindings"); }
	TArray<FInputAxisConfigEntry>& AxisConfigField() { return *GetNativePointerField<TArray<FInputAxisConfigEntry>*>(this, "UPlayerInput.AxisConfig"); }
	TArray<FInputActionKeyMapping>& ActionMappingsField() { return *GetNativePointerField<TArray<FInputActionKeyMapping>*>(this, "UPlayerInput.ActionMappings"); }
	TArray<FInputAxisKeyMapping>& AxisMappingsField() { return *GetNativePointerField<TArray<FInputAxisKeyMapping>*>(this, "UPlayerInput.AxisMappings"); }
	TArray<FName>& DisabledActionMappingNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPlayerInput.DisabledActionMappingNames"); }
	TArray<FName>& InvertedAxisField() { return *GetNativePointerField<TArray<FName>*>(this, "UPlayerInput.InvertedAxis"); }
	FGestureRecognizer& GestureRecognizerField() { return *GetNativePointerField<FGestureRecognizer*>(this, "UPlayerInput.GestureRecognizer"); }
	unsigned int& EventCountField() { return *GetNativePointerField<unsigned int*>(this, "UPlayerInput.EventCount"); }
	float& LastTimeDilationField() { return *GetNativePointerField<float*>(this, "UPlayerInput.LastTimeDilation"); }

	// Functions

	static void AddEngineDefinedActionMapping(const FInputActionKeyMapping * ActionMapping) { NativeCall<void, const FInputActionKeyMapping *>(nullptr, "UPlayerInput.AddEngineDefinedActionMapping", ActionMapping); }
	static void AddEngineDefinedAxisMapping(const FInputAxisKeyMapping * AxisMapping) { NativeCall<void, const FInputAxisKeyMapping *>(nullptr, "UPlayerInput.AddEngineDefinedAxisMapping", AxisMapping); }
	void ClearSmoothing() { NativeCall<void>(this, "UPlayerInput.ClearSmoothing"); }
	void ConditionalBuildKeyMappings() { NativeCall<void>(this, "UPlayerInput.ConditionalBuildKeyMappings"); }
	void ConditionalInitAxisProperties() { NativeCall<void>(this, "UPlayerInput.ConditionalInitAxisProperties"); }
	void ConsumeKey(FKey Key) { NativeCall<void, FKey>(this, "UPlayerInput.ConsumeKey", Key); }
	float DetermineAxisValue(const FInputAxisBinding * AxisBinding, const bool bGamePaused, TArray<FKey> * KeysToConsume) { return NativeCall<float, const FInputAxisBinding *, const bool, TArray<FKey> *>(this, "UPlayerInput.DetermineAxisValue", AxisBinding, bGamePaused, KeysToConsume); }
	void DisableActionMappingByName(const FName * ActionName) { NativeCall<void, const FName *>(this, "UPlayerInput.DisableActionMappingByName", ActionName); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "UPlayerInput.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void EnableActionMappingByName(const FName * ActionName) { NativeCall<void, const FName *>(this, "UPlayerInput.EnableActionMappingByName", ActionName); }
	void FinishProcessingPlayerInput() { NativeCall<void>(this, "UPlayerInput.FinishProcessingPlayerInput"); }
	void FlushPressedKeys() { NativeCall<void>(this, "UPlayerInput.FlushPressedKeys"); }
	void ForceRebuildingKeyMaps(const bool bRestoreDefaults) { NativeCall<void, const bool>(this, "UPlayerInput.ForceRebuildingKeyMaps", bRestoreDefaults); }
	bool GetInvertAxis(const FName AxisName) { return NativeCall<bool, const FName>(this, "UPlayerInput.GetInvertAxis", AxisName); }
	float GetKeyValue(FKey InKey) { return NativeCall<float, FKey>(this, "UPlayerInput.GetKeyValue", InKey); }
	const TArray<FInputActionKeyMapping> * GetKeysForAction(const FName ActionName) { return NativeCall<const TArray<FInputActionKeyMapping> *, const FName>(this, "UPlayerInput.GetKeysForAction", ActionName); }
	float GetRawKeyValue(FKey InKey) { return NativeCall<float, FKey>(this, "UPlayerInput.GetRawKeyValue", InKey); }
	float GetTimeDown(FKey InKey) { return NativeCall<float, FKey>(this, "UPlayerInput.GetTimeDown", InKey); }
	FVector * GetVectorKeyValue(FVector * result, FKey InKey) { return NativeCall<FVector *, FVector *, FKey>(this, "UPlayerInput.GetVectorKeyValue", result, InKey); }
	bool InputAxis(FKey Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad) { return NativeCall<bool, FKey, float, float, int, bool>(this, "UPlayerInput.InputAxis", Key, Delta, DeltaTime, NumSamples, bGamepad); }
	bool InputGesture(const FKey Gesture, const EInputEvent Event, const float Value) { return NativeCall<bool, const FKey, const EInputEvent, const float>(this, "UPlayerInput.InputGesture", Gesture, Event, Value); }
	bool InputKey(FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad) { return NativeCall<bool, FKey, EInputEvent, float, bool>(this, "UPlayerInput.InputKey", Key, Event, AmountDepressed, bGamepad); }
	bool InputMotion(const FVector * InTilt, const FVector * InRotationRate, const FVector * InGravity, const FVector * InAcceleration) { return NativeCall<bool, const FVector *, const FVector *, const FVector *, const FVector *>(this, "UPlayerInput.InputMotion", InTilt, InRotationRate, InGravity, InAcceleration); }
	bool InputTouch(unsigned int Handle, ETouchType::Type Type, const FVector2D * TouchLocation, FDateTime DeviceTimestamp, unsigned int TouchpadIndex) { return NativeCall<bool, unsigned int, ETouchType::Type, const FVector2D *, FDateTime, unsigned int>(this, "UPlayerInput.InputTouch", Handle, Type, TouchLocation, DeviceTimestamp, TouchpadIndex); }
	void InvertAxis(const FName AxisName) { NativeCall<void, const FName>(this, "UPlayerInput.InvertAxis", AxisName); }
	void InvertAxisKey(const FKey AxisKey) { NativeCall<void, const FKey>(this, "UPlayerInput.InvertAxisKey", AxisKey); }
	void InvertMouse() { NativeCall<void>(this, "UPlayerInput.InvertMouse"); }
	bool IsAltPressed() { return NativeCall<bool>(this, "UPlayerInput.IsAltPressed"); }
	bool IsCmdPressed() { return NativeCall<bool>(this, "UPlayerInput.IsCmdPressed"); }
	bool IsCtrlPressed() { return NativeCall<bool>(this, "UPlayerInput.IsCtrlPressed"); }
	bool IsKeyConsumed(FKey InKey) { return NativeCall<bool, FKey>(this, "UPlayerInput.IsKeyConsumed", InKey); }
	bool IsKeyHandledByAction(FKey Key) { return NativeCall<bool, FKey>(this, "UPlayerInput.IsKeyHandledByAction", Key); }
	bool IsPressed(FKey InKey) { return NativeCall<bool, FKey>(this, "UPlayerInput.IsPressed", InKey); }
	bool IsShiftPressed() { return NativeCall<bool>(this, "UPlayerInput.IsShiftPressed"); }
	bool KeyEventOccurred(FKey Key, EInputEvent Event, TArray<unsigned int> * EventIndices) { return NativeCall<bool, FKey, EInputEvent, TArray<unsigned int> *>(this, "UPlayerInput.KeyEventOccurred", Key, Event, EventIndices); }
	float MassageAxisInput(FKey Key, float RawValue, float DeltaTime) { return NativeCall<float, FKey, float, float>(this, "UPlayerInput.MassageAxisInput", Key, RawValue, DeltaTime); }
	void PostInitProperties() { NativeCall<void>(this, "UPlayerInput.PostInitProperties"); }
	void ProcessInputStack(const TArray<UInputComponent *> * InputComponentStack, const float DeltaTime, const bool bGamePaused) { NativeCall<void, const TArray<UInputComponent *> *, const float, const bool>(this, "UPlayerInput.ProcessInputStack", InputComponentStack, DeltaTime, bGamePaused); }
	void ProcessNonAxesKeys(FKey InKey, FKeyState * KeyState, float DeltaTime) { NativeCall<void, FKey, FKeyState *, float>(this, "UPlayerInput.ProcessNonAxesKeys", InKey, KeyState, DeltaTime); }
	void SetMouseSensitivity(const float Sensitivity) { NativeCall<void, const float>(this, "UPlayerInput.SetMouseSensitivity", Sensitivity); }
	void SetMouseSensitivityToDefault() { NativeCall<void>(this, "UPlayerInput.SetMouseSensitivityToDefault"); }
	float SmoothMouse(float aMouse, float DeltaTime, char * SampleCount, int Index) { return NativeCall<float, float, float, char *, int>(this, "UPlayerInput.SmoothMouse", aMouse, DeltaTime, SampleCount, Index); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "UPlayerInput.Tick", DeltaTime); }
	bool WasJustPressed(FKey InKey) { return NativeCall<bool, FKey>(this, "UPlayerInput.WasJustPressed", InKey); }
	bool WasJustReleased(FKey InKey) { return NativeCall<bool, FKey>(this, "UPlayerInput.WasJustReleased", InKey); }
};

