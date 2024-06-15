#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FUdpMessagingModule : IModuleInterface
{
	char __padding[0x20L];
	TSharedPtr<IUdpMessageTunnel,0>& MessageTunnelField() { return *GetNativePointerField<TSharedPtr<IUdpMessageTunnel,0>*>(this, "FUdpMessagingModule.MessageTunnel"); }

	// Functions

	void HandleApplicationHasReactivated() { NativeCall<void>(this, "FUdpMessagingModule.HandleApplicationHasReactivated"); }
	void HandleApplicationWillDeactivate() { NativeCall<void>(this, "FUdpMessagingModule.HandleApplicationWillDeactivate"); }
	bool HandleSettingsSaved() { return NativeCall<bool>(this, "FUdpMessagingModule.HandleSettingsSaved"); }
	void InitializeBridge() { NativeCall<void>(this, "FUdpMessagingModule.InitializeBridge"); }
	void InitializeTunnel() { NativeCall<void>(this, "FUdpMessagingModule.InitializeTunnel"); }
	void RestartServices() { NativeCall<void>(this, "FUdpMessagingModule.RestartServices"); }
	void ShutdownBridge() { NativeCall<void>(this, "FUdpMessagingModule.ShutdownBridge"); }
	void ShutdownModule() { NativeCall<void>(this, "FUdpMessagingModule.ShutdownModule"); }
	void ShutdownTunnel() { NativeCall<void>(this, "FUdpMessagingModule.ShutdownTunnel"); }
	void StartupModule() { NativeCall<void>(this, "FUdpMessagingModule.StartupModule"); }
};

