#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetDragSocketDinoName_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * aGrabbedDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBPGetDragSocketDinoName_Parms.aGrabbedDino"); }
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPGetDragSocketDinoName_Parms.ReturnValue"); }
};

