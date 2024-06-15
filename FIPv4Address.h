#pragma once

#include "BaseDeclarations.h"
struct FIPv4Address
{
	char __padding[0x4L];

	// Functions

	static bool Parse(const FString * AddressString, FIPv4Address * OutAddress) { return NativeCall<bool, const FString *, FIPv4Address *>(nullptr, "FIPv4Address.Parse", AddressString, OutAddress); }
	FText * ToText(FText * result) { return NativeCall<FText *, FText *>(this, "FIPv4Address.ToText", result); }
};

