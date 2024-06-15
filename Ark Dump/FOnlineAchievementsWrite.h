#pragma once

#include "BaseDeclarations.h"
#include "FOnlineStats.h"

struct FOnlineAchievementsWrite : FOnlineStats
{
	char __padding[0x8L];
	EOnlineAsyncTaskState::Type& WriteStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FOnlineAchievementsWrite.WriteState"); }

	// Functions

};

