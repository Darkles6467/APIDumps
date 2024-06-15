#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureDoor_eventNetGotoDoorState_Parms
{
	char __padding[0x1L];
	char& DoorStateField() { return *GetNativePointerField<char*>(this, "PrimalStructureDoor_eventNetGotoDoorState_Parms.DoorState"); }
};

