#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnInitOptionEvent_Parms
{
	char __padding[0x18L];
	FString& OptionsField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnInitOptionEvent_Parms.Options"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnInitOptionEvent_Parms.ReturnValue"); }

	// Functions

};

