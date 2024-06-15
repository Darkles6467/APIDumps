#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceConsole : FOutputDevice
{
	char __padding[0x10L];
	FString& IniFilenameField() { return *GetNativePointerField<FString*>(this, "FOutputDeviceConsole.IniFilename"); }

	// Functions

	void SetIniFilename(const wchar_t * InFilename) { NativeCall<void, const wchar_t *>(this, "FOutputDeviceConsole.SetIniFilename", InFilename); }
};

struct FOutputDeviceConsoleWindows : FOutputDeviceConsole
{
	char __padding[0x10L];
	void * ConsoleHandleField() { return GetNativePointerField<void *>(this, "FOutputDeviceConsoleWindows.ConsoleHandle"); }
	bool& OverrideColorSetField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceConsoleWindows.OverrideColorSet"); }
	bool& bIsAttachedField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceConsoleWindows.bIsAttached"); }

	// Functions

	void CLS() { NativeCall<void>(this, "FOutputDeviceConsoleWindows.CLS"); }
	bool IsAttached() { return NativeCall<bool>(this, "FOutputDeviceConsoleWindows.IsAttached"); }
	void SaveToINI() { NativeCall<void>(this, "FOutputDeviceConsoleWindows.SaveToINI"); }
	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceConsoleWindows.Serialize", Data, Verbosity, Category); }
	void SetColor(const wchar_t * Color) { NativeCall<void, const wchar_t *>(this, "FOutputDeviceConsoleWindows.SetColor", Color); }
	void SetConsoleWindowTitle(const wchar_t * NewTitle) { NativeCall<void, const wchar_t *>(this, "FOutputDeviceConsoleWindows.SetConsoleWindowTitle", NewTitle); }
	void Show(bool ShowWindow) { NativeCall<void, bool>(this, "FOutputDeviceConsoleWindows.Show", ShowWindow); }
	bool IsShown() { return NativeCall<bool>(this, "FOutputDeviceConsoleWindows.IsShown"); }
};

