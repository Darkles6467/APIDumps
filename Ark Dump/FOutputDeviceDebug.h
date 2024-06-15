#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceDebug : FOutputDevice
{

	// Functions

	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceDebug.Serialize", Data, Verbosity, Category); }
};

