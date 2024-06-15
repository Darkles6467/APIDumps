#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SWidget.h"
#include "FKey.h"
#include "FUniqueNetId.h"
#include "FDateTime.h"
#include "SWindow.h"
#include "SOverlay.h"

struct UScriptViewportClient : UObject
{
	char __padding[0x8L];

	// Functions

};

struct UGameViewportClient : UScriptViewportClient
{
	char __padding[0x110L];
	UConsole * ViewportConsoleField() { return GetNativePointerField<UConsole *>(this, "UGameViewportClient.ViewportConsole"); }
	TArray<FDebugDisplayProperty>& DebugPropertiesField() { return *GetNativePointerField<TArray<FDebugDisplayProperty>*>(this, "UGameViewportClient.DebugProperties"); }
	FTitleSafeZoneArea& TitleSafeZoneField() { return *GetNativePointerField<FTitleSafeZoneArea*>(this, "UGameViewportClient.TitleSafeZone"); }
	TArray<FSplitscreenData>& SplitscreenInfoField() { return *GetNativePointerField<TArray<FSplitscreenData>*>(this, "UGameViewportClient.SplitscreenInfo"); }
	int& MaxSplitscreenPlayersField() { return *GetNativePointerField<int*>(this, "UGameViewportClient.MaxSplitscreenPlayers"); }
	TEnumAsByte<enum ESplitScreenType::Type>& ActiveSplitscreenTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESplitScreenType::Type>*>(this, "UGameViewportClient.ActiveSplitscreenType"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "UGameViewportClient.World"); }
	bool& bSuppressTransitionMessageField() { return *GetNativePointerField<bool*>(this, "UGameViewportClient.bSuppressTransitionMessage"); }
	float& ProgressFadeTimeField() { return *GetNativePointerField<float*>(this, "UGameViewportClient.ProgressFadeTime"); }
	int& ViewModeIndexField() { return *GetNativePointerField<int*>(this, "UGameViewportClient.ViewModeIndex"); }
	FEngineShowFlags& EngineShowFlagsField() { return *GetNativePointerField<FEngineShowFlags*>(this, "UGameViewportClient.EngineShowFlags"); }
	TWeakPtr<SWindow,0>& WindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "UGameViewportClient.Window"); }
	TWeakPtr<SOverlay,0>& ViewportOverlayWidgetField() { return *GetNativePointerField<TWeakPtr<SOverlay,0>*>(this, "UGameViewportClient.ViewportOverlayWidget"); }
	FName& CurrentBufferVisualizationModeField() { return *GetNativePointerField<FName*>(this, "UGameViewportClient.CurrentBufferVisualizationMode"); }
	TWeakPtr<SWindow,0>& HighResScreenshotDialogField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "UGameViewportClient.HighResScreenshotDialog"); }
	FStatUnitData * StatUnitDataField() { return GetNativePointerField<FStatUnitData *>(this, "UGameViewportClient.StatUnitData"); }
	FStatHitchesData * StatHitchesDataField() { return GetNativePointerField<FStatHitchesData *>(this, "UGameViewportClient.StatHitchesData"); }
	bool& bDisableSplitScreenOverrideField() { return *GetNativePointerField<bool*>(this, "UGameViewportClient.bDisableSplitScreenOverride"); }
	TArray<bool>& IgnoreInputValuesField() { return *GetNativePointerField<TArray<bool>*>(this, "UGameViewportClient.IgnoreInputValues"); }
	EMouseCaptureMode::Type& MouseCaptureModeField() { return *GetNativePointerField<EMouseCaptureMode::Type*>(this, "UGameViewportClient.MouseCaptureMode"); }

	// Functions

	EMouseCaptureMode::Type CaptureMouseOnClick() { return NativeCall<EMouseCaptureMode::Type>(this, "UGameViewportClient.CaptureMouseOnClick"); }
	const TArray<FString> * GetEnabledStats() { return NativeCall<const TArray<FString> *>(this, "UGameViewportClient.GetEnabledStats"); }
	FStatHitchesData * GetStatHitchesData() { return NativeCall<FStatHitchesData *>(this, "UGameViewportClient.GetStatHitchesData"); }
	FStatUnitData * GetStatUnitData() { return NativeCall<FStatUnitData *>(this, "UGameViewportClient.GetStatUnitData"); }
	bool IsStatEnabled(const wchar_t * InName) { return NativeCall<bool, const wchar_t *>(this, "UGameViewportClient.IsStatEnabled", InName); }
	void SetEnabledStats(const TArray<FString> * InEnabledStats) { NativeCall<void, const TArray<FString> *>(this, "UGameViewportClient.SetEnabledStats", InEnabledStats); }
	void SetSoundShowFlags(const FViewportClient::ESoundShowFlags::Type InSoundShowFlags) { NativeCall<void, const FViewportClient::ESoundShowFlags::Type>(this, "UGameViewportClient.SetSoundShowFlags", InSoundShowFlags); }
	void SetSuppressTransitionMessage(bool bSuppress) { NativeCall<void, bool>(this, "UGameViewportClient.SetSuppressTransitionMessage", bSuppress); }
	void AddViewportWidgetContent(TSharedRef<SWidget,0> ViewportContent, const int ZOrder) { NativeCall<void, TSharedRef<SWidget,0>, const int>(this, "UGameViewportClient.AddViewportWidgetContent", ViewportContent, ZOrder); }
	void BeginDestroy() { NativeCall<void>(this, "UGameViewportClient.BeginDestroy"); }
	void CloseRequested(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.CloseRequested", InViewport); }
	FString * ConsoleCommand(FString * result, const FString * Command) { return NativeCall<FString *, FString *, const FString *>(this, "UGameViewportClient.ConsoleCommand", result, Command); }
	void DetachViewportClient() { NativeCall<void>(this, "UGameViewportClient.DetachViewportClient"); }
	void Draw(FViewport * InViewport, FCanvas * SceneCanvas) { NativeCall<void, FViewport *, FCanvas *>(this, "UGameViewportClient.Draw", InViewport, SceneCanvas); }
	void DrawTitleSafeArea(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UGameViewportClient.DrawTitleSafeArea", Canvas); }
	void DrawTransition(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UGameViewportClient.DrawTransition", Canvas); }
	void DrawTransitionMessage(UCanvas * Canvas, const FString * Message) { NativeCall<void, UCanvas *, const FString *>(this, "UGameViewportClient.DrawTransitionMessage", Canvas, Message); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.Exec", InWorld, Cmd, Ar); }
	EMouseCursor::Type GetCursor(FViewport * InViewport, int X, int Y) { return NativeCall<EMouseCursor::Type, FViewport *, int, int>(this, "UGameViewportClient.GetCursor", InViewport, X, Y); }
	bool GetMousePosition(FVector2D * MousePosition, bool bEvenWhenMouseNotAttached) { return NativeCall<bool, FVector2D *, bool>(this, "UGameViewportClient.GetMousePosition", MousePosition, bEvenWhenMouseNotAttached); }
	void GetSubtitleRegion(FVector2D * MinPos, FVector2D * MaxPos) { NativeCall<void, FVector2D *, FVector2D *>(this, "UGameViewportClient.GetSubtitleRegion", MinPos, MaxPos); }
	void GetViewportSize(FVector2D * out_ViewportSize) { NativeCall<void, FVector2D *>(this, "UGameViewportClient.GetViewportSize", out_ViewportSize); }
	bool HandleDisplayAllCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleDisplayAllCommand", Cmd, Ar); }
	bool HandleDisplayAllLocationCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleDisplayAllLocationCommand", Cmd, Ar); }
	bool HandleDisplayAllRotationCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleDisplayAllRotationCommand", Cmd, Ar); }
	bool HandleDisplayClearCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleDisplayClearCommand", Cmd, Ar); }
	bool HandleDisplayCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleDisplayCommand", Cmd, Ar); }
	bool HandleForceSkelLODCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameViewportClient.HandleForceSkelLODCommand", Cmd, Ar, InWorld); }
	bool HandleHighresScreenshotCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleHighresScreenshotCommand", Cmd, Ar); }
	bool HandleKillParticlesCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleKillParticlesCommand", Cmd, Ar); }
	bool HandlePauseRenderClockCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandlePauseRenderClockCommand", Cmd, Ar); }
	bool HandlePrevViewModeCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameViewportClient.HandlePrevViewModeCommand", Cmd, Ar, InWorld); }
	bool HandleScreenshotCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleScreenshotCommand", Cmd, Ar); }
	bool HandleSetResCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleSetResCommand", Cmd, Ar); }
	bool HandleShowCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameViewportClient.HandleShowCommand", Cmd, Ar, InWorld); }
	bool HandleShowLayerCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameViewportClient.HandleShowLayerCommand", Cmd, Ar, InWorld); }
	bool HandleToggleFullscreenCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleToggleFullscreenCommand", Cmd, Ar); }
	bool HandleToggleMIPFadeCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameViewportClient.HandleToggleMIPFadeCommand", Cmd, Ar); }
	bool HandleViewModeCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameViewportClient.HandleViewModeCommand", Cmd, Ar, InWorld); }
	void HandleViewportStatCheckEnabled(const wchar_t * InName, bool * bOutCurrentEnabled, bool * bOutOthersEnabled) { NativeCall<void, const wchar_t *, bool *, bool *>(this, "UGameViewportClient.HandleViewportStatCheckEnabled", InName, bOutCurrentEnabled, bOutOthersEnabled); }
	void HandleViewportStatDisableAll(const bool bInAnyViewport) { NativeCall<void, const bool>(this, "UGameViewportClient.HandleViewportStatDisableAll", bInAnyViewport); }
	void HandleViewportStatDisabled(const wchar_t * InName) { NativeCall<void, const wchar_t *>(this, "UGameViewportClient.HandleViewportStatDisabled", InName); }
	void HandleViewportStatEnabled(const wchar_t * InName) { NativeCall<void, const wchar_t *>(this, "UGameViewportClient.HandleViewportStatEnabled", InName); }
	bool IgnoreInput(int ControllerId) { return NativeCall<bool, int>(this, "UGameViewportClient.IgnoreInput", ControllerId); }
	void Init(FWorldContext * WorldContext, UGameInstance * OwningGameInstance) { NativeCall<void, FWorldContext *, UGameInstance *>(this, "UGameViewportClient.Init", WorldContext, OwningGameInstance); }
	bool InputAxis(FViewport * InViewport, int ControllerId, FKey Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad) { return NativeCall<bool, FViewport *, int, FKey, float, float, int, bool>(this, "UGameViewportClient.InputAxis", InViewport, ControllerId, Key, Delta, DeltaTime, NumSamples, bGamepad); }
	bool InputChar(FViewport * InViewport, int ControllerId, wchar_t Character) { return NativeCall<bool, FViewport *, int, wchar_t>(this, "UGameViewportClient.InputChar", InViewport, ControllerId, Character); }
	bool InputKey(FViewport * InViewport, int ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) { return NativeCall<bool, FViewport *, int, FKey, EInputEvent, float, bool>(this, "UGameViewportClient.InputKey", InViewport, ControllerId, Key, EventType, AmountDepressed, bGamepad); }
	bool InputMotion(FViewport * InViewport, int ControllerId, const FVector * Tilt, const FVector * RotationRate, const FVector * Gravity, const FVector * Acceleration) { return NativeCall<bool, FViewport *, int, const FVector *, const FVector *, const FVector *, const FVector *>(this, "UGameViewportClient.InputMotion", InViewport, ControllerId, Tilt, RotationRate, Gravity, Acceleration); }
	bool InputTouch(FViewport * InViewport, int ControllerId, unsigned int Handle, ETouchType::Type Type, const FVector2D * TouchLocation, FDateTime DeviceTimestamp, unsigned int TouchpadIndex) { return NativeCall<bool, FViewport *, int, unsigned int, ETouchType::Type, const FVector2D *, FDateTime, unsigned int>(this, "UGameViewportClient.InputTouch", InViewport, ControllerId, Handle, Type, TouchLocation, DeviceTimestamp, TouchpadIndex); }
	bool IsFocused(FViewport * InViewport) { return NativeCall<bool, FViewport *>(this, "UGameViewportClient.IsFocused", InViewport); }
	bool IsFullScreenViewport() { return NativeCall<bool>(this, "UGameViewportClient.IsFullScreenViewport"); }
	void LayoutPlayers() { NativeCall<void>(this, "UGameViewportClient.LayoutPlayers"); }
	void LostFocus(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.LostFocus", InViewport); }
	void MouseEnter(FViewport * InViewport, int x, int y) { NativeCall<void, FViewport *, int, int>(this, "UGameViewportClient.MouseEnter", InViewport, x, y); }
	void MouseLeave(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.MouseLeave", InViewport); }
	void NotifyPlayerAdded(int PlayerIndex, ULocalPlayer * RemovedPlayer) { NativeCall<void, int, ULocalPlayer *>(this, "UGameViewportClient.NotifyPlayerAdded", PlayerIndex, RemovedPlayer); }
	void OnSplitscreenPlayerJoinFailure(const TSharedPtr<FUniqueNetId,0> * PlayerUniqueNetId, const FString * ErrorMsg) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *, const FString *>(this, "UGameViewportClient.OnSplitscreenPlayerJoinFailure", PlayerUniqueNetId, ErrorMsg); }
	void PeekNetworkFailureMessages(UWorld * InWorld, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "UGameViewportClient.PeekNetworkFailureMessages", InWorld, NetDriver, FailureType, ErrorString); }
	void PostInitProperties() { NativeCall<void>(this, "UGameViewportClient.PostInitProperties"); }
	void PostRender(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UGameViewportClient.PostRender", Canvas); }
	void Precache() { NativeCall<void>(this, "UGameViewportClient.Precache"); }
	void ProcessScreenShots(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.ProcessScreenShots", InViewport); }
	void ReceivedFocus(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.ReceivedFocus", InViewport); }
	void RemoveAllViewportWidgets() { NativeCall<void>(this, "UGameViewportClient.RemoveAllViewportWidgets"); }
	bool RemovePlayer(ULocalPlayer * ExPlayer) { return NativeCall<bool, ULocalPlayer *>(this, "UGameViewportClient.RemovePlayer", ExPlayer); }
	void RemoveViewportWidgetContent(TSharedRef<SWidget,0> ViewportContent) { NativeCall<void, TSharedRef<SWidget,0>>(this, "UGameViewportClient.RemoveViewportWidgetContent", ViewportContent); }
	bool RequestBugScreenShot(const wchar_t * Cmd, bool bDisplayHUDInfo) { return NativeCall<bool, const wchar_t *, bool>(this, "UGameViewportClient.RequestBugScreenShot", Cmd, bDisplayHUDInfo); }
	bool RequiresUncapturedAxisInput() { return NativeCall<bool>(this, "UGameViewportClient.RequiresUncapturedAxisInput"); }
	void SetDisableSplitscreenOverride(const bool bDisabled) { NativeCall<void, const bool>(this, "UGameViewportClient.SetDisableSplitscreenOverride", bDisabled); }
	bool SetDisplayConfiguration(const FIntPoint * Dimensions, EWindowMode::Type WindowMode) { return NativeCall<bool, const FIntPoint *, EWindowMode::Type>(this, "UGameViewportClient.SetDisplayConfiguration", Dimensions, WindowMode); }
	void SetDropDetail(float DeltaSeconds) { NativeCall<void, float>(this, "UGameViewportClient.SetDropDetail", DeltaSeconds); }
	void SetIgnoreInput(bool Ignore, int ControllerId) { NativeCall<void, bool, int>(this, "UGameViewportClient.SetIgnoreInput", Ignore, ControllerId); }
	void SetIsSimulateInEditorViewport(bool bInIsSimulateInEditorViewport) { NativeCall<void, bool>(this, "UGameViewportClient.SetIsSimulateInEditorViewport", bInIsSimulateInEditorViewport); }
	int SetStatEnabled(const wchar_t * InName, const bool bEnable, const bool bAll) { return NativeCall<int, const wchar_t *, const bool, const bool>(this, "UGameViewportClient.SetStatEnabled", InName, bEnable, bAll); }
	void SetViewport(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UGameViewportClient.SetViewport", InViewport); }
	void SetViewportFrame(FViewportFrame * InViewportFrame) { NativeCall<void, FViewportFrame *>(this, "UGameViewportClient.SetViewportFrame", InViewportFrame); }
	void SetViewportOverlayWidget(TSharedPtr<SWindow,0> InWindow, TSharedRef<SOverlay,0> InViewportOverlayWidget) { NativeCall<void, TSharedPtr<SWindow,0>, TSharedRef<SOverlay,0>>(this, "UGameViewportClient.SetViewportOverlayWidget", InWindow, InViewportOverlayWidget); }
	void UpdateActiveSplitscreenType() { NativeCall<void>(this, "UGameViewportClient.UpdateActiveSplitscreenType"); }
	void VerifyPathRenderingComponents() { NativeCall<void>(this, "UGameViewportClient.VerifyPathRenderingComponents"); }
	FEngineShowFlags * GetEngineShowFlags() { return NativeCall<FEngineShowFlags *>(this, "UGameViewportClient.GetEngineShowFlags"); }
};

struct UShooterGameViewportClient : UGameViewportClient
{
	char __padding[0x98L];
	UFont * InfoFontField() { return GetNativePointerField<UFont *>(this, "UShooterGameViewportClient.InfoFont"); }
	bool& bDisplayedStartupTutorialField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bDisplayedStartupTutorial"); }
	long double& LastTimeLocalPlayerRemovedField() { return *GetNativePointerField<long double*>(this, "UShooterGameViewportClient.LastTimeLocalPlayerRemoved"); }
	int& NumInventoryOpensWithoutGCField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.NumInventoryOpensWithoutGC"); }
	long double& LastGarbageCollectionTimeField() { return *GetNativePointerField<long double*>(this, "UShooterGameViewportClient.LastGarbageCollectionTime"); }
	TSharedPtr<SShooterLoadingScreen,0>& LoadingScreenWidgetField() { return *GetNativePointerField<TSharedPtr<SShooterLoadingScreen,0>*>(this, "UShooterGameViewportClient.LoadingScreenWidget"); }
	FActiveSound * LoadingMusicInstanceField() { return GetNativePointerField<FActiveSound *>(this, "UShooterGameViewportClient.LoadingMusicInstance"); }
	bool& IsForgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.IsForground"); }
	int& CachedControllerIDField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.CachedControllerID"); }
	bool& bSpawningNewPlayerField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bSpawningNewPlayer"); }
	bool& bGamepadActive_LastCheckField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bGamepadActive_LastCheck"); }
	FString& RequestedPNTScreenshotField() { return *GetNativePointerField<FString*>(this, "UShooterGameViewportClient.RequestedPNTScreenshot"); }
	bool& bHasReceivedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bHasReceivedNewsMessage"); }

	// Functions

	bool IsShowingDialog() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsShowingDialog"); }
	bool AddLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.AddLocalPlayer", ControllerId); }
	void AddViewportWidgetContent(TSharedRef<SWidget,0> ViewportContent, const int ZOrder) { NativeCall<void, TSharedRef<SWidget,0>, const int>(this, "UShooterGameViewportClient.AddViewportWidgetContent", ViewportContent, ZOrder); }
	bool AnyNonInventoryScenesWithMouseCapture(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "UShooterGameViewportClient.AnyNonInventoryScenesWithMouseCapture", ForPC); }
	bool AnyScenesWithMouseCapture() { return NativeCall<bool>(this, "UShooterGameViewportClient.AnyScenesWithMouseCapture"); }
	bool CanAddSplitscreenLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.CanAddSplitscreenLocalPlayer", ControllerId); }
	void CenterMouse() { NativeCall<void>(this, "UShooterGameViewportClient.CenterMouse"); }
	void CreateLocalPlayer(int ControllerId) { NativeCall<void, int>(this, "UShooterGameViewportClient.CreateLocalPlayer", ControllerId); }
	void GetGameViewportSize(int * SizeX, int * SizeY) { NativeCall<void, int *, int *>(this, "UShooterGameViewportClient.GetGameViewportSize", SizeX, SizeY); }
	static UWorld * GetGameWorld() { return NativeCall<UWorld *>(nullptr, "UShooterGameViewportClient.GetGameWorld"); }
	int GetNumScenes(bool bIncludeFooter) { return NativeCall<int, bool>(this, "UShooterGameViewportClient.GetNumScenes", bIncludeFooter); }
	static UShooterGameViewportClient * GetViewportClient(UWorld * ForWorld) { return NativeCall<UShooterGameViewportClient *, UWorld *>(nullptr, "UShooterGameViewportClient.GetViewportClient", ForWorld); }
	void HideDialog(ULocalPlayer * PlayerOwner) { NativeCall<void, ULocalPlayer *>(this, "UShooterGameViewportClient.HideDialog", PlayerOwner); }
	void HideLoadingScreen() { NativeCall<void>(this, "UShooterGameViewportClient.HideLoadingScreen"); }
	bool InputAxis(FViewport * InViewport, int ControllerId, FKey Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad) { return NativeCall<bool, FViewport *, int, FKey, float, float, int, bool>(this, "UShooterGameViewportClient.InputAxis", InViewport, ControllerId, Key, Delta, DeltaTime, NumSamples, bGamepad); }
	bool InputKey(FViewport * InViewport, int ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) { return NativeCall<bool, FViewport *, int, FKey, EInputEvent, float, bool>(this, "UShooterGameViewportClient.InputKey", InViewport, ControllerId, Key, EventType, AmountDepressed, bGamepad); }
	bool IsInPlayingState() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsInPlayingState"); }
	bool IsTakingPNTScreenshot() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsTakingPNTScreenshot"); }
	bool IsUnderwaterPostprocess(APostProcessVolume * forVolume, const FVector * AtViewLocation) { return NativeCall<bool, APostProcessVolume *, const FVector *>(this, "UShooterGameViewportClient.IsUnderwaterPostprocess", forVolume, AtViewLocation); }
	void NotifyInventoryFolderAdded(UPrimalInventoryComponent * inventoryComp, FString FolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString, int>(this, "UShooterGameViewportClient.NotifyInventoryFolderAdded", inventoryComp, FolderName, InventoryCompType); }
	void NotifyInventoryPrimalArkItemAdded() { NativeCall<void>(this, "UShooterGameViewportClient.NotifyInventoryPrimalArkItemAdded"); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemRemoved", inventoryComp, theItem); }
	void NotifyInventoryPrimalItemStatus(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, UPrimalItem * theItem2, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemStatus", inventoryComp, theItem, theItem2, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent * inventoryComp, UPrimalItem * Item1, UPrimalItem * Item2) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemSwapped", inventoryComp, Item1, Item2); }
	void NotifyPlayerAdded(int PlayerIndex, ULocalPlayer * AddedPlayer) { NativeCall<void, int, ULocalPlayer *>(this, "UShooterGameViewportClient.NotifyPlayerAdded", PlayerIndex, AddedPlayer); }
	void NotifyPlayerRemoved(int PlayerIndex, ULocalPlayer * RemovedPlayer) { NativeCall<void, int, ULocalPlayer *>(this, "UShooterGameViewportClient.NotifyPlayerRemoved", PlayerIndex, RemovedPlayer); }
	void OnLocalPlayerAddedOrRemoved() { NativeCall<void>(this, "UShooterGameViewportClient.OnLocalPlayerAddedOrRemoved"); }
	void OnLoginUIClosed(TSharedPtr<FUniqueNetId,0> LoggedInUserId, const int LocalUserId) { NativeCall<void, TSharedPtr<FUniqueNetId,0>, const int>(this, "UShooterGameViewportClient.OnLoginUIClosed", LoggedInUserId, LocalUserId); }
	void OnRegisterSplitscreenLocalPlayerComplete(const FUniqueNetId * PlayerId, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, const FUniqueNetId *, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameViewportClient.OnRegisterSplitscreenLocalPlayerComplete", PlayerId, Result); }
	void OnSplitscreenPlayerJoinFailure(const TSharedPtr<FUniqueNetId,0> * PlayerUniqueNetId, const FString * ErrorMsg) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *, const FString *>(this, "UShooterGameViewportClient.OnSplitscreenPlayerJoinFailure", PlayerUniqueNetId, ErrorMsg); }
	void OnUnregisterSplitscreenLocalPlayerComplete(const FUniqueNetId * __formal, const bool __formal) { NativeCall<void, const FUniqueNetId *, const bool>(this, "UShooterGameViewportClient.OnUnregisterSplitscreenLocalPlayerComplete", __formal, __formal); }
	void PostRender(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UShooterGameViewportClient.PostRender", Canvas); }
	void PreWorldTick(float DeltaTime) { NativeCall<void, float>(this, "UShooterGameViewportClient.PreWorldTick", DeltaTime); }
	void ProcessScreenShots(FViewport * InViewport) { NativeCall<void, FViewport *>(this, "UShooterGameViewportClient.ProcessScreenShots", InViewport); }
	void ReAdjustUI() { NativeCall<void>(this, "UShooterGameViewportClient.ReAdjustUI"); }
	void RecreateHUDs() { NativeCall<void>(this, "UShooterGameViewportClient.RecreateHUDs"); }
	void RefreshTopUI(int ControllerId) { NativeCall<void, int>(this, "UShooterGameViewportClient.RefreshTopUI", ControllerId); }
	void RemoveAllExistingWidgets() { NativeCall<void>(this, "UShooterGameViewportClient.RemoveAllExistingWidgets"); }
	bool RemoveLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.RemoveLocalPlayer", ControllerId); }
	void RemoveViewportWidgetContent(TSharedRef<SWidget,0> ViewportContent) { NativeCall<void, TSharedRef<SWidget,0>>(this, "UShooterGameViewportClient.RemoveViewportWidgetContent", ViewportContent); }
	void RescaleOpenScenes() { NativeCall<void>(this, "UShooterGameViewportClient.RescaleOpenScenes"); }
	void ResetSpawnFlag() { NativeCall<void>(this, "UShooterGameViewportClient.ResetSpawnFlag"); }
	void ShowLoadingScreen() { NativeCall<void>(this, "UShooterGameViewportClient.ShowLoadingScreen"); }
	void Shutdown() { NativeCall<void>(this, "UShooterGameViewportClient.Shutdown"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterGameViewportClient.Tick", DeltaSeconds); }
	void ValidateInput(float DeltaSeconds, bool bForceSet) { NativeCall<void, float, bool>(this, "UShooterGameViewportClient.ValidateInput", DeltaSeconds, bForceSet); }
	void ValidateInput(ULocalPlayer * LocalPlayer, bool WindowBroughtToForeground, bool bForceSet) { NativeCall<void, ULocalPlayer *, bool, bool>(this, "UShooterGameViewportClient.ValidateInput", LocalPlayer, WindowBroughtToForeground, bForceSet); }
	FString * WritePNTScreenshot(FString * result, const FString * filename) { return NativeCall<FString *, FString *, const FString *>(this, "UShooterGameViewportClient.WritePNTScreenshot", result, filename); }
};

