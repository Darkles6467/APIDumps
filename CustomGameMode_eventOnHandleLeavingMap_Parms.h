#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnHandleLeavingMap_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnHandleLeavingMap_Parms.ReturnValue"); }
};

