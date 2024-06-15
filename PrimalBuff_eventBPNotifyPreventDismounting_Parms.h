#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPNotifyPreventDismounting_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * FromDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalBuff_eventBPNotifyPreventDismounting_Parms.FromDino"); }
};

