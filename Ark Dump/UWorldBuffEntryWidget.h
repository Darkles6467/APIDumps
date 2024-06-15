#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWorldBuffEntryWidget : UUserWidget
{
	char __padding[0xc0L];
	float& DefaultDisplayTimeField() { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.DefaultDisplayTime"); }
	float& ExpiringSoonDisplayTimeField() { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.ExpiringSoonDisplayTime"); }
	const FWorldBuffPersistantData * WorldBuffDataField() { return GetNativePointerField<const FWorldBuffPersistantData *>(this, "UWorldBuffEntryWidget.WorldBuffData"); }
	UImage * IconImageField() { return GetNativePointerField<UImage *>(this, "UWorldBuffEntryWidget.IconImage"); }
	UImage * IconBackgroundImageField() { return GetNativePointerField<UImage *>(this, "UWorldBuffEntryWidget.IconBackgroundImage"); }
	UTextBlock * TitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UWorldBuffEntryWidget.TitleTextBlock"); }
	UTextBlock * GammaTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UWorldBuffEntryWidget.GammaTextBlock"); }
	UTextBlock * BetaTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UWorldBuffEntryWidget.BetaTextBlock"); }
	UTextBlock * AlphaTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UWorldBuffEntryWidget.AlphaTextBlock"); }
	UTextBlock * DescriptionTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UWorldBuffEntryWidget.DescriptionTextBlock"); }
	FString& GammaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.GammaDifficultyBonus"); }
	FString& BetaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.BetaDifficultyBonus"); }
	FString& AlphaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.AlphaDifficultyBonus"); }

	// Functions

	void BeginExpiring() { NativeCall<void>(this, "UWorldBuffEntryWidget.BeginExpiring"); }
	void Collapse() { NativeCall<void>(this, "UWorldBuffEntryWidget.Collapse"); }
	void FadeOut() { NativeCall<void>(this, "UWorldBuffEntryWidget.FadeOut"); }
	void Initialize(bool bIsListEntry) { NativeCall<void, bool>(this, "UWorldBuffEntryWidget.Initialize", bIsListEntry); }
	void SetDifficultyValues(const FWorldBuffDefinition * WorldBuffDefinition) { NativeCall<void, const FWorldBuffDefinition *>(this, "UWorldBuffEntryWidget.SetDifficultyValues", WorldBuffDefinition); }
	void SyncData(const FWorldBuffPersistantData * WorldBuffPersistantData, bool bIsListEntry, bool bShouldReinit, bool bDurationIsStopped) { NativeCall<void, const FWorldBuffPersistantData *, bool, bool, bool>(this, "UWorldBuffEntryWidget.SyncData", WorldBuffPersistantData, bIsListEntry, bShouldReinit, bDurationIsStopped); }
};

