#pragma once

#include "BaseDeclarations.h"
struct FUdpSocketBuilder
{
	char __padding[0x38L];
	bool& AllowBroadcastField() { return *GetNativePointerField<bool*>(this, "FUdpSocketBuilder.AllowBroadcast"); }
	bool& BlockingField() { return *GetNativePointerField<bool*>(this, "FUdpSocketBuilder.Blocking"); }
	bool& BoundField() { return *GetNativePointerField<bool*>(this, "FUdpSocketBuilder.Bound"); }
	FIPv4Endpoint& BoundEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpSocketBuilder.BoundEndpoint"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FUdpSocketBuilder.Description"); }
	TArray<FIPv4Address>& JoinedGroupsField() { return *GetNativePointerField<TArray<FIPv4Address>*>(this, "FUdpSocketBuilder.JoinedGroups"); }
	bool& MulticastLoopbackField() { return *GetNativePointerField<bool*>(this, "FUdpSocketBuilder.MulticastLoopback"); }
	char& MulticastTtlField() { return *GetNativePointerField<char*>(this, "FUdpSocketBuilder.MulticastTtl"); }
	bool& ReusableField() { return *GetNativePointerField<bool*>(this, "FUdpSocketBuilder.Reusable"); }

	// Functions

	FUdpSocketBuilder * AsNonBlocking(FUdpSocketBuilder * result) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *>(this, "FUdpSocketBuilder.AsNonBlocking", result); }
	FUdpSocketBuilder * AsReusable(FUdpSocketBuilder * result) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *>(this, "FUdpSocketBuilder.AsReusable", result); }
	FUdpSocketBuilder * BoundToAddress(FUdpSocketBuilder * result, const FIPv4Address * Address) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *, const FIPv4Address *>(this, "FUdpSocketBuilder.BoundToAddress", result, Address); }
	FUdpSocketBuilder * BoundToEndpoint(FUdpSocketBuilder * result, const FIPv4Endpoint * Endpoint) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *, const FIPv4Endpoint *>(this, "FUdpSocketBuilder.BoundToEndpoint", result, Endpoint); }
	FUdpSocketBuilder * BoundToPort(FUdpSocketBuilder * result, int Port) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *, int>(this, "FUdpSocketBuilder.BoundToPort", result, Port); }
	FUdpSocketBuilder * JoinedToGroup(FUdpSocketBuilder * result, const FIPv4Address * GroupAddress) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *, const FIPv4Address *>(this, "FUdpSocketBuilder.JoinedToGroup", result, GroupAddress); }
	FUdpSocketBuilder * WithMulticastLoopback(FUdpSocketBuilder * result) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *>(this, "FUdpSocketBuilder.WithMulticastLoopback", result); }
	FUdpSocketBuilder * WithMulticastTtl(FUdpSocketBuilder * result, char TimeToLive) { return NativeCall<FUdpSocketBuilder *, FUdpSocketBuilder *, char>(this, "FUdpSocketBuilder.WithMulticastTtl", result, TimeToLive); }
};

