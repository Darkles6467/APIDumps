#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardEntry
{
	char __padding[0x18L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "FLeaderboardEntry.MissionTag"); }
	TArray<FLeaderboardRow>& RowsField() { return *GetNativePointerField<TArray<FLeaderboardRow>*>(this, "FLeaderboardEntry.Rows"); }

	// Functions

};

