#pragma once

#include "BaseDeclarations.h"
struct FUserStatsStateSteam
{
	char __padding[0x68L];
	EOnlineAsyncTaskState::Type& StatsStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FUserStatsStateSteam.StatsState"); }
};

