#pragma once

#include "BaseDeclarations.h"
#include "UPlayer.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FUniqueNetId.h"

struct ULocalPlayer : UPlayer
{
	char __padding[0x1e0L];
	int& ControllerIdField() { return *GetNativePointerField<int*>(this, "ULocalPlayer.ControllerId"); }
	FVector2D& OriginField() { return *GetNativePointerField<FVector2D*>(this, "ULocalPlayer.Origin"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "ULocalPlayer.Size"); }
	FVector& LastViewLocationField() { return *GetNativePointerField<FVector*>(this, "ULocalPlayer.LastViewLocation"); }
	TEnumAsByte<enum EAspectRatioAxisConstraint>& AspectRatioAxisConstraintField() { return *GetNativePointerField<TEnumAsByte<enum EAspectRatioAxisConstraint>*>(this, "ULocalPlayer.AspectRatioAxisConstraint"); }
	bool& bValidCachedViewFrustumField() { return *GetNativePointerField<bool*>(this, "ULocalPlayer.bValidCachedViewFrustum"); }
	FConvexVolume& CachedViewFrustumField() { return *GetNativePointerField<FConvexVolume*>(this, "ULocalPlayer.CachedViewFrustum"); }
	FString& PasswordToEnterField() { return *GetNativePointerField<FString*>(this, "ULocalPlayer.PasswordToEnter"); }

	// Functions

	FString * GetGameLoginOptions(FString * result) { return NativeCall<FString *, FString *>(this, "ULocalPlayer.GetGameLoginOptions", result); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ULocalPlayer.AddReferencedObjects", InThis, Collector); }
	void BeginDestroy() { NativeCall<void>(this, "ULocalPlayer.BeginDestroy"); }
	void DisplayNotificationMessage(FString Message, FString Title, bool bIsError, bool OnOkGoToMainMenu, bool bAutoClose, bool bCanBeTop, bool bHideXBoxFooter) { NativeCall<void, FString, FString, bool, bool, bool, bool, bool>(this, "ULocalPlayer.DisplayNotificationMessage", Message, Title, bIsError, OnOkGoToMainMenu, bAutoClose, bCanBeTop, bHideXBoxFooter); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.Exec", InWorld, Cmd, Ar); }
	void ExecMacro(const wchar_t * Filename, FOutputDevice * Ar) { NativeCall<void, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.ExecMacro", Filename, Ar); }
	void FinishDestroy() { NativeCall<void>(this, "ULocalPlayer.FinishDestroy"); }
	FString * GetNickname(FString * result) { return NativeCall<FString *, FString *>(this, "ULocalPlayer.GetNickname", result); }
	bool GetProjectionData(FViewport * Viewport, EStereoscopicPass StereoPass, FSceneViewProjectionData * ProjectionData) { return NativeCall<bool, FViewport *, EStereoscopicPass, FSceneViewProjectionData *>(this, "ULocalPlayer.GetProjectionData", Viewport, StereoPass, ProjectionData); }
	FString * GetSessionConnectionToken(FString * result) { return NativeCall<FString *, FString *>(this, "ULocalPlayer.GetSessionConnectionToken", result); }
	void GetViewPoint(FMinimalViewInfo * OutViewInfo) { NativeCall<void, FMinimalViewInfo *>(this, "ULocalPlayer.GetViewPoint", OutViewInfo); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "ULocalPlayer.GetWorld"); }
	bool HandleCancelMatineeCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.HandleCancelMatineeCommand", Cmd, Ar); }
	void HandleControllerConnectionChange(bool bConnected, int InUserId, int InControllerId) { NativeCall<void, bool, int, int>(this, "ULocalPlayer.HandleControllerConnectionChange", bConnected, InUserId, InControllerId); }
	void HandleDisconnect(UWorld * World, UNetDriver * NetDriver) { NativeCall<void, UWorld *, UNetDriver *>(this, "ULocalPlayer.HandleDisconnect", World, NetDriver); }
	bool HandleExecCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.HandleExecCommand", Cmd, Ar); }
	bool HandleListPawnComponentsCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.HandleListPawnComponentsCommand", Cmd, Ar); }
	bool HandleListSkelMeshesCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.HandleListSkelMeshesCommand", Cmd, Ar); }
	bool HandleToggleStreamingVolumesCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "ULocalPlayer.HandleToggleStreamingVolumesCommand", Cmd, Ar); }
	void InitOnlineSession() { NativeCall<void>(this, "ULocalPlayer.InitOnlineSession"); }
	bool IsSphereVisible(const FVector * Center, float Radius) { return NativeCall<bool, const FVector *, float>(this, "ULocalPlayer.IsSphereVisible", Center, Radius); }
	void OnConnectionFailed(const FString * __formal) { NativeCall<void, const FString *>(this, "ULocalPlayer.OnConnectionFailed", __formal); }
	void PlayerAdded(UGameViewportClient * InViewportClient, int InControllerID) { NativeCall<void, UGameViewportClient *, int>(this, "ULocalPlayer.PlayerAdded", InViewportClient, InControllerID); }
	void PlayerRemoved() { NativeCall<void>(this, "ULocalPlayer.PlayerRemoved"); }
	void PostInitProperties() { NativeCall<void>(this, "ULocalPlayer.PostInitProperties"); }
	void SendSplitJoin() { NativeCall<void>(this, "ULocalPlayer.SendSplitJoin"); }
	void SetCachedUniqueNetId(TSharedPtr<FUniqueNetId,0> NewUniqueNetId) { NativeCall<void, TSharedPtr<FUniqueNetId,0>>(this, "ULocalPlayer.SetCachedUniqueNetId", NewUniqueNetId); }
	void SetControllerId(int NewControllerId) { NativeCall<void, int>(this, "ULocalPlayer.SetControllerId", NewControllerId); }
	bool SpawnPlayActor(const FString * URL, FString * OutError, UWorld * InWorld) { return NativeCall<bool, const FString *, FString *, UWorld *>(this, "ULocalPlayer.SpawnPlayActor", URL, OutError, InWorld); }
};

struct UShooterLocalPlayer : ULocalPlayer
{

	// Functions

	void DisplayNotificationMessage(FString Message, FString Title, bool bIsError, bool OnOkGoToMainMenu, bool bAutoClose, bool bCanBeTop, bool bHideXBoxFooter) { NativeCall<void, FString, FString, bool, bool, bool, bool, bool>(this, "UShooterLocalPlayer.DisplayNotificationMessage", Message, Title, bIsError, OnOkGoToMainMenu, bAutoClose, bCanBeTop, bHideXBoxFooter); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UShooterLocalPlayer.Exec", InWorld, Cmd, Ar); }
	FString * GetNickname(FString * result) { return NativeCall<FString *, FString *>(this, "UShooterLocalPlayer.GetNickname", result); }
	UShooterPersistentUser * GetPersistentUser() { return NativeCall<UShooterPersistentUser *>(this, "UShooterLocalPlayer.GetPersistentUser"); }
	void LoadPersistentUser() { NativeCall<void>(this, "UShooterLocalPlayer.LoadPersistentUser"); }
	void OnConnectionFailed(const FString * reason) { NativeCall<void, const FString *>(this, "UShooterLocalPlayer.OnConnectionFailed", reason); }
	void SetControllerId(int NewControllerId) { NativeCall<void, int>(this, "UShooterLocalPlayer.SetControllerId", NewControllerId); }
};

