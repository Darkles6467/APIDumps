#pragma once

#include "BaseDeclarations.h"
struct FTcpSocketBuilder
{
	char __padding[0x38L];
	bool& BlockingField() { return *GetNativePointerField<bool*>(this, "FTcpSocketBuilder.Blocking"); }
	bool& BoundField() { return *GetNativePointerField<bool*>(this, "FTcpSocketBuilder.Bound"); }
	FIPv4Endpoint& BoundEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FTcpSocketBuilder.BoundEndpoint"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FTcpSocketBuilder.Description"); }
	bool& LingerField() { return *GetNativePointerField<bool*>(this, "FTcpSocketBuilder.Linger"); }
	int& LingerTimeoutField() { return *GetNativePointerField<int*>(this, "FTcpSocketBuilder.LingerTimeout"); }
	bool& ListenField() { return *GetNativePointerField<bool*>(this, "FTcpSocketBuilder.Listen"); }
	int& ListenBacklogField() { return *GetNativePointerField<int*>(this, "FTcpSocketBuilder.ListenBacklog"); }
	bool& ReusableField() { return *GetNativePointerField<bool*>(this, "FTcpSocketBuilder.Reusable"); }

	// Functions

	FTcpSocketBuilder * AsReusable(FTcpSocketBuilder * result) { return NativeCall<FTcpSocketBuilder *, FTcpSocketBuilder *>(this, "FTcpSocketBuilder.AsReusable", result); }
	FTcpSocketBuilder * BoundToEndpoint(FTcpSocketBuilder * result, const FIPv4Endpoint * Endpoint) { return NativeCall<FTcpSocketBuilder *, FTcpSocketBuilder *, const FIPv4Endpoint *>(this, "FTcpSocketBuilder.BoundToEndpoint", result, Endpoint); }
	FTcpSocketBuilder * Listening(FTcpSocketBuilder * result, int MaxBacklog) { return NativeCall<FTcpSocketBuilder *, FTcpSocketBuilder *, int>(this, "FTcpSocketBuilder.Listening", result, MaxBacklog); }
};

