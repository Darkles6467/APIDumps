#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UPrimalItem.h"

struct UPrimalEngramEntry : UObject
{
	char __padding[0x68L];
	int& RequiredCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredCharacterLevel"); }
	int& RequiredEngramPointsField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredEngramPoints"); }
	FString& ExtraEngramDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
	TArray<FEngramEntries>& EngramRequirementSetsField() { return *GetNativePointerField<TArray<FEngramEntries>*>(this, "UPrimalEngramEntry.EngramRequirementSets"); }
	int& MyEngramIndexField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.MyEngramIndex"); }
	TEnumAsByte<enum EEngramGroup::Type>& EngramGroupField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "UPrimalEngramEntry.EngramGroup"); }

	// Functions

	void ClearHiddenEngramRequirements() { NativeCall<void>(this, "UPrimalEngramEntry.ClearHiddenEngramRequirements"); }
	void GetAllChainedPreReqs(AShooterPlayerState * aPlayerState, TArray<TSubclassOf<UPrimalEngramEntry>> * TestedEntries) { NativeCall<void, AShooterPlayerState *, TArray<TSubclassOf<UPrimalEngramEntry>> *>(this, "UPrimalEngramEntry.GetAllChainedPreReqs", aPlayerState, TestedEntries); }
	int GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>> * TestedEntries) { return NativeCall<int, TArray<TSubclassOf<UPrimalEngramEntry>> *>(this, "UPrimalEngramEntry.GetChainRequiredEngramPoints", TestedEntries); }
	FString * GetEngramDescription(FString * result, AShooterPlayerState * aPlayerState) { return NativeCall<FString *, FString *, AShooterPlayerState *>(this, "UPrimalEngramEntry.GetEngramDescription", result, aPlayerState); }
	FString * GetEngramName(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalEngramEntry.GetEngramName", result); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalEngramEntry.GetEntryString", result); }
	int GetRequiredEngramPoints() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredEngramPoints"); }
	int GetRequiredLevel() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredLevel"); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "UPrimalEngramEntry.IsEngramClassHidden", ForItemClass); }
	bool MeetsEngramChainRequirements(AShooterPlayerState * aPlayerState) { return NativeCall<bool, AShooterPlayerState *>(this, "UPrimalEngramEntry.MeetsEngramChainRequirements", aPlayerState); }
	bool MeetsEngramRequirements(AShooterPlayerState * aPlayerState, bool bOnlyCheckLevel, bool bDontCheckEngramPreRequirements) { return NativeCall<bool, AShooterPlayerState *, bool, bool>(this, "UPrimalEngramEntry.MeetsEngramRequirements", aPlayerState, bOnlyCheckLevel, bDontCheckEngramPreRequirements); }
	bool UseEngramRequirementSets() { return NativeCall<bool>(this, "UPrimalEngramEntry.UseEngramRequirementSets"); }
};

