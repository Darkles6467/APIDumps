#pragma once

#include "BaseDeclarations.h"
struct FMessageTracerAddressInfo
{
	char __padding[0x20L];
	FGuid& AddressField() { return *GetNativePointerField<FGuid*>(this, "FMessageTracerAddressInfo.Address"); }
	long double& TimeRegisteredField() { return *GetNativePointerField<long double*>(this, "FMessageTracerAddressInfo.TimeRegistered"); }
	long double& TimeUnregisteredField() { return *GetNativePointerField<long double*>(this, "FMessageTracerAddressInfo.TimeUnregistered"); }
};

