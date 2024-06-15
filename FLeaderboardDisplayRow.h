#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardDisplayRow
{
	char __padding[0x20L];
	TArray<FString>& ColumnsField() { return *GetNativePointerField<TArray<FString>*>(this, "FLeaderboardDisplayRow.Columns"); }
	bool& IsPlayersOwnRowField() { return *GetNativePointerField<bool*>(this, "FLeaderboardDisplayRow.IsPlayersOwnRow"); }

	// Functions

	FLeaderboardDisplayRow * operator=(const FLeaderboardDisplayRow * __that) { return NativeCall<FLeaderboardDisplayRow *, const FLeaderboardDisplayRow *>(this, "FLeaderboardDisplayRow.operator=", __that); }
};

