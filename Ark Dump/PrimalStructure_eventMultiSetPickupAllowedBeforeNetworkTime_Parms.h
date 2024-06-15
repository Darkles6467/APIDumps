#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventMultiSetPickupAllowedBeforeNetworkTime_Parms
{
	char __padding[0x8L];
	long double& NewTimeField() { return *GetNativePointerField<long double*>(this, "PrimalStructure_eventMultiSetPickupAllowedBeforeNetworkTime_Parms.NewTime"); }
};

