#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"

struct UInputComponent : UActorComponent
{
	char __padding[0x78L];
	TArray<FInputKeyBinding>& KeyBindingsField() { return *GetNativePointerField<TArray<FInputKeyBinding>*>(this, "UInputComponent.KeyBindings"); }
	TArray<FInputTouchBinding>& TouchBindingsField() { return *GetNativePointerField<TArray<FInputTouchBinding>*>(this, "UInputComponent.TouchBindings"); }
	TArray<FInputAxisBinding>& AxisBindingsField() { return *GetNativePointerField<TArray<FInputAxisBinding>*>(this, "UInputComponent.AxisBindings"); }
	TArray<FInputAxisKeyBinding>& AxisKeyBindingsField() { return *GetNativePointerField<TArray<FInputAxisKeyBinding>*>(this, "UInputComponent.AxisKeyBindings"); }
	TArray<FInputVectorAxisBinding>& VectorAxisBindingsField() { return *GetNativePointerField<TArray<FInputVectorAxisBinding>*>(this, "UInputComponent.VectorAxisBindings"); }
	TArray<FInputGestureBinding>& GestureBindingsField() { return *GetNativePointerField<TArray<FInputGestureBinding>*>(this, "UInputComponent.GestureBindings"); }
	TArray<FInputActionBinding>& ActionBindingsField() { return *GetNativePointerField<TArray<FInputActionBinding>*>(this, "UInputComponent.ActionBindings"); }

	// Functions

	FInputActionBinding * AddActionBinding(const FInputActionBinding * Binding) { return NativeCall<FInputActionBinding *, const FInputActionBinding *>(this, "UInputComponent.AddActionBinding", Binding); }
	FInputActionBinding * GetActionBinding(const int BindingIndex) { return NativeCall<FInputActionBinding *, const int>(this, "UInputComponent.GetActionBinding", BindingIndex); }
	float GetAxisKeyValue(const FKey AxisKey) { return NativeCall<float, const FKey>(this, "UInputComponent.GetAxisKeyValue", AxisKey); }
	float GetAxisValue(const FName AxisName) { return NativeCall<float, const FName>(this, "UInputComponent.GetAxisValue", AxisName); }
	float GetControllerKeyTimeDown(FKey Key) { return NativeCall<float, FKey>(this, "UInputComponent.GetControllerKeyTimeDown", Key); }
	FVector * GetControllerVectorKeyState(FVector * result, FKey Key) { return NativeCall<FVector *, FVector *, FKey>(this, "UInputComponent.GetControllerVectorKeyState", result, Key); }
	int GetNumActionBindings() { return NativeCall<int>(this, "UInputComponent.GetNumActionBindings"); }
	FVector * GetVectorAxisValue(FVector * result, const FKey AxisKey) { return NativeCall<FVector *, FVector *, const FKey>(this, "UInputComponent.GetVectorAxisValue", result, AxisKey); }
	void RemoveActionBinding(const int BindingIndex) { NativeCall<void, const int>(this, "UInputComponent.RemoveActionBinding", BindingIndex); }
};

