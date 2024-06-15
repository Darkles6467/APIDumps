#pragma once

#include "BaseDeclarations.h"
struct FOnlineStatsRow
{
	char __padding[0x38L];
	const FString& NickNameField() { return *GetNativePointerField<const FString*>(this, "FOnlineStatsRow.NickName"); }
	int& RankField() { return *GetNativePointerField<int*>(this, "FOnlineStatsRow.Rank"); }
	FOnlineKeyValuePairs<FName,FVariantData>& ColumnsField() { return *GetNativePointerField<FOnlineKeyValuePairs<FName,FVariantData>*>(this, "FOnlineStatsRow.Columns"); }

	// Functions

};

