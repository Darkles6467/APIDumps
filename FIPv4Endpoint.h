#pragma once

#include "BaseDeclarations.h"
struct FIPv4Endpoint
{
	char __padding[0x8L];
	FIPv4Address& AddressField() { return *GetNativePointerField<FIPv4Address*>(this, "FIPv4Endpoint.Address"); }
	unsigned __int16& PortField() { return *GetNativePointerField<unsigned __int16*>(this, "FIPv4Endpoint.Port"); }

	// Functions

	static bool Parse(const FString * EndpointString, FIPv4Endpoint * OutEndpoint) { return NativeCall<bool, const FString *, FIPv4Endpoint *>(nullptr, "FIPv4Endpoint.Parse", EndpointString, OutEndpoint); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FIPv4Endpoint.ToString", result); }
	FText * ToText(FText * result) { return NativeCall<FText *, FText *>(this, "FIPv4Endpoint.ToText", result); }
};

