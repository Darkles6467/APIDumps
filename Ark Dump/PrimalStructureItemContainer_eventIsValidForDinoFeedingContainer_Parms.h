#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventIsValidForDinoFeedingContainer_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalStructureItemContainer_eventIsValidForDinoFeedingContainer_Parms.ForDino"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventIsValidForDinoFeedingContainer_Parms.ReturnValue"); }
};

