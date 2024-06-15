#pragma once

#include "BaseDeclarations.h"
struct FLevelGuids
{
	char __padding[0x18L];
	FName& LevelNameField() { return *GetNativePointerField<FName*>(this, "FLevelGuids.LevelName"); }
	TArray<FGuid>& GuidsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FLevelGuids.Guids"); }
};

