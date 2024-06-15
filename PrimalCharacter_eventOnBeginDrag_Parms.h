#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventOnBeginDrag_Parms
{
	char __padding[0x10L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventOnBeginDrag_Parms.BoneIndex"); }
	bool& bWithGrapHookField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventOnBeginDrag_Parms.bWithGrapHook"); }
};

