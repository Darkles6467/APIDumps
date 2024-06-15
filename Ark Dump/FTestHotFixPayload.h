#pragma once

#include "BaseDeclarations.h"
struct FTestHotFixPayload
{
	char __padding[0x18L];
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "FTestHotFixPayload.Message"); }
	bool& ValueToReturnField() { return *GetNativePointerField<bool*>(this, "FTestHotFixPayload.ValueToReturn"); }
	bool& ResultField() { return *GetNativePointerField<bool*>(this, "FTestHotFixPayload.Result"); }
};

