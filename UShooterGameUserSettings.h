#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGameUserSettings : UObject
{
	char __padding[0x100L];
	bool& bUseVSyncField() { return *GetNativePointerField<bool*>(this, "UGameUserSettings.bUseVSync"); }
	Scalability::FQualityLevels& ScalabilityQualityField() { return *GetNativePointerField<Scalability::FQualityLevels*>(this, "UGameUserSettings.ScalabilityQuality"); }
	FString& MacroCtrl0Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl0"); }
	FString& MacroCtrl1Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl1"); }
	FString& MacroCtrl2Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl2"); }
	FString& MacroCtrl3Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl3"); }
	FString& MacroCtrl4Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl4"); }
	FString& MacroCtrl5Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl5"); }
	FString& MacroCtrl6Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl6"); }
	FString& MacroCtrl7Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl7"); }
	FString& MacroCtrl8Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl8"); }
	FString& MacroCtrl9Field() { return *GetNativePointerField<FString*>(this, "UGameUserSettings.MacroCtrl9"); }
	unsigned int& ResolutionSizeXField() { return *GetNativePointerField<unsigned int*>(this, "UGameUserSettings.ResolutionSizeX"); }
	unsigned int& ResolutionSizeYField() { return *GetNativePointerField<unsigned int*>(this, "UGameUserSettings.ResolutionSizeY"); }
	unsigned int& LastUserConfirmedResolutionSizeXField() { return *GetNativePointerField<unsigned int*>(this, "UGameUserSettings.LastUserConfirmedResolutionSizeX"); }
	unsigned int& LastUserConfirmedResolutionSizeYField() { return *GetNativePointerField<unsigned int*>(this, "UGameUserSettings.LastUserConfirmedResolutionSizeY"); }
	int& WindowPosXField() { return *GetNativePointerField<int*>(this, "UGameUserSettings.WindowPosX"); }
	int& WindowPosYField() { return *GetNativePointerField<int*>(this, "UGameUserSettings.WindowPosY"); }
	bool& bUseDesktopResolutionForFullscreenField() { return *GetNativePointerField<bool*>(this, "UGameUserSettings.bUseDesktopResolutionForFullscreen"); }
	int& FullscreenModeField() { return *GetNativePointerField<int*>(this, "UGameUserSettings.FullscreenMode"); }
	int& LastConfirmedFullscreenModeField() { return *GetNativePointerField<int*>(this, "UGameUserSettings.LastConfirmedFullscreenMode"); }
	unsigned int& VersionField() { return *GetNativePointerField<unsigned int*>(this, "UGameUserSettings.Version"); }

	// Functions

	static const wchar_t * StaticConfigName() { return NativeCall<const wchar_t *>(nullptr, "UGameUserSettings.StaticConfigName"); }
	void ApplyNonResolutionSettings() { NativeCall<void>(this, "UGameUserSettings.ApplyNonResolutionSettings"); }
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides) { NativeCall<void, bool>(this, "UGameUserSettings.ApplyResolutionSettings", bCheckForCommandLineOverrides); }
	void ApplySettings() { NativeCall<void>(this, "UGameUserSettings.ApplySettings"); }
	void ApplySettings(bool bCheckForCommandLineOverrides) { NativeCall<void, bool>(this, "UGameUserSettings.ApplySettings", bCheckForCommandLineOverrides); }
	FIntPoint * GetScreenResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "UGameUserSettings.GetScreenResolution", result); }
	FIntPoint * GetWindowPosition(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "UGameUserSettings.GetWindowPosition", result); }
	bool IsDirty() { return NativeCall<bool>(this, "UGameUserSettings.IsDirty"); }
	bool IsFullscreenModeDirty() { return NativeCall<bool>(this, "UGameUserSettings.IsFullscreenModeDirty"); }
	bool IsVSyncDirty() { return NativeCall<bool>(this, "UGameUserSettings.IsVSyncDirty"); }
	bool IsVersionValid() { return NativeCall<bool>(this, "UGameUserSettings.IsVersionValid"); }
	static void LoadConfigIni(bool bForceReload) { NativeCall<void, bool>(nullptr, "UGameUserSettings.LoadConfigIni", bForceReload); }
	void LoadSettings(bool bForceReload) { NativeCall<void, bool>(this, "UGameUserSettings.LoadSettings", bForceReload); }
	static void RequestResolutionChange(int InResolutionX, int InResolutionY, EWindowMode::Type InWindowMode, bool bInDoOverrides) { NativeCall<void, int, int, EWindowMode::Type, bool>(nullptr, "UGameUserSettings.RequestResolutionChange", InResolutionX, InResolutionY, InWindowMode, bInDoOverrides); }
	void ResetToCurrentSettings() { NativeCall<void>(this, "UGameUserSettings.ResetToCurrentSettings"); }
	void SaveSettings() { NativeCall<void>(this, "UGameUserSettings.SaveSettings"); }
	void SetFullscreenMode(EWindowMode::Type InFullscreenMode) { NativeCall<void, EWindowMode::Type>(this, "UGameUserSettings.SetFullscreenMode", InFullscreenMode); }
	void SetScreenResolution(FIntPoint Resolution) { NativeCall<void, FIntPoint>(this, "UGameUserSettings.SetScreenResolution", Resolution); }
	void SetToDefaults() { NativeCall<void>(this, "UGameUserSettings.SetToDefaults"); }
	void SetWindowPosition(int WinX, int WinY) { NativeCall<void, int, int>(this, "UGameUserSettings.SetWindowPosition", WinX, WinY); }
	void UpdateVersion() { NativeCall<void>(this, "UGameUserSettings.UpdateVersion"); }
	void ValidateSettings() { NativeCall<void>(this, "UGameUserSettings.ValidateSettings"); }
};

