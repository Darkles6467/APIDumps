#pragma once

#include "BaseDeclarations.h"
#include "AHUD.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FColor.h"
#include "UPrimalItem.h"
#include "FHUDRichTextOverlayData.h"
#include "FUniqueNetId.h"
#include "FChatMessage.h"
#include "FMissionAlertEntry.h"
#include "FCustomWheelEntry.h"

struct AShooterHUD : AHUD
{
	char __padding[0x5f8L];
	TSubclassOf<UCameraShake>& HurtCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterHUD.HurtCameraShake"); }
	UUI_SavingOverlay * SavingOverlayField() { return GetNativePointerField<UUI_SavingOverlay *>(this, "AShooterHUD.SavingOverlay"); }
	float& MaxDamageCameraShakeScaleField() { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeScale"); }
	float& MaxDamageCameraShakeSpeedInverseField() { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeSpeedInverse"); }
	bool& bShowAllPlayersWhenSpectatingField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowAllPlayersWhenSpectating"); }
	bool& bShowAllPlayersWhenSpectatingLocalField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowAllPlayersWhenSpectatingLocal"); }
	long double& LastPlayerInfoRequestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.LastPlayerInfoRequestTime"); }
	float& PlayerInfoRequestTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterHUD.PlayerInfoRequestTimeInterval"); }
	TArray<FAliveNameAndLocation>& AllPlayersDataField() { return *GetNativePointerField<TArray<FAliveNameAndLocation>*>(this, "AShooterHUD.AllPlayersData"); }
	UHUDCustomStatusWidget * MyPlayerCustomStatusHUDField() { return GetNativePointerField<UHUDCustomStatusWidget *>(this, "AShooterHUD.MyPlayerCustomStatusHUD"); }
	UHUDActiveMissionWidget * MyPlayerActiveMissionHUDField() { return GetNativePointerField<UHUDActiveMissionWidget *>(this, "AShooterHUD.MyPlayerActiveMissionHUD"); }
	UHUDPointsOfInterestContainer * MyPlayerPointsOfInterestHUDField() { return GetNativePointerField<UHUDPointsOfInterestContainer *>(this, "AShooterHUD.MyPlayerPointsOfInterestHUD"); }
	UHUDPingsContainer * MyPlayerPingHUDField() { return GetNativePointerField<UHUDPingsContainer *>(this, "AShooterHUD.MyPlayerPingHUD"); }
	UUI_LeaderboardWidget * MyPlayerLeaderboardHUDField() { return GetNativePointerField<UUI_LeaderboardWidget *>(this, "AShooterHUD.MyPlayerLeaderboardHUD"); }
	UUI_Subtitles * MySubtitlesHUDField() { return GetNativePointerField<UUI_Subtitles *>(this, "AShooterHUD.MySubtitlesHUD"); }
	UUI_HudOverlay * MyOverlayHUDField() { return GetNativePointerField<UUI_HudOverlay *>(this, "AShooterHUD.MyOverlayHUD"); }
	UUI_HudOverlay * MyTopOverlayHUDField() { return GetNativePointerField<UUI_HudOverlay *>(this, "AShooterHUD.MyTopOverlayHUD"); }
	UUI_ChatBox * ChatBoxUIField() { return GetNativePointerField<UUI_ChatBox *>(this, "AShooterHUD.ChatBoxUI"); }
	TSubclassOf<UUI_Hub>& HubUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_Hub>*>(this, "AShooterHUD.HubUITemplate"); }
	TSubclassOf<UUI_SurvivorProfile>& SurvivorProfileUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SurvivorProfile>*>(this, "AShooterHUD.SurvivorProfileUITemplate"); }
	TSubclassOf<UUI_ChangeTransponderFreqencyEntry>& ChangeFrequencyUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ChangeTransponderFreqencyEntry>*>(this, "AShooterHUD.ChangeFrequencyUITemplate"); }
	TSubclassOf<UHUDCustomStatusWidget>& PlayerHUDCustomStatusTemplateField() { return *GetNativePointerField<TSubclassOf<UHUDCustomStatusWidget>*>(this, "AShooterHUD.PlayerHUDCustomStatusTemplate"); }
	TSubclassOf<UHUDActiveMissionWidget>& PlayerHUDActiveMissionTemplateField() { return *GetNativePointerField<TSubclassOf<UHUDActiveMissionWidget>*>(this, "AShooterHUD.PlayerHUDActiveMissionTemplate"); }
	TSubclassOf<UHUDPointsOfInterestContainer>& PlayerHUDPointsOfInterestTemplateField() { return *GetNativePointerField<TSubclassOf<UHUDPointsOfInterestContainer>*>(this, "AShooterHUD.PlayerHUDPointsOfInterestTemplate"); }
	TSubclassOf<UUI_LeaderboardWidget>& LeaderboardsUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_LeaderboardWidget>*>(this, "AShooterHUD.LeaderboardsUITemplate"); }
	TSubclassOf<UUI_Subtitles>& SubtitlesUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_Subtitles>*>(this, "AShooterHUD.SubtitlesUITemplate"); }
	TSubclassOf<UUI_SavingOverlay>& SavingOverlayUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SavingOverlay>*>(this, "AShooterHUD.SavingOverlayUITemplate"); }
	TSubclassOf<UUI_HudOverlay>& OverlayHUDUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_HudOverlay>*>(this, "AShooterHUD.OverlayHUDUITemplate"); }
	TSubclassOf<UUI_HudOverlay>& TopOverlayHUDUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_HudOverlay>*>(this, "AShooterHUD.TopOverlayHUDUITemplate"); }
	TSubclassOf<UUI_Inventory>& InventoryUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_Inventory>*>(this, "AShooterHUD.InventoryUITemplate"); }
	TSubclassOf<UUI_MissionList>& MissionListUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_MissionList>*>(this, "AShooterHUD.MissionListUITemplate"); }
	TSubclassOf<UUI_AdminMangment>& AdminMangmentUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_AdminMangment>*>(this, "AShooterHUD.AdminMangmentUITemplate"); }
	TSubclassOf<UUI_TribeManager>& TribeManagerUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_TribeManager>*>(this, "AShooterHUD.TribeManagerUITemplate"); }
	TSubclassOf<UUI_TribeWarEntry>& TribeWarUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_TribeWarEntry>*>(this, "AShooterHUD.TribeWarUITemplate"); }
	TSubclassOf<UUI_PinEntry>& PinEntryUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_PinEntry>*>(this, "AShooterHUD.PinEntryUITemplate"); }
	TSubclassOf<UUI_TextEntry>& TextEntryUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_TextEntry>*>(this, "AShooterHUD.TextEntryUITemplate"); }
	TSubclassOf<UUI_MapMarkersEntry>& MapMarkersUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_MapMarkersEntry>*>(this, "AShooterHUD.MapMarkersUITemplate"); }
	TSubclassOf<UUI_Spawn>& SpawnUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_Spawn>*>(this, "AShooterHUD.SpawnUITemplate"); }
	TSubclassOf<UUI_AllPlayersList>& AllPlayersListTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_AllPlayersList>*>(this, "AShooterHUD.AllPlayersListTemplate"); }
	TSubclassOf<UUI_ChatBox>& ChatBoxUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ChatBox>*>(this, "AShooterHUD.ChatBoxUITemplate"); }
	bool& bShowChatBoxByDefaultField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowChatBoxByDefault"); }
	UFont * BigFontField() { return GetNativePointerField<UFont *>(this, "AShooterHUD.BigFont"); }
	UFont * NormalFontField() { return GetNativePointerField<UFont *>(this, "AShooterHUD.NormalFont"); }
	UFont * SmallFontField() { return GetNativePointerField<UFont *>(this, "AShooterHUD.SmallFont"); }
	TSubclassOf<UUI_MultiUse>& MultiUseUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_MultiUse>*>(this, "AShooterHUD.MultiUseUITemplate"); }
	float& TimeToHideChatField() { return *GetNativePointerField<float*>(this, "AShooterHUD.TimeToHideChat"); }
	float& ChatPopupIntervalField() { return *GetNativePointerField<float*>(this, "AShooterHUD.ChatPopupInterval"); }
	FColor& HUDLightField() { return *GetNativePointerField<FColor*>(this, "AShooterHUD.HUDLight"); }
	FColor& HUDDarkField() { return *GetNativePointerField<FColor*>(this, "AShooterHUD.HUDDark"); }
	long double& NoAmmoNotifyTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.NoAmmoNotifyTime"); }
	long double& CantUseHereTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.CantUseHereTime"); }
	long double& NoAmmoFadeOutTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.NoAmmoFadeOutTime"); }
	long double& LastHitTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.LastHitTime"); }
	float& HitNotifyDisplayTimeField() { return *GetNativePointerField<float*>(this, "AShooterHUD.HitNotifyDisplayTime"); }
	float& CurrentCrosshairAlphaField() { return *GetNativePointerField<float*>(this, "AShooterHUD.CurrentCrosshairAlpha"); }
	FieldArray<FCanvasIcon, 8> HitNotifyIconField() { return {this, "AShooterHUD.HitNotifyIcon"}; }
	FieldArray<FCanvasIcon, 5> CrosshairField() { return {this, "AShooterHUD.Crosshair"}; }
	FCanvasIcon& HitNotifyCrosshairField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterHUD.HitNotifyCrosshair"); }
	float& ScaleUIField() { return *GetNativePointerField<float*>(this, "AShooterHUD.ScaleUI"); }
	float& PulseValueField() { return *GetNativePointerField<float*>(this, "AShooterHUD.PulseValue"); }
	FFontRenderInfo& ShadowedFontField() { return *GetNativePointerField<FFontRenderInfo*>(this, "AShooterHUD.ShadowedFont"); }
	FieldArray<FVector2D[8], 28> OffsetsField() { return {this, "AShooterHUD.Offsets"}; }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "AShooterHUD.Offset"); }
	FieldArray<FHitData, 8> HitNotifyDataField() { return {this, "AShooterHUD.HitNotifyData"}; }
	TArray<FCanvasTextItem>& InfoItemsField() { return *GetNativePointerField<TArray<FCanvasTextItem>*>(this, "AShooterHUD.InfoItems"); }
	TArray<FHUDNotification>& HUDNotificationsField() { return *GetNativePointerField<TArray<FHUDNotification>*>(this, "AShooterHUD.HUDNotifications"); }
	TArray<FHUDNotification>& ItemHUDNotificationsField() { return *GetNativePointerField<TArray<FHUDNotification>*>(this, "AShooterHUD.ItemHUDNotifications"); }
	TArray<FHUDNotification>& SingletonHUDNotificationsField() { return *GetNativePointerField<TArray<FHUDNotification>*>(this, "AShooterHUD.SingletonHUDNotifications"); }
	bool& bHudHiddenField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bHudHidden"); }
	bool& bShowChatPopupField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowChatPopup"); }
	long double& CantBuildNotifyTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.CantBuildNotifyTime"); }
	FString& CantBuildStringField() { return *GetNativePointerField<FString*>(this, "AShooterHUD.CantBuildString"); }
	bool& bCommunicationPrivilegeFetchedField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bCommunicationPrivilegeFetched"); }
	bool& bAutoShowChatField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bAutoShowChat"); }
	bool& bTargetHarvestableField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestable"); }
	bool& bTargetHarvestableAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestableAllowed"); }
	bool& bTargetHarvestableIsUsableField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestableIsUsable"); }
	bool& bInitializedUIScenesField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bInitializedUIScenes"); }
	bool& bForceHUDHiddenField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bForceHUDHidden"); }
	bool& bExtraHideHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bExtraHideHUD"); }
	bool& bExtraConsoleHideHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bExtraConsoleHideHUD"); }
	UUI_Inventory * CurrentOpenedInventoryField() { return GetNativePointerField<UUI_Inventory *>(this, "AShooterHUD.CurrentOpenedInventory"); }
	UUI_Hub * CurrentlyOpenedHubUIField() { return GetNativePointerField<UUI_Hub *>(this, "AShooterHUD.CurrentlyOpenedHubUI"); }
	bool& bMultiUseIsDrawingUIHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bMultiUseIsDrawingUIHUD"); }
	long double& LastTorpidityIncreaseTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.LastTorpidityIncreaseTime"); }
	TArray<FHintReplacementKeysForKeyboardControls>& GenericGamepadReplacementsForKeyboardControlsField() { return *GetNativePointerField<TArray<FHintReplacementKeysForKeyboardControls>*>(this, "AShooterHUD.GenericGamepadReplacementsForKeyboardControls"); }
	FVector2D& CurrentCrosshairScreenLocationField() { return *GetNativePointerField<FVector2D*>(this, "AShooterHUD.CurrentCrosshairScreenLocation"); }
	float& TorpidityOpacityField() { return *GetNativePointerField<float*>(this, "AShooterHUD.TorpidityOpacity"); }
	bool& bChatVisibleField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bChatVisible"); }
	long double& LastHUDTargetChangedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterHUD.LastHUDTargetChangedTime"); }
	UUI_Tutorial * TutorialUIField() { return GetNativePointerField<UUI_Tutorial *>(this, "AShooterHUD.TutorialUI"); }
	int& CurrentTutorialIndexField() { return *GetNativePointerField<int*>(this, "AShooterHUD.CurrentTutorialIndex"); }
	bool& bPreventShowChatBoxField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bPreventShowChatBox"); }

	// Functions

	bool IsUsingRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingRadialSelector"); }
	bool IsUsingMultiUseRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingMultiUseRadialSelector"); }
	void AddChatLine(const FString * ChatString, bool bWantFocus) { NativeCall<void, const FString *, bool>(this, "AShooterHUD.AddChatLine", ChatString, bWantFocus); }
	void AddHUDNotification(const FString * NotificationString, FColor NotificationColor, UMaterialInterface * NotificationMaterial, UTexture2D * NotificationTexture, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase * SoundToPlay, int MessageTypeID, int ItemMsgType, TSubclassOf<UPrimalItem> ItemClass, FString ItemName, int ItemQuantity, float ItemQuantityFloat) { NativeCall<void, const FString *, FColor, UMaterialInterface *, UTexture2D *, float, float, bool, USoundBase *, int, int, TSubclassOf<UPrimalItem>, FString, int, float>(this, "AShooterHUD.AddHUDNotification", NotificationString, NotificationColor, NotificationMaterial, NotificationTexture, DisplayTime, DisplayScale, bIsSingleton, SoundToPlay, MessageTypeID, ItemMsgType, ItemClass, ItemName, ItemQuantity, ItemQuantityFloat); }
	void AddMatchInfoString(const FCanvasTextItem InInfoItem) { NativeCall<void, const FCanvasTextItem>(this, "AShooterHUD.AddMatchInfoString", InInfoItem); }
	void BPAddHUDNotification(const FString * NotificationString, FColor NotificationColor, UMaterialInterface * NotificationMaterial, UTexture2D * NotificationTexture, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase * SoundToPlay, int MessageTypeID, int ItemMsgType, TSubclassOf<UPrimalItem> ItemClass, FString ItemName, int ItemQuantity, float ItemQuantityFloat) { NativeCall<void, const FString *, FColor, UMaterialInterface *, UTexture2D *, float, float, bool, USoundBase *, int, int, TSubclassOf<UPrimalItem>, FString, int, float>(this, "AShooterHUD.BPAddHUDNotification", NotificationString, NotificationColor, NotificationMaterial, NotificationTexture, DisplayTime, DisplayScale, bIsSingleton, SoundToPlay, MessageTypeID, ItemMsgType, ItemClass, ItemName, ItemQuantity, ItemQuantityFloat); }
	void BPAddHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "AShooterHUD.BPAddHUDRichTextOverlay", InOverlay); }
	void BPAddHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData * InOverlay, const int InsertAtIndex) { NativeCall<void, const FHUDRichTextOverlayData *, const int>(this, "AShooterHUD.BPAddHUDRichTextOverlayAtIndex", InOverlay, InsertAtIndex); }
	TArray<FHUDRichTextOverlayData> * BPGetHUDRichTextOverlays(TArray<FHUDRichTextOverlayData> * result) { return NativeCall<TArray<FHUDRichTextOverlayData> *, TArray<FHUDRichTextOverlayData> *>(this, "AShooterHUD.BPGetHUDRichTextOverlays", result); }
	void BPRemoveAllHUDRichTextOverlays() { NativeCall<void>(this, "AShooterHUD.BPRemoveAllHUDRichTextOverlays"); }
	void BPRemoveHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "AShooterHUD.BPRemoveHUDRichTextOverlay", InOverlay); }
	void BPRemoveHUDRichTextOverlayAtIndex(int Index) { NativeCall<void, int>(this, "AShooterHUD.BPRemoveHUDRichTextOverlayAtIndex", Index); }
	void BPRemoveHUDRichTextOverlaysByInstigator(AActor * ByInstigator) { NativeCall<void, AActor *>(this, "AShooterHUD.BPRemoveHUDRichTextOverlaysByInstigator", ByInstigator); }
	void BPSetHUDRichTextOverlayDefaultTextColor(const FHUDRichTextOverlayData * InOverlay, FLinearColor InColor, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, FLinearColor, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayDefaultTextColor", InOverlay, InColor, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayDisplayText(const FHUDRichTextOverlayData * InOverlay, FString InString, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, FString, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayDisplayText", InOverlay, InString, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayHorizontalWidgetAlignment(const FHUDRichTextOverlayData * InOverlay, TEnumAsByte<enum EHorizontalAlignment> InAlignH, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, TEnumAsByte<enum EHorizontalAlignment>, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayHorizontalWidgetAlignment", InOverlay, InAlignH, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayInstigator(const FHUDRichTextOverlayData * InOverlay, AActor * InInstigator, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, AActor *, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayInstigator", InOverlay, InInstigator, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayPosition(const FHUDRichTextOverlayData * InOverlay, FVector2D InPosition, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, FVector2D, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayPosition", InOverlay, InPosition, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayScale(const FHUDRichTextOverlayData * InOverlay, float InScale, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, float, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayScale", InOverlay, InScale, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayUseAutoWrap(const FHUDRichTextOverlayData * InOverlay, bool InAutoWrap, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, bool, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayUseAutoWrap", InOverlay, InAutoWrap, OutOverlay, bUpdateAfterSetting); }
	void BPSetHUDRichTextOverlayVerticalScreenAnchor(const FHUDRichTextOverlayData * InOverlay, TEnumAsByte<enum EVerticalAlignment> InAlignV, FHUDRichTextOverlayData * OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData *, TEnumAsByte<enum EVerticalAlignment>, FHUDRichTextOverlayData *, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayVerticalScreenAnchor", InOverlay, InAlignV, OutOverlay, bUpdateAfterSetting); }
	void BPSimulateHit(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator) { NativeCall<void, float, const FDamageEvent *, APawn *>(this, "AShooterHUD.BPSimulateHit", DamageTaken, DamageEvent, PawnInstigator); }
	void BPUpdateAllHUDRichTextOverlays(const TArray<FHUDRichTextOverlayData> * InOverlayData) { NativeCall<void, const TArray<FHUDRichTextOverlayData> *>(this, "AShooterHUD.BPUpdateAllHUDRichTextOverlays", InOverlayData); }
	void BPUpdateHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "AShooterHUD.BPUpdateHUDRichTextOverlay", InOverlay); }
	void BPUpdateHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData * InOverlay, const int Index) { NativeCall<void, const FHUDRichTextOverlayData *, const int>(this, "AShooterHUD.BPUpdateHUDRichTextOverlayAtIndex", InOverlay, Index); }
	void BPUpdateHUDRichTextOverlaysByInstigator(AActor * ByInstigator) { NativeCall<void, AActor *>(this, "AShooterHUD.BPUpdateHUDRichTextOverlaysByInstigator", ByInstigator); }
	void BeginPlay() { NativeCall<void>(this, "AShooterHUD.BeginPlay"); }
	void CancelCustomWheelRadialSelector() { NativeCall<void>(this, "AShooterHUD.CancelCustomWheelRadialSelector"); }
	void ClearChatBoxTimer() { NativeCall<void>(this, "AShooterHUD.ClearChatBoxTimer"); }
	void ClearHUDNotifications(int MessageTypeID) { NativeCall<void, int>(this, "AShooterHUD.ClearHUDNotifications", MessageTypeID); }
	bool CloseActiveHub() { return NativeCall<bool>(this, "AShooterHUD.CloseActiveHub"); }
	void Destroyed() { NativeCall<void>(this, "AShooterHUD.Destroyed"); }
	void DoShowSpawnUI() { NativeCall<void>(this, "AShooterHUD.DoShowSpawnUI"); }
	void DrawCrosshair() { NativeCall<void>(this, "AShooterHUD.DrawCrosshair"); }
	void DrawCrosshairOnScreen(const FVector2D AtScreenLocation, const float WithCrossSpread, const FColor WithDrawColor, const float WithAlphaPercent) { NativeCall<void, const FVector2D, const float, const FColor, const float>(this, "AShooterHUD.DrawCrosshairOnScreen", AtScreenLocation, WithCrossSpread, WithDrawColor, WithAlphaPercent); }
	void DrawDebugInfoString(const FString * Text, float PosX, float PosY, bool bAlignLeft, bool bAlignTop, const FColor * TextColor) { NativeCall<void, const FString *, float, float, bool, bool, const FColor *>(this, "AShooterHUD.DrawDebugInfoString", Text, PosX, PosY, bAlignLeft, bAlignTop, TextColor); }
	void DrawHUD() { NativeCall<void>(this, "AShooterHUD.DrawHUD"); }
	float DrawHUDNotifications(UCanvas * TheCanvas, float YOffset) { return NativeCall<float, UCanvas *, float>(this, "AShooterHUD.DrawHUDNotifications", TheCanvas, YOffset); }
	void DrawHitIndicator() { NativeCall<void>(this, "AShooterHUD.DrawHitIndicator"); }
	void DrawItemHUDNOtifications(UCanvas * TheCanvas, float YOffset) { NativeCall<void, UCanvas *, float>(this, "AShooterHUD.DrawItemHUDNOtifications", TheCanvas, YOffset); }
	void DrawPlayerInfo(FString PlayerName, FString TribeName, FVector Location, FColor TextColor) { NativeCall<void, FString, FString, FVector, FColor>(this, "AShooterHUD.DrawPlayerInfo", PlayerName, TribeName, Location, TextColor); }
	void DrawUIHUD(UCanvas * UICanvas) { NativeCall<void, UCanvas *>(this, "AShooterHUD.DrawUIHUD", UICanvas); }
	void EndCustomWheelRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndCustomWheelRadialSelector"); }
	void EndEmoteRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndEmoteRadialSelector"); }
	void EndInventoryRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndInventoryRadialSelector"); }
	void EndMultiUseRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndMultiUseRadialSelector"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AShooterHUD.EndPlay", EndPlayReason); }
	void EndPlayerActionRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndPlayerActionRadialSelector"); }
	void EndWhistleRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndWhistleRadialSelector"); }
	void ForceHUDHidden(bool bForcedHidden) { NativeCall<void, bool>(this, "AShooterHUD.ForceHUDHidden", bForcedHidden); }
	FString * FormatRichTextWithColor(FString * result, const FString * InText, FLinearColor InColor) { return NativeCall<FString *, FString *, const FString *, FLinearColor>(this, "AShooterHUD.FormatRichTextWithColor", result, InText, InColor); }
	FString * FormatRichTextWithKeyBindings(FString * result, FString InText, bool bIgnoreMarkup) { return NativeCall<FString *, FString *, FString, bool>(this, "AShooterHUD.FormatRichTextWithKeyBindings", result, InText, bIgnoreMarkup); }
	FString * FormatTextureAsRichText(FString * result, UTexture2D * InTexture) { return NativeCall<FString *, FString *, UTexture2D *>(this, "AShooterHUD.FormatTextureAsRichText", result, InTexture); }
	UUI_ChatBox * GetChatBoxWidget() { return NativeCall<UUI_ChatBox *>(this, "AShooterHUD.GetChatBoxWidget"); }
	FVector2D * GetCurrentCrosshairScreenLocation(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "AShooterHUD.GetCurrentCrosshairScreenLocation", result); }
	int GetInventoryRadialSelection() { return NativeCall<int>(this, "AShooterHUD.GetInventoryRadialSelection"); }
	bool GetMultiUseRadialSelection(FMultiUseEntry * SelectedEntry, bool bIncludeTimedEntries) { return NativeCall<bool, FMultiUseEntry *, bool>(this, "AShooterHUD.GetMultiUseRadialSelection", SelectedEntry, bIncludeTimedEntries); }
	UUI_Hub * GetOrCreateActiveHub() { return NativeCall<UUI_Hub *>(this, "AShooterHUD.GetOrCreateActiveHub"); }
	int GetPlayerActionRadialSelection() { return NativeCall<int>(this, "AShooterHUD.GetPlayerActionRadialSelection"); }
	bool GetSelectedCustomWheelEntry(FCustomWheelEntry * OutSelectedEntry) { return NativeCall<bool, FCustomWheelEntry *>(this, "AShooterHUD.GetSelectedCustomWheelEntry", OutSelectedEntry); }
	AShooterPlayerController * GetPlayerOwner() { return NativeCall<AShooterPlayerController *>(this, "AShooterHUD.GetPlayerOwner"); }
	UUI_Subtitles * GetSubtitlesWidget() { return NativeCall<UUI_Subtitles *>(this, "AShooterHUD.GetSubtitlesWidget"); }
	void HideChatBox() { NativeCall<void>(this, "AShooterHUD.HideChatBox"); }
	void HideMissionAlert() { NativeCall<void>(this, "AShooterHUD.HideMissionAlert"); }
	void HideTopMissionAlert() { NativeCall<void>(this, "AShooterHUD.HideTopMissionAlert"); }
	void HideTutorial(int TutorialIndex) { NativeCall<void, int>(this, "AShooterHUD.HideTutorial", TutorialIndex); }
	void InitUIScenes(bool bForceReinitUI) { NativeCall<void, bool>(this, "AShooterHUD.InitUIScenes", bForceReinitUI); }
	bool IsChatBoxVisible() { return NativeCall<bool>(this, "AShooterHUD.IsChatBoxVisible"); }
	bool IsMissionAlertVisible(bool bGetTopAlertVisibility) { return NativeCall<bool, bool>(this, "AShooterHUD.IsMissionAlertVisible", bGetTopAlertVisibility); }
	bool IsUsingCustomWheelRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingCustomWheelRadialSelector"); }
	bool IsUsingEmoteRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingEmoteRadialSelector"); }
	bool IsUsingInventoryRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingInventoryRadialSelector"); }
	bool IsUsingPlayerActionRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingPlayerActionRadialSelector"); }
	bool IsUsingWhistleRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingWhistleRadialSelector"); }
	void MoveChatBoxToBottomOfScreen() { NativeCall<void>(this, "AShooterHUD.MoveChatBoxToBottomOfScreen"); }
	void NotifyHit(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator) { NativeCall<void, float, const FDamageEvent *, APawn *>(this, "AShooterHUD.NotifyHit", DamageTaken, DamageEvent, PawnInstigator); }
	void NotifyHubRemoveFromViewport(UUI_Hub * hub) { NativeCall<void, UUI_Hub *>(this, "AShooterHUD.NotifyHubRemoveFromViewport", hub); }
	void NotifyOutOfAmmo() { NativeCall<void>(this, "AShooterHUD.NotifyOutOfAmmo"); }
	void OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,0> TalkingPlayerId, bool bIsTalking, bool IsYelling) { NativeCall<void, TSharedRef<FUniqueNetId,0>, bool, bool>(this, "AShooterHUD.OnPlayerTalkingStateChanged", TalkingPlayerId, bIsTalking, IsYelling); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterHUD.PostInitializeComponents"); }
	void ReceivedChatMessage(FChatMessage Chat) { NativeCall<void, FChatMessage>(this, "AShooterHUD.ReceivedChatMessage", Chat); }
	void ReceivedServerChatDirectMessage(FString MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, FString, FLinearColor, bool>(this, "AShooterHUD.ReceivedServerChatDirectMessage", MessageText, MessageColor, bIsBold); }
	void ReceivedServerChatMessage(FString MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, FString, FLinearColor, bool>(this, "AShooterHUD.ReceivedServerChatMessage", MessageText, MessageColor, bIsBold); }
	FString * ReplaceKeyboardControlsTextWithXboxControlIconPaths(FString * result, FString ActionKey) { return NativeCall<FString *, FString *, FString>(this, "AShooterHUD.ReplaceKeyboardControlsTextWithXboxControlIconPaths", result, ActionKey); }
	void ReturnChatBoxToIntialLocation() { NativeCall<void>(this, "AShooterHUD.ReturnChatBoxToIntialLocation"); }
	void ScrollChat(bool bUp) { NativeCall<void, bool>(this, "AShooterHUD.ScrollChat", bUp); }
	void ScrollChatDown() { NativeCall<void>(this, "AShooterHUD.ScrollChatDown"); }
	void ScrollChatUp() { NativeCall<void>(this, "AShooterHUD.ScrollChatUp"); }
	void SetAllowShowChatBox(bool bAllow) { NativeCall<void, bool>(this, "AShooterHUD.SetAllowShowChatBox", bAllow); }
	void SetRadialSelectorDirection(FVector2D Dir) { NativeCall<void, FVector2D>(this, "AShooterHUD.SetRadialSelectorDirection", Dir); }
	UUI_AdminMangment * ShowAdminManger(bool isDedicatedUI) { return NativeCall<UUI_AdminMangment *, bool>(this, "AShooterHUD.ShowAdminManger", isDedicatedUI); }
	void ShowAllianceChat() { NativeCall<void>(this, "AShooterHUD.ShowAllianceChat"); }
	void ShowCharacterCreationUI() { NativeCall<void>(this, "AShooterHUD.ShowCharacterCreationUI"); }
	void ShowChatBox(bool bShow, bool bIsFromNewChat) { NativeCall<void, bool, bool>(this, "AShooterHUD.ShowChatBox", bShow, bIsFromNewChat); }
	UUI_EngramsMenu * ShowEngramsMenu(bool bInputDelay) { return NativeCall<UUI_EngramsMenu *, bool>(this, "AShooterHUD.ShowEngramsMenu", bInputDelay); }
	void ShowGlobalChat() { NativeCall<void>(this, "AShooterHUD.ShowGlobalChat"); }
	float ShowInfoItems(UCanvas * TheCanvas, float YOffset, float ScaleUI, float TextScale) { return NativeCall<float, UCanvas *, float, float, float>(this, "AShooterHUD.ShowInfoItems", TheCanvas, YOffset, ScaleUI, TextScale); }
	UUI_Inventory * ShowInventory(UPrimalInventoryComponent * inventoryComp) { return NativeCall<UUI_Inventory *, UPrimalInventoryComponent *>(this, "AShooterHUD.ShowInventory", inventoryComp); }
	void ShowLocalChat() { NativeCall<void>(this, "AShooterHUD.ShowLocalChat"); }
	void ShowMissionAlert(TEnumAsByte<enum EMissionAlertType::Type> AlertType, const FString * AlertTitle, const TArray<FMissionAlertEntry> * AlertEntries, float DisplayTime, USoundBase * SoundToPlay, bool FlyoutFromTop) { NativeCall<void, TEnumAsByte<enum EMissionAlertType::Type>, const FString *, const TArray<FMissionAlertEntry> *, float, USoundBase *, bool>(this, "AShooterHUD.ShowMissionAlert", AlertType, AlertTitle, AlertEntries, DisplayTime, SoundToPlay, FlyoutFromTop); }
	UUI_MissionList * ShowMissionList(UObject * FromDispatcher) { return NativeCall<UUI_MissionList *, UObject *>(this, "AShooterHUD.ShowMissionList", FromDispatcher); }
	void ShowMultiUseUIFor(AActor * anActor, bool bFromGamepad) { NativeCall<void, AActor *, bool>(this, "AShooterHUD.ShowMultiUseUIFor", anActor, bFromGamepad); }
	void ShowPinEntryUI(AActor * aTargetable, bool bIsSetting, int CustomIndex) { NativeCall<void, AActor *, bool, int>(this, "AShooterHUD.ShowPinEntryUI", aTargetable, bIsSetting, CustomIndex); }
	void ShowSpawnUI(APrimalStructure * FastTravelIgnoreBed) { NativeCall<void, APrimalStructure *>(this, "AShooterHUD.ShowSpawnUI", FastTravelIgnoreBed); }
	void ShowSpawnUIForTransferredPlayer() { NativeCall<void>(this, "AShooterHUD.ShowSpawnUIForTransferredPlayer"); }
	UUI_SurvivorProfile * ShowSurvivorProfileUI() { return NativeCall<UUI_SurvivorProfile *>(this, "AShooterHUD.ShowSurvivorProfileUI"); }
	void ShowTribeChat() { NativeCall<void>(this, "AShooterHUD.ShowTribeChat"); }
	void ShowTribeManager(bool bShowInviteData) { NativeCall<void, bool>(this, "AShooterHUD.ShowTribeManager", bShowInviteData); }
	UUI_TribeWarEntry * ShowTribeWarMenu() { return NativeCall<UUI_TribeWarEntry *>(this, "AShooterHUD.ShowTribeWarMenu"); }
	void ShowTutorial(const FString * TutorialTitle, const FString * TutorialText, UTexture2D * TutorialImage, int TutorialIndex, float TutorialDuration) { NativeCall<void, const FString *, const FString *, UTexture2D *, int, float>(this, "AShooterHUD.ShowTutorial", TutorialTitle, TutorialText, TutorialImage, TutorialIndex, TutorialDuration); }
	bool StartCustomWheelRadialSelector(const FCustomWheelSettings * WheelSettings, const TArray<FCustomWheelEntry> * Entries, bool bFromGamepad, UObject * ForcedEntryTarget) { return NativeCall<bool, const FCustomWheelSettings *, const TArray<FCustomWheelEntry> *, bool, UObject *>(this, "AShooterHUD.StartCustomWheelRadialSelector", WheelSettings, Entries, bFromGamepad, ForcedEntryTarget); }
	void StartEmoteRadialSelector(FName FilterOption) { NativeCall<void, FName>(this, "AShooterHUD.StartEmoteRadialSelector", FilterOption); }
	void StartInventoryRadialSelector() { NativeCall<void>(this, "AShooterHUD.StartInventoryRadialSelector"); }
	void StartPlayerActionRadialSelector() { NativeCall<void>(this, "AShooterHUD.StartPlayerActionRadialSelector"); }
	void StartWhistleRadialSelector() { NativeCall<void>(this, "AShooterHUD.StartWhistleRadialSelector"); }
	void ToggleHudHidden() { NativeCall<void>(this, "AShooterHUD.ToggleHudHidden"); }
	void ToogleAutoShowChat() { NativeCall<void>(this, "AShooterHUD.ToogleAutoShowChat"); }
	void TutorialEndTimer() { NativeCall<void>(this, "AShooterHUD.TutorialEndTimer"); }
	void GetAdditionalExplorerNoteDynamicMaterialParams(const FExplorerNoteEntry * ExplorerNote, TArray<FNameScalarPair> * ScalarMaterialParams, TArray<FNameColorPair> * ColorMaterialParams) { NativeCall<void, const FExplorerNoteEntry *, TArray<FNameScalarPair> *, TArray<FNameColorPair> *>(this, "AShooterHUD.GetAdditionalExplorerNoteDynamicMaterialParams", ExplorerNote, ScalarMaterialParams, ColorMaterialParams); }
};

