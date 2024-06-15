#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUdpMessagingSettings : UObject
{
	char __padding[0x78L];
	bool& EnableTransportField() { return *GetNativePointerField<bool*>(this, "UUdpMessagingSettings.EnableTransport"); }
	FString& UnicastEndpointField() { return *GetNativePointerField<FString*>(this, "UUdpMessagingSettings.UnicastEndpoint"); }
	FString& MulticastEndpointField() { return *GetNativePointerField<FString*>(this, "UUdpMessagingSettings.MulticastEndpoint"); }
	char& MulticastTimeToLiveField() { return *GetNativePointerField<char*>(this, "UUdpMessagingSettings.MulticastTimeToLive"); }
	TArray<FString>& StaticEndpointsField() { return *GetNativePointerField<TArray<FString>*>(this, "UUdpMessagingSettings.StaticEndpoints"); }
	bool& EnableTunnelField() { return *GetNativePointerField<bool*>(this, "UUdpMessagingSettings.EnableTunnel"); }
	FString& TunnelUnicastEndpointField() { return *GetNativePointerField<FString*>(this, "UUdpMessagingSettings.TunnelUnicastEndpoint"); }
	FString& TunnelMulticastEndpointField() { return *GetNativePointerField<FString*>(this, "UUdpMessagingSettings.TunnelMulticastEndpoint"); }
	TArray<FString>& RemoteTunnelEndpointsField() { return *GetNativePointerField<TArray<FString>*>(this, "UUdpMessagingSettings.RemoteTunnelEndpoints"); }

	// Functions

};

