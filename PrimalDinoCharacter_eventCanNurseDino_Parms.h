#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventCanNurseDino_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * OtherDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventCanNurseDino_Parms.OtherDino"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventCanNurseDino_Parms.ReturnValue"); }
};

