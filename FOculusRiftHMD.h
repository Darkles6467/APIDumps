#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "FRHITexture2D.h"
#include "FIntRect.h"

struct IHeadMountedDisplay : IModuleInterface
{
	char __padding[0x18L];
	FSlateRect& PreFullScreenRectField() { return *GetNativePointerField<FSlateRect*>(this, "IHeadMountedDisplay.PreFullScreenRect"); }

	// Functions

	void PushPreFullScreenRect(FLinearColor InColor) { NativeCall<void, FLinearColor>(this, "IHeadMountedDisplay.PushPreFullScreenRect", InColor); }
	FQuat * GetBaseOrientation(FQuat * result) { return NativeCall<FQuat *, FQuat *>(this, "IHeadMountedDisplay.GetBaseOrientation", result); }
	FRotator * GetBaseRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "IHeadMountedDisplay.GetBaseRotation", result); }
	FString * GetVersionString(FString * result) { return NativeCall<FString *, FString *>(this, "IHeadMountedDisplay.GetVersionString", result); }
	void PopPreFullScreenRect(FSlateRect * OutPreFullScreenRect) { NativeCall<void, FSlateRect *>(this, "IHeadMountedDisplay.PopPreFullScreenRect", OutPreFullScreenRect); }
	FVector2D * GetTextureScaleRight(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "IHeadMountedDisplay.GetTextureScaleRight", result); }
};

struct FHeadMountedDisplay : IHeadMountedDisplay
{
	char __padding[0x48L];
	FRotator& DeltaControlRotationField() { return *GetNativePointerField<FRotator*>(this, "FHeadMountedDisplay.DeltaControlRotation"); }
	bool& IsActiveField() { return *GetNativePointerField<bool*>(this, "FHeadMountedDisplay.IsActive"); }

	// Functions

