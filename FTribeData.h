#pragma once

#include "BaseDeclarations.h"
struct FTribeData
{
	char __padding[0x140L];
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeData.TribeName"); }
	long double& LastNameChangeTimeField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString>& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int>& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned char>& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTribeData.MembersRankGroups"); }
	TArray<double>& SlotFreedTimeField() { return *GetNativePointerField<TArray<double>*>(this, "FTribeData.SlotFreedTime"); }
	TArray<unsigned int>& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance>& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct>& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct>*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar>& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar>*>(this, "FTribeData.TribeWars"); }
	TArray<FString>& TribeLogField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup>& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "FTribeData.TribeRankGroups"); }
	int& NumTribeDinosField() { return *GetNativePointerField<int*>(this, "FTribeData.NumTribeDinos"); }
	long double& LastMergedTimeField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastMergedTime"); }

	// Functions

	FTribeAlliance * FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance *, unsigned int>(this, "FTribeData.FindTribeAlliance", AllianceID); }
	int GetBestRankGroupForRank(int Rank) { return NativeCall<int, int>(this, "FTribeData.GetBestRankGroupForRank", Rank); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex"); }
	FString * GetRankNameForPlayerID(FString * result, unsigned int PlayerDataID) { return NativeCall<FString *, FString *, unsigned int>(this, "FTribeData.GetRankNameForPlayerID", result, PlayerDataID); }
	long double GetSecondsSinceLastNameChange(UObject * WorldContextObject) { return NativeCall<long double, UObject *>(this, "FTribeData.GetSecondsSinceLastNameChange", WorldContextObject); }
	float GetTribeNameChangeCooldownTime(UObject * WorldContextObject) { return NativeCall<float, UObject *>(this, "FTribeData.GetTribeNameChangeCooldownTime", WorldContextObject); }
	FString * GetTribeNameWithRankGroup(FString * result, unsigned int PlayerDataID) { return NativeCall<FString *, FString *, unsigned int>(this, "FTribeData.GetTribeNameWithRankGroup", result, PlayerDataID); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup * outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup *>(this, "FTribeData.GetTribeRankGroupForPlayer", PlayerDataID, outRankGroup); }
	int GetTribeRankGroupIndexForPlayer(unsigned int PlayerDataID) { return NativeCall<int, unsigned int>(this, "FTribeData.GetTribeRankGroupIndexForPlayer", PlayerDataID); }
	bool HasTribeWarRequest(int TribeID, UWorld * ForWorld) { return NativeCall<bool, int, UWorld *>(this, "FTribeData.HasTribeWarRequest", TribeID, ForWorld); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith", OtherTribeID); }
	bool IsTribeWarActive(int TribeID, UWorld * ForWorld, bool bIncludeUnstarted) { return NativeCall<bool, int, UWorld *, bool>(this, "FTribeData.IsTribeWarActive", TribeID, ForWorld, bIncludeUnstarted); }
	void MarkTribeNameChanged(UObject * WorldContextObject) { NativeCall<void, UObject *>(this, "FTribeData.MarkTribeNameChanged", WorldContextObject); }
	void RefreshTribeWars(UWorld * ForWorld) { NativeCall<void, UWorld *>(this, "FTribeData.RefreshTribeWars", ForWorld); }
	FTribeData * operator=(const FTribeData * __that) { return NativeCall<FTribeData *, const FTribeData *>(this, "FTribeData.operator=", __that); }
};

