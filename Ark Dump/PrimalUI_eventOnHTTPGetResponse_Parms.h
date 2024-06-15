#pragma once

#include "BaseDeclarations.h"
struct PrimalUI_eventOnHTTPGetResponse_Parms
{
	char __padding[0x18L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "PrimalUI_eventOnHTTPGetResponse_Parms.bSuccess"); }
	FString& StringResultField() { return *GetNativePointerField<FString*>(this, "PrimalUI_eventOnHTTPGetResponse_Parms.StringResult"); }
};

