#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverrideCantBuildReasonString_Parms
{
	char __padding[0x18L];
	int& CantBuildReasonField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideCantBuildReasonString_Parms.CantBuildReason"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalStructure_eventBPOverrideCantBuildReasonString_Parms.ReturnValue"); }
};

