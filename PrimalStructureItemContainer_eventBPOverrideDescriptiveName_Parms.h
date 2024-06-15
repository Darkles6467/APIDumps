#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPOverrideDescriptiveName_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalStructureItemContainer_eventBPOverrideDescriptiveName_Parms.ReturnValue"); }
};

