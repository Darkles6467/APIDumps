#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "PGSettings.h"

struct UUI_ProceduralSettings : UPrimalUI
{
	char __padding[0xb00L];
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.CancelButtonName"); }
	FName& HostButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.HostButtonName"); }
	FName& ResetButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.ResetButtonName"); }
	FName& RandomizeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.RandomizeButtonName"); }
	FName& LoadFavoriteButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.LoadFavoriteButtonName"); }
	FName& SaveFavoriteButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SaveFavoriteButtonName"); }
	FName& PresetsComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.PresetsComboBoxName"); }
	FName& FavoriteComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.FavoriteComboBoxName"); }
	FName& ArkNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.ArkNameTextBoxName"); }
	FName& MapSeedTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MapSeedTextBoxName"); }
	FName& LandscapeRadiusTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.LandscapeRadiusTextBoxName"); }
	FName& WaterFrequencyTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.WaterFrequencyTextBoxName"); }
	FName& MountainFrequencyTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainFrequencyTextBoxName"); }
	FName& MountainSlopeTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainSlopeTextBoxName"); }
	FName& MountainHeightTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainHeightTextBoxName"); }
	FName& TurbulencePowerTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.TurbulencePowerTextBoxName"); }
	FName& ShoreSlopeTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.ShoreSlopeTextBoxName"); }
	FName& WaterLevelTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.WaterLevelTextBoxName"); }
	FName& GrassDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.GrassDensityTextBoxName"); }
	FName& JungleGrassDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.JungleGrassDensityTextBoxName"); }
	FName& OceanFloorLevelTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.OceanFloorLevelTextBoxName"); }
	FName& SnowBiomeSizeTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SnowBiomeSizeTextBoxName"); }
	FName& RedwoodBiomeSizeTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.RedwoodBiomeSizeTextBoxName"); }
	FName& MountainBiomeStartTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainBiomeStartTextBoxName"); }
	FName& MountainTreeDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainTreeDensityTextBoxName"); }
	FName& JungleBiomeStartTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.JungleBiomeStartTextBoxName"); }
	FName& IslandBorderCurveTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.IslandBorderCurveTextBoxName"); }
	FName& MaxSawnHeightTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MaxSawnHeightTextBoxName"); }
	FName& MountainGrassDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.MountainGrassDensityTextBoxName"); }
	FName& SnowGrassDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SnowGrassDensityTextBoxName"); }
	FName& SnowMountainGrassDensityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SnowMountainGrassDensityTextBoxName"); }
	FName& SnowBiomeLocationXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SnowBiomeLocationXTextBoxName"); }
	FName& SnowBiomeLocationYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.SnowBiomeLocationYTextBoxName"); }
	FName& RedwoodBiomeLocationXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.RedwoodBiomeLocationXTextBoxName"); }
	FName& RedwoodBiomeLocationYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.RedwoodBiomeLocationYTextBoxName"); }
	FName& TerrainScaleXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.TerrainScaleXTextBoxName"); }
	FName& TerrainScaleYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.TerrainScaleYTextBoxName"); }
	FName& TerrainScaleZTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.TerrainScaleZTextBoxName"); }
	FName& North1StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North1StartXTextBoxName"); }
	FName& North1StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North1StartYTextBoxName"); }
	FName& North1EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North1EndXTextBoxName"); }
	FName& North1EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North1EndYTextBoxName"); }
	FName& North2StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North2StartXTextBoxName"); }
	FName& North2StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North2StartYTextBoxName"); }
	FName& North2EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North2EndXTextBoxName"); }
	FName& North2EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North2EndYTextBoxName"); }
	FName& North3StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North3StartXTextBoxName"); }
	FName& North3StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North3StartYTextBoxName"); }
	FName& North3EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North3EndXTextBoxName"); }
	FName& North3EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.North3EndYTextBoxName"); }
	FName& South1StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South1StartXTextBoxName"); }
	FName& South1StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South1StartYTextBoxName"); }
	FName& South1EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South1EndXTextBoxName"); }
	FName& South1EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South1EndYTextBoxName"); }
	FName& South2StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South2StartXTextBoxName"); }
	FName& South2StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South2StartYTextBoxName"); }
	FName& South2EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South2EndXTextBoxName"); }
	FName& South2EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South2EndYTextBoxName"); }
	FName& South3StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South3StartXTextBoxName"); }
	FName& South3StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South3StartYTextBoxName"); }
	FName& South3EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South3EndXTextBoxName"); }
	FName& South3EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.South3EndYTextBoxName"); }
	FName& East1StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East1StartXTextBoxName"); }
	FName& East1StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East1StartYTextBoxName"); }
	FName& East1EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East1EndXTextBoxName"); }
	FName& East1EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East1EndYTextBoxName"); }
	FName& East2StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East2StartXTextBoxName"); }
	FName& East2StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East2StartYTextBoxName"); }
	FName& East2EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East2EndXTextBoxName"); }
	FName& East2EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East2EndYTextBoxName"); }
	FName& East3StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East3StartXTextBoxName"); }
	FName& East3StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East3StartYTextBoxName"); }
	FName& East3EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East3EndXTextBoxName"); }
	FName& East3EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.East3EndYTextBoxName"); }
	FName& West1StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West1StartXTextBoxName"); }
	FName& West1StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West1StartYTextBoxName"); }
	FName& West1EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West1EndXTextBoxName"); }
	FName& West1EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West1EndYTextBoxName"); }
	FName& West2StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West2StartXTextBoxName"); }
	FName& West2StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West2StartYTextBoxName"); }
	FName& West2EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West2EndXTextBoxName"); }
	FName& West2EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West2EndYTextBoxName"); }
	FName& West3StartXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West3StartXTextBoxName"); }
	FName& West3StartYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West3StartYTextBoxName"); }
	FName& West3EndXTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West3EndXTextBoxName"); }
	FName& West3EndYTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ProceduralSettings.West3EndYTextBoxName"); }
	TArray<FString>& PresetPropertiesField() { return *GetNativePointerField<TArray<FString>*>(this, "UUI_ProceduralSettings.PresetProperties"); }
	TArray<FString>& FavoriteSettingsField() { return *GetNativePointerField<TArray<FString>*>(this, "UUI_ProceduralSettings.FavoriteSettings"); }
	PGSettings& DefaultSettingsField() { return *GetNativePointerField<PGSettings*>(this, "UUI_ProceduralSettings.DefaultSettings"); }
	PGSettings& MinimumSettingsField() { return *GetNativePointerField<PGSettings*>(this, "UUI_ProceduralSettings.MinimumSettings"); }
	PGSettings& MaximumSettingsField() { return *GetNativePointerField<PGSettings*>(this, "UUI_ProceduralSettings.MaximumSettings"); }
	FString& PGTerrainPropertiesStringField() { return *GetNativePointerField<FString*>(this, "UUI_ProceduralSettings.PGTerrainPropertiesString"); }
	FString& LoadMapCommmandStringField() { return *GetNativePointerField<FString*>(this, "UUI_ProceduralSettings.LoadMapCommmandString"); }
	UUI_HostSession * HostSessionUIField() { return GetNativePointerField<UUI_HostSession *>(this, "UUI_ProceduralSettings.HostSessionUI"); }
	UComboBoxString * PresetsComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ProceduralSettings.PresetsComboBox"); }
	UComboBoxString * FavoritesComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ProceduralSettings.FavoritesComboBox"); }

