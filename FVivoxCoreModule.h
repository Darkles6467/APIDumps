#pragma once

#include "BaseDeclarations.h"
#include "FTickableGameObject.h"
#include "FTickableObjectBase.h"

struct FVivoxCoreModule : FTickableGameObject
{
	char __padding[0x28L];
	void * _oRTPHandleField() { return GetNativePointerField<void *>(this, "FVivoxCoreModule._oRTPHandle"); }
	void * _vivoxSdkHandleField() { return GetNativePointerField<void *>(this, "FVivoxCoreModule._vivoxSdkHandle"); }
	ClientImpl * _voiceClientField() { return GetNativePointerField<ClientImpl *>(this, "FVivoxCoreModule._voiceClient"); }

	// Functions

	static const char * ErrorToString(int error) { return NativeCall<const char *, int>(nullptr, "FVivoxCoreModule.ErrorToString", error); }
	void * LoadALibrary(const wchar_t * libraryName) { return NativeCall<void *, const wchar_t *>(this, "FVivoxCoreModule.LoadALibrary", libraryName); }
	void ShutdownModule() { NativeCall<void>(this, "FVivoxCoreModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FVivoxCoreModule.StartupModule"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FVivoxCoreModule.Tick", DeltaTime); }
};

