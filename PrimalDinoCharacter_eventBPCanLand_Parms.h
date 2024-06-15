#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanLand_Parms
{
	char __padding[0x2L];
	bool& CanLandField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanLand_Parms.CanLand"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanLand_Parms.ReturnValue"); }
};

