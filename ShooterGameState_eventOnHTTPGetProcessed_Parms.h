#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventOnHTTPGetProcessed_Parms
{
	char __padding[0x18L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "ShooterGameState_eventOnHTTPGetProcessed_Parms.bSuccess"); }
	FString& StringResultField() { return *GetNativePointerField<FString*>(this, "ShooterGameState_eventOnHTTPGetProcessed_Parms.StringResult"); }
};

