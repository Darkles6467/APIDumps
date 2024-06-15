#pragma once

#include "BaseDeclarations.h"
struct FPinConnectionResponse
{
	char __padding[0x18L];
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "FPinConnectionResponse.Message"); }
	TEnumAsByte<enum ECanCreateConnectionResponse>& ResponseField() { return *GetNativePointerField<TEnumAsByte<enum ECanCreateConnectionResponse>*>(this, "FPinConnectionResponse.Response"); }

	// Functions

};

