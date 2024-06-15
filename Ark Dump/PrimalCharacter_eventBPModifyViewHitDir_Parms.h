#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPModifyViewHitDir_Parms
{
	char __padding[0x10L];
	float& InViewHitDirField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyViewHitDir_Parms.InViewHitDir"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyViewHitDir_Parms.ReturnValue"); }
};

