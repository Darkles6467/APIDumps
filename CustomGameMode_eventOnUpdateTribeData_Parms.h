#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnUpdateTribeData_Parms
{
	char __padding[0x148L];
	FTribeData& NewTribeDataField() { return *GetNativePointerField<FTribeData*>(this, "CustomGameMode_eventOnUpdateTribeData_Parms.NewTribeData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnUpdateTribeData_Parms.ReturnValue"); }

	// Functions

};