	void IsHMDActive() { NativeCall<void>(this, "FHeadMountedDisplay.IsHMDActive"); }
	void AdjustViewRect(EStereoscopicPass StereoPass, int * X, int * Y, unsigned int * SizeX, unsigned int * SizeY) { NativeCall<void, EStereoscopicPass, int *, int *, unsigned int *, unsigned int *>(this, "FHeadMountedDisplay.AdjustViewRect", StereoPass, X, Y, SizeX, SizeY); }
	void UserProfile() { NativeCall<void>(this, "FHeadMountedDisplay.UserProfile"); }
	void ApplyHmdRotation(APlayerController * PC, FRotator * ViewRotation) { NativeCall<void, APlayerController *, FRotator *>(this, "FHeadMountedDisplay.ApplyHmdRotation", PC, ViewRotation); }
	void EnableHMD(bool enable) { NativeCall<void, bool>(this, "FHeadMountedDisplay.EnableHMD", enable); }
	void EnableLowPersistenceMode(bool Enable) { NativeCall<void, bool>(this, "FHeadMountedDisplay.EnableLowPersistenceMode", Enable); }
	bool EnablePositionalTracking(bool enable) { return NativeCall<bool, bool>(this, "FHeadMountedDisplay.EnablePositionalTracking", enable); }
	bool EnableStereo(bool bStereo) { return NativeCall<bool, bool>(this, "FHeadMountedDisplay.EnableStereo", bStereo); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FHeadMountedDisplay.Exec", InWorld, Cmd, Ar); }
	float GetActualScreenPercentage() { return NativeCall<float>(this, "FHeadMountedDisplay.GetActualScreenPercentage"); }
	FVector * GetBaseOffsetInMeters(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FHeadMountedDisplay.GetBaseOffsetInMeters", result); }
	FQuat * GetBaseOrientation(FQuat * result) { return NativeCall<FQuat *, FQuat *>(this, "FHeadMountedDisplay.GetBaseOrientation", result); }
	FRotator * GetBaseRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "FHeadMountedDisplay.GetBaseRotation", result); }
	void GetCurrentHMDPose(FQuat * CurrentOrientation, FVector * CurrentPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector * PositionScale) { NativeCall<void, FQuat *, FVector *, bool, bool, const FVector *>(this, "FHeadMountedDisplay.GetCurrentHMDPose", CurrentOrientation, CurrentPosition, bUseOrienationForPlayerCamera, bUsePositionForPlayerCamera, PositionScale); }
	void GetCurrentOrientationAndPosition(FQuat * CurrentOrientation, FVector * CurrentPosition) { NativeCall<void, FQuat *, FVector *>(this, "FHeadMountedDisplay.GetCurrentOrientationAndPosition", CurrentOrientation, CurrentPosition); }
	void GetFieldOfView(float * InOutHFOVInDegrees, float * InOutVFOVInDegrees) { NativeCall<void, float *, float *>(this, "FHeadMountedDisplay.GetFieldOfView", InOutHFOVInDegrees, InOutVFOVInDegrees); }
	float GetInterpupillaryDistance() { return NativeCall<float>(this, "FHeadMountedDisplay.GetInterpupillaryDistance"); }
	FVector * GetNeckPosition(FVector * result, const FQuat * CurrentOrientation, const FVector * CurrentPosition, const FVector * PositionScale) { return NativeCall<FVector *, FVector *, const FQuat *, const FVector *, const FVector *>(this, "FHeadMountedDisplay.GetNeckPosition", result, CurrentOrientation, CurrentPosition, PositionScale); }
	void GetPlayerCameraRotation(APlayerCameraManager * Camera, FMinimalViewInfo * POV) { NativeCall<void, APlayerCameraManager *, FMinimalViewInfo *>(this, "FHeadMountedDisplay.GetPlayerCameraRotation", Camera, POV); }
	FVector * GetPositionScale3D(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FHeadMountedDisplay.GetPositionScale3D", result); }
	void GetRawSensorData(FHeadMountedDisplay::SensorData * OutData) { NativeCall<void, FHeadMountedDisplay::SensorData *>(this, "FHeadMountedDisplay.GetRawSensorData", OutData); }
	float GetScreenPercentage() { return NativeCall<float>(this, "FHeadMountedDisplay.GetScreenPercentage"); }
	bool IsChromaAbCorrectionEnabled() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsChromaAbCorrectionEnabled"); }
	bool IsHeadTrackingAllowed() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsHeadTrackingAllowed"); }
	bool IsInLowPersistenceMode() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsInLowPersistenceMode"); }
	bool IsInitialized() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsInitialized"); }
	bool IsPositionalTrackingEnabled() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsPositionalTrackingEnabled"); }
	bool IsStereoEnabled() { return NativeCall<bool>(this, "FHeadMountedDisplay.IsStereoEnabled"); }
	bool OnEndGameFrame(FWorldContext * WorldContext) { return NativeCall<bool, FWorldContext *>(this, "FHeadMountedDisplay.OnEndGameFrame", WorldContext); }
	void OnScreenModeChange(EWindowMode::Type WindowMode) { NativeCall<void, EWindowMode::Type>(this, "FHeadMountedDisplay.OnScreenModeChange", WindowMode); }
	bool OnStartGameFrame(FWorldContext * WorldContext) { return NativeCall<bool, FWorldContext *>(this, "FHeadMountedDisplay.OnStartGameFrame", WorldContext); }
	void ResetControlRotation() { NativeCall<void>(this, "FHeadMountedDisplay.ResetControlRotation"); }
	void ResetStereoRenderingParams() { NativeCall<void>(this, "FHeadMountedDisplay.ResetStereoRenderingParams"); }
	void SetBaseOffsetInMeters(const FVector * BaseOffset) { NativeCall<void, const FVector *>(this, "FHeadMountedDisplay.SetBaseOffsetInMeters", BaseOffset); }
	void SetBaseOrientation(const FQuat * BaseOrient) { NativeCall<void, const FQuat *>(this, "FHeadMountedDisplay.SetBaseOrientation", BaseOrient); }
	void SetBaseRotation(const FRotator * BaseRot) { NativeCall<void, const FRotator *>(this, "FHeadMountedDisplay.SetBaseRotation", BaseRot); }
	void SetClippingPlanes(float NCP, float FCP) { NativeCall<void, float, float>(this, "FHeadMountedDisplay.SetClippingPlanes", NCP, FCP); }
	void SetInterpupillaryDistance(float NewInterpupillaryDistance) { NativeCall<void, float>(this, "FHeadMountedDisplay.SetInterpupillaryDistance", NewInterpupillaryDistance); }
	void SetPositionScale3D(FVector PosScale3D) { NativeCall<void, FVector>(this, "FHeadMountedDisplay.SetPositionScale3D", PosScale3D); }
	void SetScreenPercentage(float InScreenPercentage) { NativeCall<void, float>(this, "FHeadMountedDisplay.SetScreenPercentage", InScreenPercentage); }
	void UpdatePlayerCameraRotation(APlayerCameraManager * Camera, FMinimalViewInfo * POV) { NativeCall<void, APlayerCameraManager *, FMinimalViewInfo *>(this, "FHeadMountedDisplay.UpdatePlayerCameraRotation", Camera, POV); }
};

struct FOculusRiftHMD : FHeadMountedDisplay
{
	char __padding[0x1e8L];
	FieldArray<FHMDViewMesh, 2> HiddenAreaMeshesField() { return {this, "FOculusRiftHMD.HiddenAreaMeshes"}; }
	FieldArray<FHMDViewMesh, 2> VisibleAreaMeshesField() { return {this, "FOculusRiftHMD.VisibleAreaMeshes"}; }
	TRefCountPtr<OculusRift::FCustomPresent>& pCustomPresentField() { return *GetNativePointerField<TRefCountPtr<OculusRift::FCustomPresent>*>(this, "FOculusRiftHMD.pCustomPresent"); }
	ovrHmdStruct * HmdField() { return GetNativePointerField<ovrHmdStruct *>(this, "FOculusRiftHMD.Hmd"); }
	ovrHmdDesc_& HmdDescField() { return *GetNativePointerField<ovrHmdDesc_*>(this, "FOculusRiftHMD.HmdDesc"); }
	ovrGraphicsLuid_& LuidField() { return *GetNativePointerField<ovrGraphicsLuid_*>(this, "FOculusRiftHMD.Luid"); }
	TWeakPtr<SWindow,0>& CachedWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FOculusRiftHMD.CachedWindow"); }
	int& LastSubmitFrameResultField() { return *GetNativePointerField<int*>(this, "FOculusRiftHMD.LastSubmitFrameResult"); }
	long double& LastTimeAliveField() { return *GetNativePointerField<long double*>(this, "FOculusRiftHMD.LastTimeAlive"); }
	float& DefaultResXField() { return *GetNativePointerField<float*>(this, "FOculusRiftHMD.DefaultResX"); }
	float& DefaultResYField() { return *GetNativePointerField<float*>(this, "FOculusRiftHMD.DefaultResY"); }
	FOculusRiftHMD::<unnamed_type_OCFlags>& OCFlagsField() { return *GetNativePointerField<FOculusRiftHMD::<unnamed_type_OCFlags>*>(this, "FOculusRiftHMD.OCFlags"); }

