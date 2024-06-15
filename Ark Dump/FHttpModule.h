#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FHttpModule : IModuleInterface
{
	char __padding[0x30L];
	float& HttpTimeoutField() { return *GetNativePointerField<float*>(this, "FHttpModule.HttpTimeout"); }
	float& HttpConnectionTimeoutField() { return *GetNativePointerField<float*>(this, "FHttpModule.HttpConnectionTimeout"); }
	float& HttpReceiveTimeoutField() { return *GetNativePointerField<float*>(this, "FHttpModule.HttpReceiveTimeout"); }
	float& HttpSendTimeoutField() { return *GetNativePointerField<float*>(this, "FHttpModule.HttpSendTimeout"); }
	int& HttpMaxConnectionsPerServerField() { return *GetNativePointerField<int*>(this, "FHttpModule.HttpMaxConnectionsPerServer"); }
	int& MaxReadBufferSizeField() { return *GetNativePointerField<int*>(this, "FHttpModule.MaxReadBufferSize"); }
	bool& bEnableHttpField() { return *GetNativePointerField<bool*>(this, "FHttpModule.bEnableHttp"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FHttpModule.Exec", InWorld, Cmd, Ar); }
	static FHttpModule * Get() { return NativeCall<FHttpModule *>(nullptr, "FHttpModule.Get"); }
	bool HandleHTTPCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "FHttpModule.HandleHTTPCommand", Cmd, Ar); }
	void ShutdownModule() { NativeCall<void>(this, "FHttpModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FHttpModule.StartupModule"); }
};

