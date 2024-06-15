#pragma once

#include "BaseDeclarations.h"
struct Character_eventReplicateMovementToSimulatedClients_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Character_eventReplicateMovementToSimulatedClients_Parms.ReturnValue"); }
};