	// Functions

	void Add2DVectorToPropertyString(FString Variable, UEditableTextBox * XTextBox, UEditableTextBox * YTextBox, FVector2D DefaultValue) { NativeCall<void, FString, UEditableTextBox *, UEditableTextBox *, FVector2D>(this, "UUI_ProceduralSettings.Add2DVectorToPropertyString", Variable, XTextBox, YTextBox, DefaultValue); }
	void Add3DVectorToPropertyString(FString Variable, UEditableTextBox * XTextBox, UEditableTextBox * YTextBox, UEditableTextBox * ZTextBox) { NativeCall<void, FString, UEditableTextBox *, UEditableTextBox *, UEditableTextBox *>(this, "UUI_ProceduralSettings.Add3DVectorToPropertyString", Variable, XTextBox, YTextBox, ZTextBox); }
	void AddFloatToPropertyString(FString Variable, UEditableTextBox * TextBox, float DefaultValue) { NativeCall<void, FString, UEditableTextBox *, float>(this, "UUI_ProceduralSettings.AddFloatToPropertyString", Variable, TextBox, DefaultValue); }
	void AddIntToPropertyString(FString Variable, UEditableTextBox * TextBox, int DefaultValue) { NativeCall<void, FString, UEditableTextBox *, int>(this, "UUI_ProceduralSettings.AddIntToPropertyString", Variable, TextBox, DefaultValue); }
	void AddStringToPropertyString(FString Variable, FString string) { NativeCall<void, FString, FString>(this, "UUI_ProceduralSettings.AddStringToPropertyString", Variable, string); }
	void AddToViewport() { NativeCall<void>(this, "UUI_ProceduralSettings.AddToViewport"); }
	void ApplyFavoriteFromIndex(int Index) { NativeCall<void, int>(this, "UUI_ProceduralSettings.ApplyFavoriteFromIndex", Index); }
	void ApplyLastUsed() { NativeCall<void>(this, "UUI_ProceduralSettings.ApplyLastUsed"); }
	void ApplyMaxFromString(FString string) { NativeCall<void, FString>(this, "UUI_ProceduralSettings.ApplyMaxFromString", string); }
	void ApplyMinFromString(FString string) { NativeCall<void, FString>(this, "UUI_ProceduralSettings.ApplyMinFromString", string); }
	void ApplyProperties(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> > Properties) { NativeCall<void, TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> >>(this, "UUI_ProceduralSettings.ApplyProperties", Properties); }
	void ApplyRandomizedValues(PGSettings Values) { NativeCall<void, PGSettings>(this, "UUI_ProceduralSettings.ApplyRandomizedValues", Values); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ProceduralSettings.ClickedButton", clickedWidget); }
	FString * Convert2DVectorToString(FString * result, FVector2D Vec) { return NativeCall<FString *, FString *, FVector2D>(this, "UUI_ProceduralSettings.Convert2DVectorToString", result, Vec); }
	FString * Convert3DVectorToString(FString * result, FVector Vec) { return NativeCall<FString *, FString *, FVector>(this, "UUI_ProceduralSettings.Convert3DVectorToString", result, Vec); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UUI_ProceduralSettings.EnsureNumeric", text, maxChars); }
	void EscapeClosed() { NativeCall<void>(this, "UUI_ProceduralSettings.EscapeClosed"); }
	void FinishLoadMap() { NativeCall<void>(this, "UUI_ProceduralSettings.FinishLoadMap"); }
	FString * GenerateFavoriteString(FString * result) { return NativeCall<FString *, FString *>(this, "UUI_ProceduralSettings.GenerateFavoriteString", result); }
	PGSettings * GenerateRandomValues(PGSettings * result) { return NativeCall<PGSettings *, PGSettings *>(this, "UUI_ProceduralSettings.GenerateRandomValues", result); }
	void GenerateTerrainPropertiesString() { NativeCall<void>(this, "UUI_ProceduralSettings.GenerateTerrainPropertiesString"); }
	FString * GetFavoriteStringFromIndex(FString * result, int Index) { return NativeCall<FString *, FString *, int>(this, "UUI_ProceduralSettings.GetFavoriteStringFromIndex", result, Index); }
	float GetNumericValue(UEditableTextBox * TextBox) { return NativeCall<float, UEditableTextBox *>(this, "UUI_ProceduralSettings.GetNumericValue", TextBox); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_ProceduralSettings.HighlightWidgetOnStart", RestrictToPanel); }
	void InitializeButtons() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializeButtons"); }
	void InitializeComboBoxes() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializeComboBoxes"); }
	void InitializeDefaultsettings() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializeDefaultsettings"); }
	void InitializeFavorites() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializeFavorites"); }
	void InitializePresets() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializePresets"); }
	void InitializeTextBoxes() { NativeCall<void>(this, "UUI_ProceduralSettings.InitializeTextBoxes"); }
	void LoadFavorite() { NativeCall<void>(this, "UUI_ProceduralSettings.LoadFavorite"); }
	void LoadMinMaxForPreset(FString Preset) { NativeCall<void, FString>(this, "UUI_ProceduralSettings.LoadMinMaxForPreset", Preset); }
	void LoadMinMaxSettings() { NativeCall<void>(this, "UUI_ProceduralSettings.LoadMinMaxSettings"); }
	void LoadProceduralMap() { NativeCall<void>(this, "UUI_ProceduralSettings.LoadProceduralMap"); }
	void MakeTextBoxesDynamic() { NativeCall<void>(this, "UUI_ProceduralSettings.MakeTextBoxesDynamic"); }
	void OnPresetSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_ProceduralSettings.OnPresetSelectionChanged", SelectedItem, SelectionType); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_ProceduralSettings.OnTextCommitted", Text, CommitMethod); }
	void Process2DVectorString(FString VectorString, UEditableTextBox * XTextBox, UEditableTextBox * YTextBox) { NativeCall<void, FString, UEditableTextBox *, UEditableTextBox *>(this, "UUI_ProceduralSettings.Process2DVectorString", VectorString, XTextBox, YTextBox); }
	void Process3DVectorString(FString VectorString, UEditableTextBox * XTextBox, UEditableTextBox * YTextBox, UEditableTextBox * ZTextBox) { NativeCall<void, FString, UEditableTextBox *, UEditableTextBox *, UEditableTextBox *>(this, "UUI_ProceduralSettings.Process3DVectorString", VectorString, XTextBox, YTextBox, ZTextBox); }
	void Randomize() { NativeCall<void>(this, "UUI_ProceduralSettings.Randomize"); }
	void ResetToDefaults() { NativeCall<void>(this, "UUI_ProceduralSettings.ResetToDefaults"); }
	void SaveFavorite() { NativeCall<void>(this, "UUI_ProceduralSettings.SaveFavorite"); }
	void SetComboBoxToCustom(UComboBoxString * ComboBox) { NativeCall<void, UComboBoxString *>(this, "UUI_ProceduralSettings.SetComboBoxToCustom", ComboBox); }
	void SetFavoriteString() { NativeCall<void>(this, "UUI_ProceduralSettings.SetFavoriteString"); }
	void SetHostSessionUI(UUI_HostSession * SessionUI) { NativeCall<void, UUI_HostSession *>(this, "UUI_ProceduralSettings.SetHostSessionUI", SessionUI); }
	void StoreFavoriteAtIndex(int Index) { NativeCall<void, int>(this, "UUI_ProceduralSettings.StoreFavoriteAtIndex", Index); }
	void StoreLastUsedSettings() { NativeCall<void>(this, "UUI_ProceduralSettings.StoreLastUsedSettings"); }
	void StoreSettings() { NativeCall<void>(this, "UUI_ProceduralSettings.StoreSettings"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ProceduralSettings.Tick_Implementation", MyGeometry, InDeltaTime); }
};

