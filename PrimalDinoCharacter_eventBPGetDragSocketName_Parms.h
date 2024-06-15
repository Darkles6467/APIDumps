#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetDragSocketName_Parms
{
	char __padding[0x10L];
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPGetDragSocketName_Parms.ReturnValue"); }
};

