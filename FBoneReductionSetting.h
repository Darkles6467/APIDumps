#pragma once

#include "BaseDeclarations.h"
struct FBoneReductionSetting
{
	char __padding[0x10L];
	TArray<FName>& BonesToRemoveField() { return *GetNativePointerField<TArray<FName>*>(this, "FBoneReductionSetting.BonesToRemove"); }

	// Functions

};

