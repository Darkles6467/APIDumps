#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventOnHTTPPostResponse_Parms
{
	char __padding[0x18L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "ShooterGameState_eventOnHTTPPostResponse_Parms.bSuccess"); }
	FString& StringResultField() { return *GetNativePointerField<FString*>(this, "ShooterGameState_eventOnHTTPPostResponse_Parms.StringResult"); }
};

