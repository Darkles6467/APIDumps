#pragma once

#include "BaseDeclarations.h"
#include "FOutputDeviceError.h"
#include "FOutputDevice.h"

struct FOutputDeviceWindowsError : FOutputDeviceError
{

	// Functions

	void HandleError() { NativeCall<void>(this, "FOutputDeviceWindowsError.HandleError"); }
	void Serialize(const wchar_t * Msg, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceWindowsError.Serialize", Msg, Verbosity, Category); }
};

