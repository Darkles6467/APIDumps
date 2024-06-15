#pragma once

#include "BaseDeclarations.h"
struct FOnlineAchievement
{
	char __padding[0x18L];
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FOnlineAchievement.Id"); }
	long double& ProgressField() { return *GetNativePointerField<long double*>(this, "FOnlineAchievement.Progress"); }
};

