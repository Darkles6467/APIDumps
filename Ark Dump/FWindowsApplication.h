#pragma once

#include "BaseDeclarations.h"
struct GenericApplication
{
	char __padding[0x48L];
};

struct FWindowsApplication : GenericApplication
{
	char __padding[0x128L];
	HINSTANCE__ * InstanceHandleField() { return GetNativePointerField<HINSTANCE__ *>(this, "FWindowsApplication.InstanceHandle"); }
	bool& bUsingHighPrecisionMouseInputField() { return *GetNativePointerField<bool*>(this, "FWindowsApplication.bUsingHighPrecisionMouseInput"); }
	bool& bIsMouseAttachedField() { return *GetNativePointerField<bool*>(this, "FWindowsApplication.bIsMouseAttached"); }
	TArray<FDeferredWindowsMessage>& DeferredMessagesField() { return *GetNativePointerField<TArray<FDeferredWindowsMessage>*>(this, "FWindowsApplication.DeferredMessages"); }
	TArray<FDeferredWindowsDragDropOperation>& DeferredDragDropOperationsField() { return *GetNativePointerField<TArray<FDeferredWindowsDragDropOperation>*>(this, "FWindowsApplication.DeferredDragDropOperations"); }
	TArray<TSharedRef<FWindowsWindow,0>>& WindowsField() { return *GetNativePointerField<TArray<TSharedRef<FWindowsWindow,0>>*>(this, "FWindowsApplication.Windows"); }
	TSharedRef<XInputInterface,0>& XInputField() { return *GetNativePointerField<TSharedRef<XInputInterface,0>*>(this, "FWindowsApplication.XInput"); }
	TArray<TSharedPtr<IInputDevice,0>>& ExternalInputDevicesField() { return *GetNativePointerField<TArray<TSharedPtr<IInputDevice,0>>*>(this, "FWindowsApplication.ExternalInputDevices"); }
	bool& bHasLoadedInputPluginsField() { return *GetNativePointerField<bool*>(this, "FWindowsApplication.bHasLoadedInputPlugins"); }
	TArray<int>& PressedModifierKeysField() { return *GetNativePointerField<TArray<int>*>(this, "FWindowsApplication.PressedModifierKeys"); }
	FAutoConsoleVariableRef& CVarDeferMessageProcessingField() { return *GetNativePointerField<FAutoConsoleVariableRef*>(this, "FWindowsApplication.CVarDeferMessageProcessing"); }
	int& bAllowedToDeferMessageProcessingField() { return *GetNativePointerField<int*>(this, "FWindowsApplication.bAllowedToDeferMessageProcessing"); }
	bool& bInModalSizeLoopField() { return *GetNativePointerField<bool*>(this, "FWindowsApplication.bInModalSizeLoop"); }
	FDisplayMetrics& InitialDisplayMetricsField() { return *GetNativePointerField<FDisplayMetrics*>(this, "FWindowsApplication.InitialDisplayMetrics"); }
	TSharedPtr<FWindowsTextInputMethodSystem,0>& TextInputMethodSystemField() { return *GetNativePointerField<TSharedPtr<FWindowsTextInputMethodSystem,0>*>(this, "FWindowsApplication.TextInputMethodSystem"); }
	TSharedPtr<FTaskbarList,0>& TaskbarListField() { return *GetNativePointerField<TSharedPtr<FTaskbarList,0>*>(this, "FWindowsApplication.TaskbarList"); }
	tagSTICKYKEYS& StartupStickyKeysField() { return *GetNativePointerField<tagSTICKYKEYS*>(this, "FWindowsApplication.StartupStickyKeys"); }
	tagTOGGLEKEYS& StartupToggleKeysField() { return *GetNativePointerField<tagTOGGLEKEYS*>(this, "FWindowsApplication.StartupToggleKeys"); }
	tagFILTERKEYS& StartupFilterKeysField() { return *GetNativePointerField<tagFILTERKEYS*>(this, "FWindowsApplication.StartupFilterKeys"); }
};

