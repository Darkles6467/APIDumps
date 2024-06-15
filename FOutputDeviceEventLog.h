#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceEventLog : FOutputDevice
{
	char __padding[0x8L];
	void * EventLogField() { return GetNativePointerField<void *>(this, "FOutputDeviceEventLog.EventLog"); }

	// Functions

	void Serialize(const wchar_t * Buffer, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceEventLog.Serialize", Buffer, Verbosity, Category); }
	void TearDown() { NativeCall<void>(this, "FOutputDeviceEventLog.TearDown"); }
};

