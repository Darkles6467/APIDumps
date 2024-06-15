#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPUpdatedHealth_Parms
{
	char __padding[0x1L];
	bool& bDoReplicationField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPUpdatedHealth_Parms.bDoReplication"); }
};