	// Functions

	bool D3D11Bridge(unsigned int SizeX, unsigned int SizeY, char Format, unsigned int NumMips, unsigned int InFlags, unsigned int TargetableTextureFlags, TRefCountPtr<FRHITexture2D> * OutTargetableTexture, TRefCountPtr<FRHITexture2D> * OutShaderResourceTexture, unsigned int NumSamples) { return NativeCall<bool, unsigned int, unsigned int, char, unsigned int, unsigned int, unsigned int, TRefCountPtr<FRHITexture2D> *, TRefCountPtr<FRHITexture2D> *, unsigned int>(this, "FOculusRiftHMD.D3D11Bridge", SizeX, SizeY, Format, NumMips, InFlags, TargetableTextureFlags, OutTargetableTexture, OutShaderResourceTexture, NumSamples); }
	bool AllocateRenderTargetTexture(unsigned int Index, unsigned int SizeX, unsigned int SizeY, char Format, unsigned int NumMips, unsigned int InFlags, unsigned int TargetableTextureFlags, TRefCountPtr<FRHITexture2D> * OutTargetableTexture, TRefCountPtr<FRHITexture2D> * OutShaderResourceTexture, unsigned int NumSamples) { return NativeCall<bool, unsigned int, unsigned int, unsigned int, char, unsigned int, unsigned int, unsigned int, TRefCountPtr<FRHITexture2D> *, TRefCountPtr<FRHITexture2D> *, unsigned int>(this, "FOculusRiftHMD.AllocateRenderTargetTexture", Index, SizeX, SizeY, Format, NumMips, InFlags, TargetableTextureFlags, OutTargetableTexture, OutShaderResourceTexture, NumSamples); }
	void ApplySystemOverridesOnStereo(bool force) { NativeCall<void, bool>(this, "FOculusRiftHMD.ApplySystemOverridesOnStereo", force); }
	void D3D11Bridge(FHMDViewExtension * InRenderContext, const TRefCountPtr<FRHITexture2D> * RT) { NativeCall<void, FHMDViewExtension *, const TRefCountPtr<FRHITexture2D> *>(this, "FOculusRiftHMD.D3D11Bridge", InRenderContext, RT); }
	void CalculateRenderTargetSize(const FViewport * Viewport, unsigned int * InOutSizeX, unsigned int * InOutSizeY) { NativeCall<void, const FViewport *, unsigned int *, unsigned int *>(this, "FOculusRiftHMD.CalculateRenderTargetSize", Viewport, InOutSizeX, InOutSizeY); }
	void CalculateStereoViewOffset(const EStereoscopicPass StereoPassType, const FRotator * ViewRotation, const float WorldToMeters, FVector * ViewLocation) { NativeCall<void, const EStereoscopicPass, const FRotator *, const float, FVector *>(this, "FOculusRiftHMD.CalculateStereoViewOffset", StereoPassType, ViewRotation, WorldToMeters, ViewLocation); }
	void CopyTexture_RenderThread(FRHICommandListImmediate * RHICmdList, FRHITexture2D * DstTexture, FRHITexture2D * SrcTexture, FIntRect DstRect, FIntRect SrcRect) { NativeCall<void, FRHICommandListImmediate *, FRHITexture2D *, FRHITexture2D *, FIntRect, FIntRect>(this, "FOculusRiftHMD.CopyTexture_RenderThread", RHICmdList, DstTexture, SrcTexture, DstRect, SrcRect); }
	void DissmissWarning() { NativeCall<void>(this, "FOculusRiftHMD.DissmissWarning"); }
	bool DoEnableStereo(bool bStereo, bool bApplyToHmd) { return NativeCall<bool, bool, bool>(this, "FOculusRiftHMD.DoEnableStereo", bStereo, bApplyToHmd); }
	bool DoesSupportPositionalTracking() { return NativeCall<bool>(this, "FOculusRiftHMD.DoesSupportPositionalTracking"); }
	void DrawHiddenAreaMesh_RenderThread(FRHICommandList * RHICmdList, EStereoscopicPass StereoPass) { NativeCall<void, FRHICommandList *, EStereoscopicPass>(this, "FOculusRiftHMD.DrawHiddenAreaMesh_RenderThread", RHICmdList, StereoPass); }
	void DrawVisibleAreaMesh_RenderThread(FRHICommandList * RHICmdList, EStereoscopicPass StereoPass) { NativeCall<void, FRHICommandList *, EStereoscopicPass>(this, "FOculusRiftHMD.DrawVisibleAreaMesh_RenderThread", RHICmdList, StereoPass); }
	void EnableLowPersistenceMode(bool Enable) { NativeCall<void, bool>(this, "FOculusRiftHMD.EnableLowPersistenceMode", Enable); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FOculusRiftHMD.Exec", InWorld, Cmd, Ar); }
	void D3D11Bridge() { NativeCall<void>(this, "FOculusRiftHMD.D3D11Bridge"); }
	void GetCurrentPose(FQuat * CurrentHmdOrientation, FVector * CurrentHmdPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera) { NativeCall<void, FQuat *, FVector *, bool, bool>(this, "FOculusRiftHMD.GetCurrentPose", CurrentHmdOrientation, CurrentHmdPosition, bUseOrienationForPlayerCamera, bUsePositionForPlayerCamera); }
	FRHICustomPresent * GetCustomPresent() { return NativeCall<FRHICustomPresent *>(this, "FOculusRiftHMD.GetCustomPresent"); }
	bool GetHMDMonitorInfo(IHeadMountedDisplay::MonitorInfo * MonitorDesc) { return NativeCall<bool, IHeadMountedDisplay::MonitorInfo *>(this, "FOculusRiftHMD.GetHMDMonitorInfo", MonitorDesc); }
	void GetOrthoProjection(int RTWidth, int RTHeight, float OrthoDistance, FMatrix * OrthoProjection) { NativeCall<void, int, int, float, FMatrix *>(this, "FOculusRiftHMD.GetOrthoProjection", RTWidth, RTHeight, OrthoDistance, OrthoProjection); }
	void GetPositionalTrackingCameraProperties(FVector * OutOrigin, FQuat * OutOrientation, float * OutHFOV, float * OutVFOV, float * OutCameraDistance, float * OutNearPlane, float * OutFarPlane) { NativeCall<void, FVector *, FQuat *, float *, float *, float *, float *, float *>(this, "FOculusRiftHMD.GetPositionalTrackingCameraProperties", OutOrigin, OutOrientation, OutHFOV, OutVFOV, OutCameraDistance, OutNearPlane, OutFarPlane); }
	void GetRawSensorData(FHeadMountedDisplay::SensorData * OutData) { NativeCall<void, FHeadMountedDisplay::SensorData *>(this, "FOculusRiftHMD.GetRawSensorData", OutData); }
	FMatrix * GetStereoProjectionMatrix(FMatrix * result, const EStereoscopicPass StereoPassType, const float FOV) { return NativeCall<FMatrix *, FMatrix *, const EStereoscopicPass, const float>(this, "FOculusRiftHMD.GetStereoProjectionMatrix", result, StereoPassType, FOV); }
	bool GetUserProfile(FHeadMountedDisplay::UserProfile * OutProfile) { return NativeCall<bool, FHeadMountedDisplay::UserProfile *>(this, "FOculusRiftHMD.GetUserProfile", OutProfile); }
	FString * GetVersionString(FString * result) { return NativeCall<FString *, FString *>(this, "FOculusRiftHMD.GetVersionString", result); }
	bool HasHiddenAreaMesh() { return NativeCall<bool>(this, "FOculusRiftHMD.HasHiddenAreaMesh"); }
	bool HasValidTrackingPosition() { return NativeCall<bool>(this, "FOculusRiftHMD.HasValidTrackingPosition"); }
	bool HasVisibleAreaMesh() { return NativeCall<bool>(this, "FOculusRiftHMD.HasVisibleAreaMesh"); }
	bool InitDevice() { return NativeCall<bool>(this, "FOculusRiftHMD.InitDevice"); }
	bool IsHMDActive() { return NativeCall<bool>(this, "FOculusRiftHMD.IsHMDActive"); }
	bool IsHMDConnected() { return NativeCall<bool>(this, "FOculusRiftHMD.IsHMDConnected"); }
	bool IsHeadTrackingAllowed() { return NativeCall<bool>(this, "FOculusRiftHMD.IsHeadTrackingAllowed"); }
	void LoadFromIni() { NativeCall<void>(this, "FOculusRiftHMD.LoadFromIni"); }
	bool NeedReAllocateViewportRenderTarget(const FViewport * Viewport) { return NativeCall<bool, const FViewport *>(this, "FOculusRiftHMD.NeedReAllocateViewportRenderTarget", Viewport); }
	void OnBeginPlay() { NativeCall<void>(this, "FOculusRiftHMD.OnBeginPlay"); }
	bool OnOculusStateChange(bool bIsEnabledNow) { return NativeCall<bool, bool>(this, "FOculusRiftHMD.OnOculusStateChange", bIsEnabledNow); }
	bool OnStartGameFrame(FWorldContext * WorldContext) { return NativeCall<bool, FWorldContext *>(this, "FOculusRiftHMD.OnStartGameFrame", WorldContext); }
	void RecordAnalytics() { NativeCall<void>(this, "FOculusRiftHMD.RecordAnalytics"); }
	void ReleaseDevice() { NativeCall<void>(this, "FOculusRiftHMD.ReleaseDevice"); }
	void RenderTexture_RenderThread(FRHICommandListImmediate * RHICmdList, FRHITexture2D * BackBuffer, FRHITexture2D * SrcTexture) { NativeCall<void, FRHICommandListImmediate *, FRHITexture2D *, FRHITexture2D *>(this, "FOculusRiftHMD.RenderTexture_RenderThread", RHICmdList, BackBuffer, SrcTexture); }
	void D3D11Bridge() { NativeCall<void>(this, "FOculusRiftHMD.D3D11Bridge"); }
	void ResetOrientation(float yaw) { NativeCall<void, float>(this, "FOculusRiftHMD.ResetOrientation", yaw); }
	void ResetOrientationAndPosition(float yaw) { NativeCall<void, float>(this, "FOculusRiftHMD.ResetOrientationAndPosition", yaw); }
	void ResetPosition() { NativeCall<void>(this, "FOculusRiftHMD.ResetPosition"); }
	void ResetStereoRenderingParams() { NativeCall<void>(this, "FOculusRiftHMD.ResetStereoRenderingParams"); }
	void D3D11Bridge() { NativeCall<void>(this, "FOculusRiftHMD.D3D11Bridge"); }
	void SaveToIni() { NativeCall<void>(this, "FOculusRiftHMD.SaveToIni"); }
	void D3D11Bridge(ovrHmdStruct * InHmd) { NativeCall<void, ovrHmdStruct *>(this, "FOculusRiftHMD.D3D11Bridge", InHmd); }
	void SetupOcclusionMeshes() { NativeCall<void>(this, "FOculusRiftHMD.SetupOcclusionMeshes"); }
	void SetupView(FSceneViewFamily * InViewFamily, FSceneView * InView) { NativeCall<void, FSceneViewFamily *, FSceneView *>(this, "FOculusRiftHMD.SetupView", InViewFamily, InView); }
	void SetupViewFamily(FSceneViewFamily * InViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "FOculusRiftHMD.SetupViewFamily", InViewFamily); }
	void Shutdown() { NativeCall<void>(this, "FOculusRiftHMD.Shutdown"); }
	void Startup() { NativeCall<void>(this, "FOculusRiftHMD.Startup"); }
	void UpdateHmdCaps() { NativeCall<void>(this, "FOculusRiftHMD.UpdateHmdCaps"); }
	void UpdateHmdRenderInfo() { NativeCall<void>(this, "FOculusRiftHMD.UpdateHmdRenderInfo"); }
	void UpdateStereoRenderingParams() { NativeCall<void>(this, "FOculusRiftHMD.UpdateStereoRenderingParams"); }
	void UpdateViewport(bool bUseSeparateRenderTarget, const FViewport * InViewport, SViewport * ViewportWidget) { NativeCall<void, bool, const FViewport *, SViewport *>(this, "FOculusRiftHMD.UpdateViewport", bUseSeparateRenderTarget, InViewport, ViewportWidget); }
};