struct UShooterGameUserSettings : UGameUserSettings
{
	char __padding[0x128L];
	float& MasterAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MasterAudioVolume"); }
	float& MusicAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MusicAudioVolume"); }
	float& SFXAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SFXAudioVolume"); }
	float& VoiceAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.VoiceAudioVolume"); }
	float& CharacterAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CharacterAudioVolume"); }
	float& UIScalingField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIScaling"); }
	float& UIQuickbarScalingField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIQuickbarScaling"); }
	float& CameraShakeScaleField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CameraShakeScale"); }
	bool& bFirstPersonRidingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFirstPersonRiding"); }
	bool& bThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bThirdPersonPlayer"); }
	bool& bInventoryHideUnlearnedEngramsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bInventoryHideUnlearnedEngrams"); }
	bool& bShowStatusNotificationMessagesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowStatusNotificationMessages"); }
	float& TrueSkyQualityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TrueSkyQuality"); }
	float& FOVMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FOVMultiplier"); }
	float& GroundClutterDensityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.GroundClutterDensity"); }
	bool& bFilmGrainField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFilmGrain"); }
	bool& bMotionBlurField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bMotionBlur"); }
	bool& bUseDistanceFieldAmbientOcclusionField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseDistanceFieldAmbientOcclusion"); }
	bool& bUseSSAOField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseSSAO"); }
	bool& bShowChatBoxField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowChatBox"); }
	bool& bCameraViewBobField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCameraViewBob"); }
	bool& bInvertLookYField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bInvertLookY"); }
	bool& bFloatingNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFloatingNames"); }
	bool& bChatBubblesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatBubbles"); }
	bool& bHideServerInfoField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideServerInfo"); }
	bool& bJoinNotificationsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bJoinNotifications"); }
	bool& bCraftablesShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCraftablesShowAllItems"); }
	bool& bLocalInventoryItemsShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLocalInventoryItemsShowAllItems"); }
	bool& bLocalInventoryCraftingShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLocalInventoryCraftingShowAllItems"); }
	bool& bRemoteInventoryItemsShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryItemsShowAllItems"); }
	bool& bRemoteInventoryCraftingShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryCraftingShowAllItems"); }
	bool& bRemoteInventoryShowEngramsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryShowEngrams"); }
	bool& bForceDisableSuperDetailModeField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceDisableSuperDetailMode"); }
	float& LookLeftRightSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookLeftRightSensitivity"); }
	float& LookUpDownSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookUpDownSensitivity"); }
	int& GraphicsQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.GraphicsQuality"); }
	int& ActiveLingeringWorldTilesField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ActiveLingeringWorldTiles"); }
	int& ClientNetQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ClientNetQuality"); }
	int& LastServerSearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSearchType"); }
	int& LastServerSortField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSort"); }
	int& LastPVESearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastPVESearchType"); }
	int& LastDLCTypeSearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastDLCTypeSearchType"); }
	bool& LastServerSortAscField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSortAsc"); }
	bool& LastAutoFavoriteField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastAutoFavorite"); }
	bool& LastServerSearchHideFullField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSearchHideFull"); }
	bool& LastServerSearchProtectedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSearchProtected"); }
	bool& LastServerSearchIncludeServersWithActiveModsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSearchIncludeServersWithActiveMods"); }
	bool& HideItemTextOverlayField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HideItemTextOverlay"); }
	bool& bQuickToggleItemNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bQuickToggleItemNames"); }
	bool& bDistanceFieldShadowingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDistanceFieldShadowing"); }
	float& LODScalarField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LODScalar"); }
	bool& bToggleToTalkField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bToggleToTalk"); }
	bool& HighQualityMaterialsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HighQualityMaterials"); }
	bool& HighQualitySurfacesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HighQualitySurfaces"); }
	bool& bTemperatureFField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bTemperatureF"); }
	bool& bDisableTorporEffectField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableTorporEffect"); }
	bool& bChatShowSteamNameField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatShowSteamName"); }
	bool& bChatShowTribeNameField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatShowTribeName"); }
	bool& bReverseTribeLogOrderField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bReverseTribeLogOrder"); }
	int& EmoteKeyBind1Field() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind1"); }
	int& EmoteKeyBind2Field() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind2"); }
	bool& bNoBloodEffectsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bNoBloodEffects"); }
	bool& bLowQualityVFXField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLowQualityVFX"); }
	bool& bSpectatorManualFloatingNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bSpectatorManualFloatingNames"); }
	bool& bSuppressAdminIconField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bSuppressAdminIcon"); }
	bool& bUseSimpleDistanceMovementField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseSimpleDistanceMovement"); }
	bool& bDisableMeleeCameraSwingAnimsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableMeleeCameraSwingAnims"); }
	bool& bHighQualityAnisotropicFilteringField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHighQualityAnisotropicFiltering"); }
	bool& bUseLowQualityLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseLowQualityLevelStreaming"); }
	bool& bPreventInventoryOpeningSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventInventoryOpeningSounds"); }
	bool& bPreventItemCraftingSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventItemCraftingSounds"); }
	bool& bPreventHitMarkersField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventHitMarkers"); }
	bool& bPreventCrosshairField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventCrosshair"); }
	bool& bPreventColorizedItemNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventColorizedItemNames"); }
	bool& bHighQualityLODsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHighQualityLODs"); }
	bool& bExtraLevelStreamingDistanceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bExtraLevelStreamingDistance"); }
	bool& bEnableColorGradingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableColorGrading"); }
	float& DOFSettingInterpTimeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.DOFSettingInterpTime"); }
	bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableBloom"); }
	bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableLightShafts"); }
	TArray<FDepthOfFieldSetting>& DOFSettingsField() { return *GetNativePointerField<TArray<FDepthOfFieldSetting>*>(this, "UShooterGameUserSettings.DOFSettings"); }
	TArray<FString>& LastJoinedSessionPerCategoryField() { return *GetNativePointerField<TArray<FString>*>(this, "UShooterGameUserSettings.LastJoinedSessionPerCategory"); }
	bool& bDisableMenuTransitionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableMenuTransitions"); }
	bool& bEnableInventoryItemTooltipsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableInventoryItemTooltips"); }
	bool& bRemoteInventoryShowCraftablesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryShowCraftables"); }
	bool& bNoTooltipDelayField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bNoTooltipDelay"); }
	int& LocalItemSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalItemSortType"); }
	int& LocalCraftingSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalCraftingSortType"); }
	int& RemoteItemSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteItemSortType"); }
	int& RemoteCraftingSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteCraftingSortType"); }
	bool& bPreventDinoNameTagsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventDinoNameTags"); }
	unsigned int& VersionMetaTagField() { return *GetNativePointerField<unsigned int*>(this, "UShooterGameUserSettings.VersionMetaTag"); }
	bool& ShowExplorerNoteSubtitlesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.ShowExplorerNoteSubtitles"); }
	bool& DisableMenuMusicField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableMenuMusic"); }
	bool& DisableDefaultCharacterItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableDefaultCharacterItems"); }
	bool& bRequestDefaultCharacterItemsOnceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRequestDefaultCharacterItemsOnce"); }
	bool& bHasSeenGen2IntroField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasSeenGen2Intro"); }
	bool& bHideFloatingPlayerNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideFloatingPlayerNames"); }
	bool& bHideGamepadItemSelectionModifierField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideGamepadItemSelectionModifier"); }
	bool& bToggleExtendedHUDInfoField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bToggleExtendedHUDInfo"); }
	bool& PlayActionWheelClickSoundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.PlayActionWheelClickSound"); }
	int& CompanionReactionVerbosityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionReactionVerbosity"); }
	bool& EnableEnvironmentalReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableEnvironmentalReactions"); }
	bool& EnableRespawnReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableRespawnReactions"); }
	bool& EnableDeathReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableDeathReactions"); }
	bool& EnableSayHelloReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableSayHelloReactions"); }
	bool& EnableEmoteReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableEmoteReactions"); }
	bool& EnableMovementSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableMovementSounds"); }
	bool& DisableSubtitlesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableSubtitles"); }
	int& CompanionSubtitleVerbosityLevelField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionSubtitleVerbosityLevel"); }
	bool& CompanionIsHiddenStateField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.CompanionIsHiddenState"); }
	int& MaxAscensionLevelField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MaxAscensionLevel"); }
	bool& bHostSessionHasBeenOpenedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHostSessionHasBeenOpened"); }
	bool& bForceTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceTPVCameraOffset"); }
	bool& bDisableTPVCameraInterpolationField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableTPVCameraInterpolation"); }
	bool& bFPVClimbingGearField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFPVClimbingGear"); }
	bool& bFPVGlidingGearField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFPVGlidingGear"); }
	float& Gamma1Field() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma1"); }
	float& Gamma2Field() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma2"); }
	float& AmbientSoundVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.AmbientSoundVolume"); }
	bool& bAllowAnimationStaggeringField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bAllowAnimationStaggering"); }
	bool& bUseOldThirdPersonCameraTraceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseOldThirdPersonCameraTrace"); }
	bool& bUseOldThirdPersonCameraOffsetField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseOldThirdPersonCameraOffset"); }
	bool& bLowQualityAnimationsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLowQualityAnimations"); }
	bool& bShowedGenesisDLCBackgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowedGenesisDLCBackground"); }
	bool& bShowedGenesis2DLCBackgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowedGenesis2DLCBackground"); }
	bool& bViewedAnimatedSeriesTrailerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bViewedAnimatedSeriesTrailer"); }
	bool& bViewedARK2TrailerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bViewedARK2Trailer"); }
	bool& bShowRTSKeyBindsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowRTSKeyBinds"); }
	float& TemporaryMusicStingerReductionMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TemporaryMusicStingerReductionMultiplier"); }
	bool& bHasCompletedGen2Field() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasCompletedGen2"); }

