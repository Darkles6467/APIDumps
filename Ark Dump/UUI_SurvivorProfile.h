#pragma once

#include "BaseDeclarations.h"
#include "UPrimalSubMenuUI.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SurvivorProfile : UPrimalSubMenuUI
{
	char __padding[0x3f0L];
	bool& bDossierVisibleField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bDossierVisible"); }
	UCheckBox * ShowSubtitlesCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_SurvivorProfile.ShowSubtitlesCheckBox"); }
	UImage * DossierImageField() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.DossierImage"); }
	UDataListPanel * DossiersPanelField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.DossiersPanel"); }
	UImage * LoadingImageField() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.LoadingImage"); }
	UUI_PreviewWidget * PreviewWidgetField() { return GetNativePointerField<UUI_PreviewWidget *>(this, "UUI_SurvivorProfile.PreviewWidget"); }
	UTextBlock * DossierTitleField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.DossierTitle"); }
	UCustomButtonWidget * HelenaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.HelenaButton"); }
	UCustomButtonWidget * ScorchedEarthButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.ScorchedEarthButton"); }
	UCustomButtonWidget * MainIslandButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.MainIslandButton"); }
	UCustomButtonWidget * UnlockedNotesButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.UnlockedNotesButton"); }
	UCustomButtonWidget * AberrationButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.AberrationButton"); }
	UCustomButtonWidget * ExtinctionButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.ExtinctionButton"); }
	UCustomButtonWidget * Genesis1ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.Genesis1Button"); }
	UCustomButtonWidget * Genesis2ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.Genesis2Button"); }
	UCustomButtonWidget * RockwellButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.RockwellButton"); }
	UCustomButtonWidget * MeiyinButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.MeiyinButton"); }
	UCustomButtonWidget * NervaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.NervaButton"); }
	UCustomButtonWidget * RaiaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.RaiaButton"); }
	UCustomButtonWidget * DahkeyaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.DahkeyaButton"); }
	UCustomButtonWidget * DossierButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.DossierButton"); }
	UCustomButtonWidget * BossesButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.BossesButton"); }
	UCustomButtonWidget * GraduateButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.GraduateButton"); }
	UCustomButtonWidget * DianaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.DianaButton"); }
	UCustomButtonWidget * SheWhoWaitsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.SheWhoWaitsButton"); }
	UCustomButtonWidget * SantiagoButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.SantiagoButton"); }
	UCustomButtonWidget * HLNABotButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.HLNABotButton"); }
	UCustomButtonWidget * NidaButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.NidaButton"); }
	UCustomButtonWidget * GabrielButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_SurvivorProfile.GabrielButton"); }
	UDataListPanel * ExplorerNotesPanel0Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanel0"); }
	UDataListPanel * ExplorerNotesPanel1Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanel1"); }
	UDataListPanel * ExplorerNotesPanel2Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanel2"); }
	UDataListPanel * ExplorerNotesPanel3Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanel3"); }
	UDataListPanel * ExplorerNotesPanel4Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanel4"); }
	UDataListPanel * ExplorerNotesPanelThird0Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanelThird0"); }
	UDataListPanel * ExplorerNotesPanelThird1Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanelThird1"); }
	UDataListPanel * ExplorerNotesPanelThird2Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanelThird2"); }
	UDataListPanel * ExplorerNotesPanelHalf0Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanelHalf0"); }
	UDataListPanel * ExplorerNotesPanelHalf1Field() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesPanelHalf1"); }
	UDataListPanel * ExplorerNotesSinglePanelField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_SurvivorProfile.ExplorerNotesSinglePanel"); }
	UTextBlock * PanelTitle0Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.PanelTitle0"); }
	UTextBlock * PanelTitle1Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.PanelTitle1"); }
	UTextBlock * PanelTitle2Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.PanelTitle2"); }
	UTextBlock * PanelTitle3Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.PanelTitle3"); }
	UTextBlock * PanelTitle4Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.PanelTitle4"); }
	UTextBlock * ThirdPanelTitle0Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.ThirdPanelTitle0"); }
	UTextBlock * ThirdPanelTitle1Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.ThirdPanelTitle1"); }
	UTextBlock * ThirdPanelTitle2Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.ThirdPanelTitle2"); }
	UTextBlock * HalfPanelTitle0Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.HalfPanelTitle0"); }
	UTextBlock * HalfPanelTitle1Field() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.HalfPanelTitle1"); }
	UTextBlock * SinglePanelTitleField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SurvivorProfile.SinglePanelTitle"); }
	UPrimalRichTextBlock * DossierSubtitleField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_SurvivorProfile.DossierSubtitle"); }
	long double& NoteDialogueStartTimeField() { return *GetNativePointerField<long double*>(this, "UUI_SurvivorProfile.NoteDialogueStartTime"); }
	TWeakObjectPtr<USoundCue>& NoteDialogueSoundCueField() { return *GetNativePointerField<TWeakObjectPtr<USoundCue>*>(this, "UUI_SurvivorProfile.NoteDialogueSoundCue"); }
	int& NoteDialogueLastSubtitleIndexField() { return *GetNativePointerField<int*>(this, "UUI_SurvivorProfile.NoteDialogueLastSubtitleIndex"); }
	UImage * PanelIcon0Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.PanelIcon0"); }
	UImage * PanelIcon1Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.PanelIcon1"); }
	UImage * PanelIcon2Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.PanelIcon2"); }
	UImage * PanelIcon3Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.PanelIcon3"); }
	UImage * ThirdPanelIcon0Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.ThirdPanelIcon0"); }
	UImage * ThirdPanelIcon1Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.ThirdPanelIcon1"); }
	UImage * ThirdPanelIcon2Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.ThirdPanelIcon2"); }
	UImage * HalfPanelIcon0Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.HalfPanelIcon0"); }
	UImage * HalfPanelIcon1Field() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.HalfPanelIcon1"); }
	UImage * SinglePanelIconField() { return GetNativePointerField<UImage *>(this, "UUI_SurvivorProfile.SinglePanelIcon"); }
	bool& bAnimatingNoteMeshField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bAnimatingNoteMesh"); }
	bool& bClosingNoteMeshField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bClosingNoteMesh"); }
	float& ClosingAnimDurationField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ClosingAnimDuration"); }
	float& ElapsedOpeningTimeField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ElapsedOpeningTime"); }
	float& ElapsedClosingTimeField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ElapsedClosingTime"); }
	FVector& OriginalMeshScaleField() { return *GetNativePointerField<FVector*>(this, "UUI_SurvivorProfile.OriginalMeshScale"); }
	bool& bIsLoadingSoundCueField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bIsLoadingSoundCue"); }
	FLocalizedSoundCueEntry& CurrentNoteDialogueField() { return *GetNativePointerField<FLocalizedSoundCueEntry*>(this, "UUI_SurvivorProfile.CurrentNoteDialogue"); }
	USoundCue * AsyncLoadedSoundCueField() { return GetNativePointerField<USoundCue *>(this, "UUI_SurvivorProfile.AsyncLoadedSoundCue"); }
	FieldArray<int, 4> PanelSlotsField() { return {this, "UUI_SurvivorProfile.PanelSlots"}; }
	int& CurrentlyShownEntryField() { return *GetNativePointerField<int*>(this, "UUI_SurvivorProfile.CurrentlyShownEntry"); }
	UGenericDataListEntry * LastSelectedEntryField() { return GetNativePointerField<UGenericDataListEntry *>(this, "UUI_SurvivorProfile.LastSelectedEntry"); }
	FVector2D& CachedLastHighlightedScreenPosField() { return *GetNativePointerField<FVector2D*>(this, "UUI_SurvivorProfile.CachedLastHighlightedScreenPos"); }
	FVector2D& ControllerPanVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UUI_SurvivorProfile.ControllerPanVelocity"); }
	TArray<FStringAssetReference>& StreamedAssetsField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "UUI_SurvivorProfile.StreamedAssets"); }
	FStringAssetReference& SoundWaveStringAssetReferenceField() { return *GetNativePointerField<FStringAssetReference*>(this, "UUI_SurvivorProfile.SoundWaveStringAssetReference"); }
	UGenericDataListEntry * AsyncLoadingDinoEntryField() { return GetNativePointerField<UGenericDataListEntry *>(this, "UUI_SurvivorProfile.AsyncLoadingDinoEntry"); }
	UAudioComponent * DialogueSoundComponentField() { return GetNativePointerField<UAudioComponent *>(this, "UUI_SurvivorProfile.DialogueSoundComponent"); }
	bool& bShowingDossiersField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bShowingDossiers"); }
	bool& bShowingScorchedEarthField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bShowingScorchedEarth"); }
	FName& ExplorerNoteMaterialParameterNameField() { return *GetNativePointerField<FName*>(this, "UUI_SurvivorProfile.ExplorerNoteMaterialParameterName"); }
	FName& ExplorerNoteAnimTextureParamNameField() { return *GetNativePointerField<FName*>(this, "UUI_SurvivorProfile.ExplorerNoteAnimTextureParamName"); }
	FName& ExplorerNoteAnimTextureStartTimeParamNameField() { return *GetNativePointerField<FName*>(this, "UUI_SurvivorProfile.ExplorerNoteAnimTextureStartTimeParamName"); }
	FName& ExplorerNoteAnimTextureDurationParamNameField() { return *GetNativePointerField<FName*>(this, "UUI_SurvivorProfile.ExplorerNoteAnimTextureDurationParamName"); }
	float& ExplorerNoteAnimTextureDurationOffsetField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ExplorerNoteAnimTextureDurationOffset"); }
	float& ExplorerNoteFadeInSpeedField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ExplorerNoteFadeInSpeed"); }
	float& ExplorerNoteFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ExplorerNoteFadeOutSpeed"); }
	float& ShowDossierTitleDelayTimeField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ShowDossierTitleDelayTime"); }
	float& ExplorerNoteExtraCloseTimeField() { return *GetNativePointerField<float*>(this, "UUI_SurvivorProfile.ExplorerNoteExtraCloseTime"); }
	TArray<FString>& NoteCategoryNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UUI_SurvivorProfile.NoteCategoryNames"); }
	bool& bIgnoreFirstGCField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bIgnoreFirstGC"); }
	bool& bIgnoreFirstSelectionField() { return *GetNativePointerField<bool*>(this, "UUI_SurvivorProfile.bIgnoreFirstSelection"); }

	// Functions

	void EntryMetadata(const UUI_SurvivorProfile::EntryMetadata * __that) { NativeCall<void, const UUI_SurvivorProfile::EntryMetadata *>(this, "UUI_SurvivorProfile.EntryMetadata", __that); }
	void EntryMetadata(UCustomButtonWidget * ButtonWidget) { NativeCall<void, UCustomButtonWidget *>(this, "UUI_SurvivorProfile.EntryMetadata", ButtonWidget); }
	void EntryMetadata(UCustomButtonWidget * ButtonWidget, FName MapName, int DataListMask, TArray<enum EntryType> DefaultEntries) { NativeCall<void, UCustomButtonWidget *, FName, int, TArray<enum EntryType>>(this, "UUI_SurvivorProfile.EntryMetadata", ButtonWidget, MapName, DataListMask, DefaultEntries); }
	void EntryMetadata() { NativeCall<void>(this, "UUI_SurvivorProfile.EntryMetadata"); }
	static bool CategoryMatchesExplorerNote(EEntryCategory Category, const FExplorerNoteEntry * ExplorerNote) { return NativeCall<bool, EEntryCategory, const FExplorerNoteEntry *>(nullptr, "UUI_SurvivorProfile.CategoryMatchesExplorerNote", Category, ExplorerNote); }
	void ClearSubtitles() { NativeCall<void>(this, "UUI_SurvivorProfile.ClearSubtitles"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_SurvivorProfile.ClickedButton", clickedWidget); }
	void CloseExplorerNoteMeshWithAnimation() { NativeCall<void>(this, "UUI_SurvivorProfile.CloseExplorerNoteMeshWithAnimation"); }
	void ConsolidateDisplays() { NativeCall<void>(this, "UUI_SurvivorProfile.ConsolidateDisplays"); }
	void EnsureUnfiltered(const FExplorerNoteEntry * Entry) { NativeCall<void, const FExplorerNoteEntry *>(this, "UUI_SurvivorProfile.EnsureUnfiltered", Entry); }
	void FinishAsyncLoading() { NativeCall<void>(this, "UUI_SurvivorProfile.FinishAsyncLoading"); }
	int GetDataListTypeForPanel(int PanelIndex) { return NativeCall<int, int>(this, "UUI_SurvivorProfile.GetDataListTypeForPanel", PanelIndex); }
	int GetNumPanels() { return NativeCall<int>(this, "UUI_SurvivorProfile.GetNumPanels"); }
	static int GetProfileSettingsIndex(EEntryCategory ForCategoryType) { return NativeCall<int, EEntryCategory>(nullptr, "UUI_SurvivorProfile.GetProfileSettingsIndex", ForCategoryType); }
	static int GetProfileSettingsIndex(EntryType ForEntryType) { return NativeCall<int, EntryType>(nullptr, "UUI_SurvivorProfile.GetProfileSettingsIndex", ForEntryType); }
	UGenericDataListEntry * GetSelectedEntry() { return NativeCall<UGenericDataListEntry *>(this, "UUI_SurvivorProfile.GetSelectedEntry"); }
	UDataListEntryWidget * GetSelectedEntryWidget() { return NativeCall<UDataListEntryWidget *>(this, "UUI_SurvivorProfile.GetSelectedEntryWidget"); }
	void HandleLoadedSoundCue() { NativeCall<void>(this, "UUI_SurvivorProfile.HandleLoadedSoundCue"); }
	void HideDossier() { NativeCall<void>(this, "UUI_SurvivorProfile.HideDossier"); }
	void HideExplorerNoteMesh() { NativeCall<void>(this, "UUI_SurvivorProfile.HideExplorerNoteMesh"); }
	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_SurvivorProfile.HighlightDefaultWidget", RestrictToPanel); }
	void InitializeCharacterButtonTooltips() { NativeCall<void>(this, "UUI_SurvivorProfile.InitializeCharacterButtonTooltips"); }
	void InitializeExplorerNotePanels() { NativeCall<void>(this, "UUI_SurvivorProfile.InitializeExplorerNotePanels"); }
	void InitializeGamepadhighlight(UDataListPanel * DataPanel) { NativeCall<void, UDataListPanel *>(this, "UUI_SurvivorProfile.InitializeGamepadhighlight", DataPanel); }
	void InitializePanelIcons() { NativeCall<void>(this, "UUI_SurvivorProfile.InitializePanelIcons"); }
	void InitializePanelTitles() { NativeCall<void>(this, "UUI_SurvivorProfile.InitializePanelTitles"); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_SurvivorProfile.InitializeSubMenu", Hub); }
	bool IsDisplayFull() { return NativeCall<bool>(this, "UUI_SurvivorProfile.IsDisplayFull"); }
	bool IsPanelDisplayed(int ID) { return NativeCall<bool, int>(this, "UUI_SurvivorProfile.IsPanelDisplayed", ID); }
	void ItemSlotDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_SurvivorProfile.ItemSlotDoubleClicked", theButton); }
	void OnHide() { NativeCall<void>(this, "UUI_SurvivorProfile.OnHide"); }
	void OnHighlightedWidget(UWidget * HighlightedWidget) { NativeCall<void, UWidget *>(this, "UUI_SurvivorProfile.OnHighlightedWidget", HighlightedWidget); }
	void OnNoteNameFilterChanged(const FText * text) { NativeCall<void, const FText *>(this, "UUI_SurvivorProfile.OnNoteNameFilterChanged", text); }
	void OnShow() { NativeCall<void>(this, "UUI_SurvivorProfile.OnShow"); }
	void OnSubtitlesCheckboxChanged(bool InNewState) { NativeCall<void, bool>(this, "UUI_SurvivorProfile.OnSubtitlesCheckboxChanged", InNewState); }
	bool PanelContainsUnlockedEntry(UDataListPanel * DataPanel) { return NativeCall<bool, UDataListPanel *>(this, "UUI_SurvivorProfile.PanelContainsUnlockedEntry", DataPanel); }
	void PlayNoteDialogueWithSubtitles(USoundCue * SoundCue) { NativeCall<void, USoundCue *>(this, "UUI_SurvivorProfile.PlayNoteDialogueWithSubtitles", SoundCue); }
	void PopDisplay() { NativeCall<void>(this, "UUI_SurvivorProfile.PopDisplay"); }
	void RefreshAllPanels() { NativeCall<void>(this, "UUI_SurvivorProfile.RefreshAllPanels"); }
	void RemoveFromDisplay(int ID) { NativeCall<void, int>(this, "UUI_SurvivorProfile.RemoveFromDisplay", ID); }
	bool RestoreHighlightedState() { return NativeCall<bool>(this, "UUI_SurvivorProfile.RestoreHighlightedState"); }
	void SelectEntryForExplorerNote(int ExplorerNoteIndex, bool bAutoScroll) { NativeCall<void, int, bool>(this, "UUI_SurvivorProfile.SelectEntryForExplorerNote", ExplorerNoteIndex, bAutoScroll); }
	void SetButtonTooltipText(int ButtonID, FString DisplayString) { NativeCall<void, int, FString>(this, "UUI_SurvivorProfile.SetButtonTooltipText", ButtonID, DisplayString); }
	void SetFirstFitDisplay(int ID) { NativeCall<void, int>(this, "UUI_SurvivorProfile.SetFirstFitDisplay", ID); }
	void SetHalfPanels() { NativeCall<void>(this, "UUI_SurvivorProfile.SetHalfPanels"); }
	void SetPanelTextIfValid(UDataListPanel * DataPanel, UTextBlock * PanelTextBlock, int Index) { NativeCall<void, UDataListPanel *, UTextBlock *, int>(this, "UUI_SurvivorProfile.SetPanelTextIfValid", DataPanel, PanelTextBlock, Index); }
	void SetQuadPanels() { NativeCall<void>(this, "UUI_SurvivorProfile.SetQuadPanels"); }
	void SetSinglePanel() { NativeCall<void>(this, "UUI_SurvivorProfile.SetSinglePanel"); }
	void SetThirdPanels() { NativeCall<void>(this, "UUI_SurvivorProfile.SetThirdPanels"); }
	void ShowDossierTitle() { NativeCall<void>(this, "UUI_SurvivorProfile.ShowDossierTitle"); }
	void ShowExplorerNoteCategory(int ExplorerNoteType, bool bIsDossier) { NativeCall<void, int, bool>(this, "UUI_SurvivorProfile.ShowExplorerNoteCategory", ExplorerNoteType, bIsDossier); }
	void ShowExplorerNoteEntry(int ExplorerNoteIndex, bool bFromMainPanel) { NativeCall<void, int, bool>(this, "UUI_SurvivorProfile.ShowExplorerNoteEntry", ExplorerNoteIndex, bFromMainPanel); }
	void ShowExplorerNoteMesh() { NativeCall<void>(this, "UUI_SurvivorProfile.ShowExplorerNoteMesh"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_SurvivorProfile.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UnloadAsyncLoadedDinoTexture() { NativeCall<void>(this, "UUI_SurvivorProfile.UnloadAsyncLoadedDinoTexture"); }
	void UpdatePanelEntries() { NativeCall<void>(this, "UUI_SurvivorProfile.UpdatePanelEntries"); }
};

