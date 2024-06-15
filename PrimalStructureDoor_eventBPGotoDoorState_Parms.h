#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureDoor_eventBPGotoDoorState_Parms
{
	char __padding[0x4L];
	int& NewDoorStateField() { return *GetNativePointerField<int*>(this, "PrimalStructureDoor_eventBPGotoDoorState_Parms.NewDoorState"); }
};

