#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventNetSetContainerActive_Parms
{
	char __padding[0x18L];
	bool& bSetActiveField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventNetSetContainerActive_Parms.bSetActive"); }
	__int16& NetReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "PrimalStructureItemContainer_eventNetSetContainerActive_Parms.NetReplicatedFuelItemColorIndex"); }
};

