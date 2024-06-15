#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPModifyPlayerBoneModifiers_Parms
{
	char __padding[0x20L];
	TArray<FBoneModifier>& InBoneModifiersField() { return *GetNativePointerField<TArray<FBoneModifier>*>(this, "PrimalBuff_eventBPModifyPlayerBoneModifiers_Parms.InBoneModifiers"); }
	TArray<FBoneModifier>& ReturnValueField() { return *GetNativePointerField<TArray<FBoneModifier>*>(this, "PrimalBuff_eventBPModifyPlayerBoneModifiers_Parms.ReturnValue"); }

	// Functions

};

