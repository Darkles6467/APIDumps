#pragma once

#include "BaseDeclarations.h"
struct FOnlineLeaderboardRead
{
	char __padding[0x38L];
	FName& LeaderboardNameField() { return *GetNativePointerField<FName*>(this, "FOnlineLeaderboardRead.LeaderboardName"); }
	FName& SortedColumnField() { return *GetNativePointerField<FName*>(this, "FOnlineLeaderboardRead.SortedColumn"); }
	TArray<FColumnMetaData>& ColumnMetadataField() { return *GetNativePointerField<TArray<FColumnMetaData>*>(this, "FOnlineLeaderboardRead.ColumnMetadata"); }
	EOnlineAsyncTaskState::Type& ReadStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FOnlineLeaderboardRead.ReadState"); }

	// Functions

};

struct TestLeaderboardRead : FOnlineLeaderboardRead
{

	// Functions

};

