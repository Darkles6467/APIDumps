#pragma once

#include "BaseDeclarations.h"
struct FPrimalPersistentCharacterStatsStruct
{
	char __padding[0x2c8L];
	unsigned __int16& CharacterStatusComponent_ExtraCharacterLevelField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExtraCharacterLevel"); }
	float& CharacterStatusComponent_ExperiencePointsField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExperiencePoints"); }
	int& PlayerState_TotalEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TotalEngramPoints"); }
	int& PlayerState_PurchasedEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_PurchasedEngramPoints"); }
	int& CharacterStatusComponent_HighestExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_HighestExtraCharacterLevel"); }
	int& CharacterStatusComponent_LastRespecAtExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecAtExtraCharacterLevel"); }
	long double& CharacterStatusComponent_LastRespecUtcTimeSecondsField() { return *GetNativePointerField<long double*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecUtcTimeSeconds"); }
	TArray<unsigned int>& PerMapExplorerNoteUnlocksField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FPrimalPersistentCharacterStatsStruct.PerMapExplorerNoteUnlocks"); }
	TArray<FName>& EmoteUnlocksField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalPersistentCharacterStatsStruct.EmoteUnlocks"); }
	FieldArray<char, 12> CharacterStatusComponent_NumberOfLevelUpPointsAppliedField() { return {this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_NumberOfLevelUpPointsApplied"}; }
	FieldArray<char, 10> PlayerState_DefaultItemSlotEngramsField() { return {this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotEngrams"}; }
	FieldArray<FDinoOrderGroup, 10> DinoOrderGroupsField() { return {this, "FPrimalPersistentCharacterStatsStruct.DinoOrderGroups"}; }
	int& CurrentlySelectedDinoOrderGroupField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CurrentlySelectedDinoOrderGroup"); }
	float& PercentageOfHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfHeadHairGrowth"); }
	bool& bHasUnlockedAllExplorerNotesField() { return *GetNativePointerField<bool*>(this, "FPrimalPersistentCharacterStatsStruct.bHasUnlockedAllExplorerNotes"); }
	float& PercentageOfFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfFacialHairGrowth"); }
	char& FacialHairIndexField() { return *GetNativePointerField<char*>(this, "FPrimalPersistentCharacterStatsStruct.FacialHairIndex"); }
	char& HeadHairIndexField() { return *GetNativePointerField<char*>(this, "FPrimalPersistentCharacterStatsStruct.HeadHairIndex"); }

	// Functions

	bool IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(this, "FPrimalPersistentCharacterStatsStruct.IsPerMapExplorerNoteUnlocked", ExplorerNoteIndex); }
	FPrimalPersistentCharacterStatsStruct * operator=(const FPrimalPersistentCharacterStatsStruct * __that) { return NativeCall<FPrimalPersistentCharacterStatsStruct *, const FPrimalPersistentCharacterStatsStruct *>(this, "FPrimalPersistentCharacterStatsStruct.operator=", __that); }
	bool IsEmoteUnlocked(FName EmoteName) { return NativeCall<bool, FName>(this, "FPrimalPersistentCharacterStatsStruct.IsEmoteUnlocked", EmoteName); }
	void ApplyToPrimalCharacter(APrimalCharacter * aChar, AShooterPlayerController * forPC, bool bIgnoreStats) { NativeCall<void, APrimalCharacter *, AShooterPlayerController *, bool>(this, "FPrimalPersistentCharacterStatsStruct.ApplyToPrimalCharacter", aChar, forPC, bIgnoreStats); }
	void GiveEngramsToPlayerState(APrimalCharacter * aChar, AShooterPlayerController * forPC) { NativeCall<void, APrimalCharacter *, AShooterPlayerController *>(this, "FPrimalPersistentCharacterStatsStruct.GiveEngramsToPlayerState", aChar, forPC); }
	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>(this, "FPrimalPersistentCharacterStatsStruct.UnlockEmote", EmoteName); }
	void UnlockPerMapExplorerNote(int ExplorerNoteIndex) { NativeCall<void, int>(this, "FPrimalPersistentCharacterStatsStruct.UnlockPerMapExplorerNote", ExplorerNoteIndex); }
};

