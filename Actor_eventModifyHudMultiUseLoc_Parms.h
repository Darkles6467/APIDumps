#pragma once

#include "BaseDeclarations.h"
struct Actor_eventModifyHudMultiUseLoc_Parms
{
	char __padding[0x18L];
	FVector2D& theVecField() { return *GetNativePointerField<FVector2D*>(this, "Actor_eventModifyHudMultiUseLoc_Parms.theVec"); }
	int& indexField() { return *GetNativePointerField<int*>(this, "Actor_eventModifyHudMultiUseLoc_Parms.index"); }
};

