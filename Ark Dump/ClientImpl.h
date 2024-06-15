#pragma once

#include "BaseDeclarations.h"
#include "VivoxConfig.h"

struct IClient
{
	char __padding[0x8L];
};

struct ClientImpl : IClient
{
	char __padding[0x360L];
	bool& _initializedField() { return *GetNativePointerField<bool*>(this, "ClientImpl._initialized"); }
	AudioDevicesImpl& _audioInputDevicesField() { return *GetNativePointerField<AudioDevicesImpl*>(this, "ClientImpl._audioInputDevices"); }
	AudioDevicesImpl& _audioOutputDevicesField() { return *GetNativePointerField<AudioDevicesImpl*>(this, "ClientImpl._audioOutputDevices"); }
	FString& _connectorHandleField() { return *GetNativePointerField<FString*>(this, "ClientImpl._connectorHandle"); }
	bool& _ttsIsInitializedField() { return *GetNativePointerField<bool*>(this, "ClientImpl._ttsIsInitialized"); }
	unsigned int& _ttsManagerIdField() { return *GetNativePointerField<unsigned int*>(this, "ClientImpl._ttsManagerId"); }

	// Functions

	void Cleanup() { NativeCall<void>(this, "ClientImpl.Cleanup"); }
	int Initialize(VivoxConfig config) { return NativeCall<int, VivoxConfig>(this, "ClientImpl.Initialize", config); }
	void TTSShutdown() { NativeCall<void>(this, "ClientImpl.TTSShutdown"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ClientImpl.Tick", DeltaTime); }
	void Uninitialize() { NativeCall<void>(this, "ClientImpl.Uninitialize"); }
};

