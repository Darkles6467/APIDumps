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
#include "FKey.h"

struct UUI_OptionsMenu : UPrimalSubMenuUI
{
	char __padding[0x4b0L];
	FName& SaveButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.SaveButtonName"); }
	FName& ApplyButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ApplyButtonName"); }
	FName& ResetButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ResetButtonName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.CancelButtonName"); }
	FName& ResolutionWidthTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ResolutionWidthTextBoxName"); }
	FName& ResolutionHeightTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ResolutionHeightTextBoxName"); }
	FName& ResolutionsComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ResolutionsComboBoxName"); }
	FName& WindowModeComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.WindowModeComboBoxName"); }
	FName& GraphicsQualityComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.GraphicsQualityComboBoxName"); }
	FName& ResolutionScaleSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ResolutionScaleSliderName"); }
	FName& ViewDistanceComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ViewDistanceComboBoxName"); }
	FName& AntiAliasingComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.AntiAliasingComboBoxName"); }
	FName& PostProcessingComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.PostProcessingComboBoxName"); }
	FName& ShadowsComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ShadowsComboBoxName"); }
	FName& TexturesComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.TexturesComboBoxName"); }
	FName& EffectsComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.EffectsComboBoxName"); }
	FName& AudioVolumeSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.AudioVolumeSliderName"); }
	TArray<FKeyBindingItem>& KeyBindingsField() { return *GetNativePointerField<TArray<FKeyBindingItem>*>(this, "UUI_OptionsMenu.KeyBindings"); }
	FName& InvertMouseYCheckBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.InvertMouseYCheckBoxName"); }
	FName& CameraShakeScaleSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.CameraShakeScaleSliderName"); }
	FName& FirstPersonRidingCheckboxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.FirstPersonRidingCheckboxName"); }
	FName& ToggleToTalkCheckBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ToggleToTalkCheckBoxName"); }
	FName& ToggleExtendedHUDInfoCheckboxNameField() { return *GetNativePointerField<FName*>(this, "UUI_OptionsMenu.ToggleExtendedHUDInfoCheckboxName"); }
	UCustomButtonWidget * OptionsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_OptionsMenu.OptionsMenuButton"); }
	UCustomButtonWidget * AdvancedSettingsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_OptionsMenu.AdvancedSettingsMenuButton"); }
	UCustomButtonWidget * KeyBindingsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_OptionsMenu.KeyBindingsMenuButton"); }
	UCustomButtonWidget * GamepadMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_OptionsMenu.GamepadMenuButton"); }
	UCustomButtonWidget * RTSMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_OptionsMenu.RTSMenuButton"); }
	UHorizontalBox * ButtonContainerField() { return GetNativePointerField<UHorizontalBox *>(this, "UUI_OptionsMenu.ButtonContainer"); }
	UComboBoxString * ResolutionsComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.ResolutionsComboBox"); }
	UComboBoxString * WindowModeComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.WindowModeComboBox"); }
	UComboBoxString * GraphicsQualityComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.GraphicsQualityComboBox"); }
	UComboBoxString * WorldTileBufferComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.WorldTileBufferComboBox"); }
	UComboBoxString * ClientNetSpeedComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.ClientNetSpeedComboBox"); }
	bool& bIsLoadingSettingsField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bIsLoadingSettings"); }
	bool& bIsSettingGraphicsPresetsField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bIsSettingGraphicsPresets"); }
	bool& bOpenedAsSubMenuField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bOpenedAsSubMenu"); }
	bool& bIsLeftShiftPressedField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bIsLeftShiftPressed"); }
	bool& bIsLeftCtrlPressedField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bIsLeftCtrlPressed"); }
	bool& bIsLeftAltPressedField() { return *GetNativePointerField<bool*>(this, "UUI_OptionsMenu.bIsLeftAltPressed"); }
	int& PreviousGraphicsQualitySelectionIdxField() { return *GetNativePointerField<int*>(this, "UUI_OptionsMenu.PreviousGraphicsQualitySelectionIdx"); }
	USlider * ResolutionScaleSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.ResolutionScaleSlider"); }
	USlider * GroundClutterDistanceSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.GroundClutterDistanceSlider"); }
	UComboBoxString * ViewDistanceComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.ViewDistanceComboBox"); }
	UComboBoxString * AntiAliasingComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.AntiAliasingComboBox"); }
	UComboBoxString * PostProcessingComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.PostProcessingComboBox"); }
	UComboBoxString * ShadowsComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.ShadowsComboBox"); }
	UComboBoxString * TexturesComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.TexturesComboBox"); }
	UComboBoxString * EffectsComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.EffectsComboBox"); }
	UComboBoxString * TerrainShadowComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_OptionsMenu.TerrainShadowComboBox"); }
	USlider * AudioVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.AudioVolumeSlider"); }
	USlider * CameraShakeScaleSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.CameraShakeScaleSlider"); }
	USlider * TrueSkyQualitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.TrueSkyQualitySlider"); }
	USlider * GroundClutterDensitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.GroundClutterDensitySlider"); }
	USlider * FOVSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.FOVSlider"); }
	USlider * SFXVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.SFXVolumeSlider"); }
	USlider * VoiceVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.VoiceVolumeSlider"); }
	USlider * MusicVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.MusicVolumeSlider"); }
	USlider * LookLeftRightSensitivitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.LookLeftRightSensitivitySlider"); }
	USlider * LookUpDownSensitivitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.LookUpDownSensitivitySlider"); }
	USlider * LODScalarSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.LODScalarSlider"); }
	USlider * AmbientSoundVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.AmbientSoundVolumeSlider"); }
	USlider * CharacterVolumeSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.CharacterVolumeSlider"); }
	USlider * UIScalingSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.UIScalingSlider"); }
	USlider * UIQuickbarScalingSliderField() { return GetNativePointerField<USlider *>(this, "UUI_OptionsMenu.UIQuickbarScalingSlider"); }
	UCheckBox * InvertMouseYCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.InvertMouseYCheckBox"); }
	UCheckBox * FirstPersonRidingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.FirstPersonRidingCheckbox"); }
	UCheckBox * StatusNotificationMessagesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.StatusNotificationMessagesCheckbox"); }
	UCheckBox * FilmGrainCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.FilmGrainCheckbox"); }
	UCheckBox * UseDFAOCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.UseDFAOCheckbox"); }
	UCheckBox * MotionBlurCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.MotionBlurCheckbox"); }
	UCheckBox * DistanceFieldShadowingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DistanceFieldShadowingCheckbox"); }
	UCheckBox * DynamicTessCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DynamicTessCheckbox"); }
	UCheckBox * SSAOCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.SSAOCheckbox"); }
	UCheckBox * ShowChatCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ShowChatCheckbox"); }
	UCheckBox * CameraBobCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.CameraBobCheckbox"); }
	UCheckBox * FloatingNamesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.FloatingNamesCheckbox"); }
	UCheckBox * JoinNotificationsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.JoinNotificationsCheckbox"); }
	UCheckBox * ChatBubblesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ChatBubblesCheckbox"); }
	UCheckBox * HideServerInfoCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HideServerInfoCheckbox"); }
	UCheckBox * HighQualityMaterialsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HighQualityMaterialsCheckbox"); }
	UCheckBox * HighQualitySurfacesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HighQualitySurfacesCheckbox"); }
	UCheckBox * TemperatureFCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.TemperatureFCheckbox"); }
	UCheckBox * DisableTorporEffectCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableTorporEffectCheckbox"); }
	UCheckBox * ChatShowSteamNameCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ChatShowSteamNameCheckbox"); }
	UCheckBox * ChatShowTribeNameCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ChatShowTribeNameCheckbox"); }
	UCheckBox * EnableBloodEffectsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.EnableBloodEffectsCheckbox"); }
	UCheckBox * ToggleToTalkCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ToggleToTalkCheckBox"); }
	UCheckBox * HighQualityVFXCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HighQualityVFXCheckbox"); }
	UCheckBox * SimpleDistanceMovementCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.SimpleDistanceMovementCheckbox"); }
	UCheckBox * MeleeCameraSwingAnimsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.MeleeCameraSwingAnimsCheckbox"); }
	UCheckBox * HighQualityAnisotropicFilteringCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HighQualityAnisotropicFilteringCheckbox"); }
	UCheckBox * InventoryAccessSoundCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.InventoryAccessSoundCheckbox"); }
	UCheckBox * InventoryCraftingSoundCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.InventoryCraftingSoundCheckbox"); }
	UCheckBox * HighQualityLODsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HighQualityLODsCheckbox"); }
	UCheckBox * ExtraLevelStreamingDistanceCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ExtraLevelStreamingDistanceCheckbox"); }
	UCheckBox * AllowHitMarkersCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.AllowHitMarkersCheckbox"); }
	UCheckBox * AllowCrosshairCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.AllowCrosshairCheckbox"); }
	UCheckBox * ColorizedItemNamesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ColorizedItemNamesCheckbox"); }
	UCheckBox * EnableColorGradingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.EnableColorGradingCheckbox"); }
	UCheckBox * DisableBloomCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableBloomCheckbox"); }
	UCheckBox * DisableLightShaftsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableLightShaftsCheckbox"); }
	UCheckBox * UseLowQualityFarLevelStreamingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.UseLowQualityFarLevelStreamingCheckbox"); }
	UCheckBox * DisableMenuTransitionsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableMenuTransitionsCheckbox"); }
	UCheckBox * NoTooltipDelayCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.NoTooltipDelayCheckbox"); }
	UCheckBox * DisableMenuMusicCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableMenuMusicCheckbox"); }
	UCheckBox * DefaultCharacterItemsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DefaultCharacterItemsCheckbox"); }
	UCheckBox * HideFloatingPlayerNamesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HideFloatingPlayerNamesCheckbox"); }
	UCheckBox * QuickToggleItemNamesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.QuickToggleItemNamesCheckbox"); }
	UCheckBox * HideGamepadItemSelectionModifierCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.HideGamepadItemSelectionModifierCheckbox"); }
	UCheckBox * PlayActionWheelClickSoundCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.PlayActionWheelClickSoundCheckbox"); }
	UCheckBox * ForceTPVCameraOffsetCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ForceTPVCameraOffsetCheckbox"); }
	UCheckBox * DisableTPVCameraInterpolationCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableTPVCameraInterpolationCheckbox"); }
	UCheckBox * AllowAnimationStaggeringCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.AllowAnimationStaggeringCheckbox"); }
	UCheckBox * LowQualityAnimationsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.LowQualityAnimationsCheckbox"); }
	UCheckBox * AllowEnhancedDistanceDetailModeCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.AllowEnhancedDistanceDetailModeCheckbox"); }
	UCheckBox * ToggleExtendedHUDInfoCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.ToggleExtendedHUDInfoCheckbox"); }
	UCheckBox * DisableSubtitlesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_OptionsMenu.DisableSubtitlesCheckbox"); }
	UTextBlock * MovementLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.MovementLabel"); }
	UTextBlock * StadiaMovementLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.StadiaMovementLabel"); }
	UTextBlock * QuickslotsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.QuickslotsLabel"); }
	UTextBlock * StadiaQuickslotsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.StadiaQuickslotsLabel"); }
	UTextBlock * MapLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.MapLabel"); }
	UTextBlock * ConsoleMapLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.ConsoleMapLabel"); }
	UTextBlock * GameOptionsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.GameOptionsLabel"); }
	UTextBlock * ConsoleGameOptionsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.ConsoleGameOptionsLabel"); }
	UTextBlock * XboxMovementLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.XboxMovementLabel"); }
	UTextBlock * PS4QuickslotsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.PS4QuickslotsLabel"); }
	UTextBlock * StadiaDisclaimerTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_OptionsMenu.StadiaDisclaimerText"); }
	TArray<UKeyInputWidget *>& KeyBindingInputWidgetsField() { return *GetNativePointerField<TArray<UKeyInputWidget *>*>(this, "UUI_OptionsMenu.KeyBindingInputWidgets"); }

