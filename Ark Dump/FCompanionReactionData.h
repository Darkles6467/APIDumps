#pragma once

#include "BaseDeclarations.h"
struct FCompanionReactionData
{
	char __padding[0xa0L];
	int& ReactionPriorityField() { return *GetNativePointerField<int*>(this, "FCompanionReactionData.ReactionPriority"); }
	char& ReactionTypeField() { return *GetNativePointerField<char*>(this, "FCompanionReactionData.ReactionType"); }
	float& ReactionTimePadding_StartField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionTimePadding_Start"); }
	float& ReactionTimePadding_EndField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionTimePadding_End"); }
	float& ForceReactionDurationField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ForceReactionDuration"); }
	UAnimMontage * ReactionAnimField() { return GetNativePointerField<UAnimMontage *>(this, "FCompanionReactionData.ReactionAnim"); }
	float& ReactionStartDelay_AnimField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionStartDelay_Anim"); }
	float& ReactionForceDuration_AnimField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionForceDuration_Anim"); }
	UParticleSystem * ReactionVFXField() { return GetNativePointerField<UParticleSystem *>(this, "FCompanionReactionData.ReactionVFX"); }
	float& ReactionStartDelay_VFXField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionStartDelay_VFX"); }
	float& ReactionForceDuration_VFXField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionForceDuration_VFX"); }
	TArray<FStringAssetReference>& ReactionSFXArrayField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "FCompanionReactionData.ReactionSFXArray"); }
	float& ReactionStartDelay_SFXField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionStartDelay_SFX"); }
	float& ReactionForceDuration_SFXField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ReactionForceDuration_SFX"); }
	long double& ReactionStartTimeField() { return *GetNativePointerField<long double*>(this, "FCompanionReactionData.ReactionStartTime"); }
	long double& ReactionEndTimeField() { return *GetNativePointerField<long double*>(this, "FCompanionReactionData.ReactionEndTime"); }
	float& RequiredSecondsSincePreviousReactionInOrderToBePlayedField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.RequiredSecondsSincePreviousReactionInOrderToBePlayed"); }
	float& ChanceToOccurField() { return *GetNativePointerField<float*>(this, "FCompanionReactionData.ChanceToOccur"); }
	FStringAssetReference& FallbackSharedAnimTextureField() { return *GetNativePointerField<FStringAssetReference*>(this, "FCompanionReactionData.FallbackSharedAnimTexture"); }
	TArray<FLocalizedSoundWaveAnimTexturePairArrays>& LocalizedSoundWavesField() { return *GetNativePointerField<TArray<FLocalizedSoundWaveAnimTexturePairArrays>*>(this, "FCompanionReactionData.LocalizedSoundWaves"); }
	int& ExplorerNoteIndexToUnlockField() { return *GetNativePointerField<int*>(this, "FCompanionReactionData.ExplorerNoteIndexToUnlock"); }

	// Functions

	FCompanionReactionData * operator=(const FCompanionReactionData * __that) { return NativeCall<FCompanionReactionData *, const FCompanionReactionData *>(this, "FCompanionReactionData.operator=", __that); }
	void InitReaction() { NativeCall<void>(this, "FCompanionReactionData.InitReaction"); }
	bool IsValidCompanionReaction() { return NativeCall<bool>(this, "FCompanionReactionData.IsValidCompanionReaction"); }
};

