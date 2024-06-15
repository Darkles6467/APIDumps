#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPGetExtraSpecialBlueprintInt_Parms
{
	char __padding[0x8L];
	int& toCheckField() { return *GetNativePointerField<int*>(this, "Actor_eventBPGetExtraSpecialBlueprintInt_Parms.toCheck"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "Actor_eventBPGetExtraSpecialBlueprintInt_Parms.ReturnValue"); }
};