	// Functions

	void ApplyGamma(float useGammaCorrection) { NativeCall<void, float>(this, "UShooterGameUserSettings.ApplyGamma", useGammaCorrection); }
	void ApplySFXVolumes() { NativeCall<void>(this, "UShooterGameUserSettings.ApplySFXVolumes"); }
	void ApplySettings(bool bCheckForCommandLineOverrides) { NativeCall<void, bool>(this, "UShooterGameUserSettings.ApplySettings", bCheckForCommandLineOverrides); }
	void ApplyVolumeSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyVolumeSettings"); }
	float GetAmbientSoundVolume() { return NativeCall<float>(this, "UShooterGameUserSettings.GetAmbientSoundVolume"); }
	EWindowMode::Type GetCurrentFullscreenMode() { return NativeCall<EWindowMode::Type>(this, "UShooterGameUserSettings.GetCurrentFullscreenMode"); }
	float GetMasterAudioVolume() { return NativeCall<float>(this, "UShooterGameUserSettings.GetMasterAudioVolume"); }
	int GetQualityLevelPostprocessing() { return NativeCall<int>(this, "UShooterGameUserSettings.GetQualityLevelPostprocessing"); }
	void LoadSettings(bool bForceReload) { NativeCall<void, bool>(this, "UShooterGameUserSettings.LoadSettings", bForceReload); }
	void SaveSettings() { NativeCall<void>(this, "UShooterGameUserSettings.SaveSettings"); }
	static void SetMasterAudioVolume(FHUDElement * ElementInfo, float NewAngle) { NativeCall<void, FHUDElement *, float>(nullptr, "UShooterGameUserSettings.SetMasterAudioVolume", ElementInfo, NewAngle); }
	void SetToDefaults() { NativeCall<void>(this, "UShooterGameUserSettings.SetToDefaults"); }
	bool UseFirstPersonRiding() { return NativeCall<bool>(this, "UShooterGameUserSettings.UseFirstPersonRiding"); }
	void ValidateSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ValidateSettings"); }
};

