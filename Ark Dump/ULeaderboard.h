#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "ULeaderboard.h"
#include "FLeaderboardRow.h"
#include "FLeaderboardDisplayRow.h"
#include "AMissionType_ModularMissionBase.h"

struct ULeaderboard : UObject
{
	char __padding[0x30L];
	TSubclassOf<ULeaderboardRowWidget>& LeaderboardRowTypeField() { return *GetNativePointerField<TSubclassOf<ULeaderboardRowWidget>*>(this, "ULeaderboard.LeaderboardRowType"); }
	FLeaderboardDisplayRow& HeaderRowField() { return *GetNativePointerField<FLeaderboardDisplayRow*>(this, "ULeaderboard.HeaderRow"); }
	TEnumAsByte<enum ELeaderboardColumnName::Type>& DefaultOrderByColumnField() { return *GetNativePointerField<TEnumAsByte<enum ELeaderboardColumnName::Type>*>(this, "ULeaderboard.DefaultOrderByColumn"); }
	TEnumAsByte<enum ELeaderboardOrdering::Type>& DefaultOrderingField() { return *GetNativePointerField<TEnumAsByte<enum ELeaderboardOrdering::Type>*>(this, "ULeaderboard.DefaultOrdering"); }
	TEnumAsByte<enum ELeaderboardGroupByMode::Type>& DefaultGroupByMode_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ELeaderboardGroupByMode::Type>*>(this, "ULeaderboard.DefaultGroupByMode_DEPRECATED"); }
	TEnumAsByte<enum ELeaderboardColumnName::Type>& DefaultGroupByColumn_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ELeaderboardColumnName::Type>*>(this, "ULeaderboard.DefaultGroupByColumn_DEPRECATED"); }
	int& DefaultNumRowsToDisplayField() { return *GetNativePointerField<int*>(this, "ULeaderboard.DefaultNumRowsToDisplay"); }

	// Functions

	static bool AddLeaderboardRow(UWorld * WorldContextObject, TSubclassOf<ULeaderboard> LeaderboardType, const FLeaderboardRow * NewRow) { return NativeCall<bool, UWorld *, TSubclassOf<ULeaderboard>, const FLeaderboardRow *>(nullptr, "ULeaderboard.AddLeaderboardRow", WorldContextObject, LeaderboardType, NewRow); }
	bool BPAddLeaderboardRow_Implementation(AShooterGameMode * GameMode, const FLeaderboardRow * NewRow) { return NativeCall<bool, AShooterGameMode *, const FLeaderboardRow *>(this, "ULeaderboard.BPAddLeaderboardRow_Implementation", GameMode, NewRow); }
	int BPCountLeaderboardRows_Implementation(FName MissionTag, AShooterGameMode * GameMode) { return NativeCall<int, FName, AShooterGameMode *>(this, "ULeaderboard.BPCountLeaderboardRows_Implementation", MissionTag, GameMode); }
	FLeaderboardDisplayRow * BPFormatLeaderboardRow_Implementation(FLeaderboardDisplayRow * result, FName MissionTag, int Index, const FLeaderboardRow * DatabaseRow) { return NativeCall<FLeaderboardDisplayRow *, FLeaderboardDisplayRow *, FName, int, const FLeaderboardRow *>(this, "ULeaderboard.BPFormatLeaderboardRow_Implementation", result, MissionTag, Index, DatabaseRow); }
	void BPGetLeaderboardRows_Implementation(FName MissionTag, AShooterGameMode * GameMode, TArray<FLeaderboardRow> * OutLeaderboardRows) { NativeCall<void, FName, AShooterGameMode *, TArray<FLeaderboardRow> *>(this, "ULeaderboard.BPGetLeaderboardRows_Implementation", MissionTag, GameMode, OutLeaderboardRows); }
	static int CountLeaderboardRows(UObject * WorldContextObject, TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag) { return NativeCall<int, UObject *, TSubclassOf<ULeaderboard>, FName>(nullptr, "ULeaderboard.CountLeaderboardRows", WorldContextObject, LeaderboardType, MissionTag); }
	static void FormatLeaderboardRow(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag, const FLeaderboardRow * Row, FLeaderboardDisplayRow * DisplayRow, FString PlayerNetIDString) { NativeCall<void, TSubclassOf<ULeaderboard>, FName, const FLeaderboardRow *, FLeaderboardDisplayRow *, FString>(nullptr, "ULeaderboard.FormatLeaderboardRow", LeaderboardType, MissionTag, Row, DisplayRow, PlayerNetIDString); }
	static void FormatLeaderboardRows(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag, const TArray<FLeaderboardRow> * Rows, TArray<FLeaderboardDisplayRow> * DisplayRows, FString PlayerNetIDString) { NativeCall<void, TSubclassOf<ULeaderboard>, FName, const TArray<FLeaderboardRow> *, TArray<FLeaderboardDisplayRow> *, FString>(nullptr, "ULeaderboard.FormatLeaderboardRows", LeaderboardType, MissionTag, Rows, DisplayRows, PlayerNetIDString); }
	static ULeaderboard * GetLeaderboardDefinition(TSubclassOf<ULeaderboard> LeaderboardType) { return NativeCall<ULeaderboard *, TSubclassOf<ULeaderboard>>(nullptr, "ULeaderboard.GetLeaderboardDefinition", LeaderboardType); }
	static bool GetLeaderboardRows(UObject * WorldContextObject, TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag, TArray<FLeaderboardRow> * OutLeaderboardRows) { return NativeCall<bool, UObject *, TSubclassOf<ULeaderboard>, FName, TArray<FLeaderboardRow> *>(nullptr, "ULeaderboard.GetLeaderboardRows", WorldContextObject, LeaderboardType, MissionTag, OutLeaderboardRows); }
	static bool PopulateDefaultLeaderboardRows(TSubclassOf<ULeaderboard> LeaderboardType, AShooterGameMode * GameMode, TSubclassOf<AMissionType> MissionType) { return NativeCall<bool, TSubclassOf<ULeaderboard>, AShooterGameMode *, TSubclassOf<AMissionType>>(nullptr, "ULeaderboard.PopulateDefaultLeaderboardRows", LeaderboardType, GameMode, MissionType); }
	static bool PopulateDefaultLeaderboardRows_Internal(TSubclassOf<ULeaderboard> LeaderboardType, AShooterGameMode * GameMode, FName MissionTag, const TArray<FLeaderboardRow> * DefaultRows) { return NativeCall<bool, TSubclassOf<ULeaderboard>, AShooterGameMode *, FName, const TArray<FLeaderboardRow> *>(nullptr, "ULeaderboard.PopulateDefaultLeaderboardRows_Internal", LeaderboardType, GameMode, MissionTag, DefaultRows); }
	bool BPAddLeaderboardRow(AShooterGameMode * GameMode, const FLeaderboardRow * NewRow) { return NativeCall<bool, AShooterGameMode *, const FLeaderboardRow *>(this, "ULeaderboard.BPAddLeaderboardRow", GameMode, NewRow); }
	int BPCountLeaderboardRows(FName MissionTag, AShooterGameMode * GameMode) { return NativeCall<int, FName, AShooterGameMode *>(this, "ULeaderboard.BPCountLeaderboardRows", MissionTag, GameMode); }
	FLeaderboardDisplayRow * BPFormatLeaderboardRow(FLeaderboardDisplayRow * result, FName MissionTag, int Index, const FLeaderboardRow * DatabaseRow) { return NativeCall<FLeaderboardDisplayRow *, FLeaderboardDisplayRow *, FName, int, const FLeaderboardRow *>(this, "ULeaderboard.BPFormatLeaderboardRow", result, MissionTag, Index, DatabaseRow); }
	void BPGetLeaderboardRows(FName MissionTag, AShooterGameMode * GameMode, TArray<FLeaderboardRow> * LeaderboardRows) { NativeCall<void, FName, AShooterGameMode *, TArray<FLeaderboardRow> *>(this, "ULeaderboard.BPGetLeaderboardRows", MissionTag, GameMode, LeaderboardRows); }
};

