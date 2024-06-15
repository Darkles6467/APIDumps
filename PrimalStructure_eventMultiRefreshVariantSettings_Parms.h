#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventMultiRefreshVariantSettings_Parms
{
	char __padding[0x4L];
	int& NewVariantIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventMultiRefreshVariantSettings_Parms.NewVariantIndex"); }
};

