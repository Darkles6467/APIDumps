#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacterStatusComponent_eventBPModifyMaxLevel_Parms
{
	char __padding[0x8L];
	int& InMaxLevelField() { return *GetNativePointerField<int*>(this, "PrimalCharacterStatusComponent_eventBPModifyMaxLevel_Parms.InMaxLevel"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalCharacterStatusComponent_eventBPModifyMaxLevel_Parms.ReturnValue"); }
};

