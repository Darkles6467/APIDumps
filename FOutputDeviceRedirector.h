#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceRedirector : FOutputDevice
{
	char __padding[0x60L];
	TArray<FBufferedLine>& BufferedLinesField() { return *GetNativePointerField<TArray<FBufferedLine>*>(this, "FOutputDeviceRedirector.BufferedLines"); }
	TArray<FBufferedLine>& BacklogLinesField() { return *GetNativePointerField<TArray<FBufferedLine>*>(this, "FOutputDeviceRedirector.BacklogLines"); }
	unsigned int& MasterThreadIDField() { return *GetNativePointerField<unsigned int*>(this, "FOutputDeviceRedirector.MasterThreadID"); }
	bool& bEnableBacklogField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceRedirector.bEnableBacklog"); }
	FWindowsCriticalSection& SynchronizationObjectField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOutputDeviceRedirector.SynchronizationObject"); }

	// Functions

	void AddOutputDevice(FOutputDevice * OutputDevice) { NativeCall<void, FOutputDevice *>(this, "FOutputDeviceRedirector.AddOutputDevice", OutputDevice); }
	void EnableBacklog(bool bEnable) { NativeCall<void, bool>(this, "FOutputDeviceRedirector.EnableBacklog", bEnable); }
	void Flush() { NativeCall<void>(this, "FOutputDeviceRedirector.Flush"); }
	void FlushThreadedLogs() { NativeCall<void>(this, "FOutputDeviceRedirector.FlushThreadedLogs"); }
	bool IsRedirectingTo(FOutputDevice * OutputDevice) { return NativeCall<bool, FOutputDevice *>(this, "FOutputDeviceRedirector.IsRedirectingTo", OutputDevice); }
	void PanicFlushThreadedLogs() { NativeCall<void>(this, "FOutputDeviceRedirector.PanicFlushThreadedLogs"); }
	void RemoveOutputDevice(FOutputDevice * OutputDevice) { NativeCall<void, FOutputDevice *>(this, "FOutputDeviceRedirector.RemoveOutputDevice", OutputDevice); }
	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceRedirector.Serialize", Data, Verbosity, Category); }
	void SerializeBacklog(FOutputDevice * OutputDevice) { NativeCall<void, FOutputDevice *>(this, "FOutputDeviceRedirector.SerializeBacklog", OutputDevice); }
	void SetCurrentThreadAsMasterThread() { NativeCall<void>(this, "FOutputDeviceRedirector.SetCurrentThreadAsMasterThread"); }
	void TearDown() { NativeCall<void>(this, "FOutputDeviceRedirector.TearDown"); }
	void UnsynchronizedFlushThreadedLogs(bool bUseAllDevices) { NativeCall<void, bool>(this, "FOutputDeviceRedirector.UnsynchronizedFlushThreadedLogs", bUseAllDevices); }
};

