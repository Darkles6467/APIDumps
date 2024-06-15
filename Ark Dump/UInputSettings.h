#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInputSettings : UObject
{
	char __padding[0x80L];
	TArray<FInputAxisConfigEntry>& AxisConfigField() { return *GetNativePointerField<TArray<FInputAxisConfigEntry>*>(this, "UInputSettings.AxisConfig"); }
	float& FOVScaleField() { return *GetNativePointerField<float*>(this, "UInputSettings.FOVScale"); }
	float& DoubleClickTimeField() { return *GetNativePointerField<float*>(this, "UInputSettings.DoubleClickTime"); }
	TArray<FInputActionKeyMapping>& ActionMappingsField() { return *GetNativePointerField<TArray<FInputActionKeyMapping>*>(this, "UInputSettings.ActionMappings"); }
	TArray<FInputAxisKeyMapping>& AxisMappingsField() { return *GetNativePointerField<TArray<FInputAxisKeyMapping>*>(this, "UInputSettings.AxisMappings"); }
	bool& bAlwaysShowTouchInterfaceField() { return *GetNativePointerField<bool*>(this, "UInputSettings.bAlwaysShowTouchInterface"); }
	bool& bShowConsoleOnFourFingerTapField() { return *GetNativePointerField<bool*>(this, "UInputSettings.bShowConsoleOnFourFingerTap"); }
	FStringAssetReference& DefaultTouchInterfaceField() { return *GetNativePointerField<FStringAssetReference*>(this, "UInputSettings.DefaultTouchInterface"); }
	FKey& ConsoleKey_DEPRECATEDField() { return *GetNativePointerField<FKey*>(this, "UInputSettings.ConsoleKey_DEPRECATED"); }
	TArray<FKey>& ConsoleKeysField() { return *GetNativePointerField<TArray<FKey>*>(this, "UInputSettings.ConsoleKeys"); }

	// Functions

	void AddActionMapping(const FInputActionKeyMapping * KeyMapping) { NativeCall<void, const FInputActionKeyMapping *>(this, "UInputSettings.AddActionMapping", KeyMapping); }
	void AddAxisMapping(const FInputAxisKeyMapping * KeyMapping) { NativeCall<void, const FInputAxisKeyMapping *>(this, "UInputSettings.AddAxisMapping", KeyMapping); }
	void ForceRebuildKeymaps() { NativeCall<void>(this, "UInputSettings.ForceRebuildKeymaps"); }
	void PostInitProperties() { NativeCall<void>(this, "UInputSettings.PostInitProperties"); }
	void SaveKeyMappings() { NativeCall<void>(this, "UInputSettings.SaveKeyMappings"); }
};

