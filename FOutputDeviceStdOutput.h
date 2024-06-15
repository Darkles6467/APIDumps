#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceStdOutput : FOutputDevice
{
	char __padding[0x8L];
	bool& bAllowLogVerbosityField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceStdOutput.bAllowLogVerbosity"); }

	// Functions

	void Serialize(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceStdOutput.Serialize", V, Verbosity, Category); }
};