	// Functions

	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_OptionsMenu.HighlightDefaultWidget", RestrictToPanel); }
	void AddToViewport() { NativeCall<void>(this, "UUI_OptionsMenu.AddToViewport"); }
	void ChangeAxisKeyMapping(FString AxisName, FKey NewKey, float CurrentScale) { NativeCall<void, FString, FKey, float>(this, "UUI_OptionsMenu.ChangeAxisKeyMapping", AxisName, NewKey, CurrentScale); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_OptionsMenu.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_OptionsMenu.ConfirmationDialogAccepted"); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UUI_OptionsMenu.EnsureNumeric", text, maxChars); }
	void EscapeClosed() { NativeCall<void>(this, "UUI_OptionsMenu.EscapeClosed"); }
	bool HighlightPrevHighlightedWidget() { return NativeCall<bool>(this, "UUI_OptionsMenu.HighlightPrevHighlightedWidget"); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_OptionsMenu.InitializeSubMenu", Hub); }
	void InitializeUI() { NativeCall<void>(this, "UUI_OptionsMenu.InitializeUI"); }
	void LoadKeyBindings() { NativeCall<void>(this, "UUI_OptionsMenu.LoadKeyBindings"); }
	void LoadSettings() { NativeCall<void>(this, "UUI_OptionsMenu.LoadSettings"); }
	void OnGraphicsPresetValueChanged() { NativeCall<void>(this, "UUI_OptionsMenu.OnGraphicsPresetValueChanged"); }
	void OnGraphicsQualityComboBoxChanged(const FString * SelectedItem) { NativeCall<void, const FString *>(this, "UUI_OptionsMenu.OnGraphicsQualityComboBoxChanged", SelectedItem); }
	void OnHeightChanged(const FText * text) { NativeCall<void, const FText *>(this, "UUI_OptionsMenu.OnHeightChanged", text); }
	bool OnKeyBinding(UWidget * Widget, FKey Key) { return NativeCall<bool, UWidget *, FKey>(this, "UUI_OptionsMenu.OnKeyBinding", Widget, Key); }
	void OnResolutionsComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_OptionsMenu.OnResolutionsComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnViewDistanceComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_OptionsMenu.OnViewDistanceComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnWidthChanged(const FText * text) { NativeCall<void, const FText *>(this, "UUI_OptionsMenu.OnWidthChanged", text); }
	void RefreshKeyBindings() { NativeCall<void>(this, "UUI_OptionsMenu.RefreshKeyBindings"); }
	void ReturnToParentMenu() { NativeCall<void>(this, "UUI_OptionsMenu.ReturnToParentMenu"); }
	void SaveSettings() { NativeCall<void>(this, "UUI_OptionsMenu.SaveSettings"); }
	void ShowSubMenu(EOptionsSubMenu::Type SubMenu) { NativeCall<void, EOptionsSubMenu::Type>(this, "UUI_OptionsMenu.ShowSubMenu", SubMenu); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_OptionsMenu.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateButtonStates() { NativeCall<void>(this, "UUI_OptionsMenu.UpdateButtonStates"); }
	void OptionsGraphTick(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_OptionsMenu.OptionsGraphTick", MyGeometry, InDeltaTime); }
};

