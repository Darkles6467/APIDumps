#pragma once

#include "BaseDeclarations.h"
struct FIPv4Subnet
{
	char __padding[0x8L];
	FIPv4Address& AddressField() { return *GetNativePointerField<FIPv4Address*>(this, "FIPv4Subnet.Address"); }
	FIPv4SubnetMask& MaskField() { return *GetNativePointerField<FIPv4SubnetMask*>(this, "FIPv4Subnet.Mask"); }
};

