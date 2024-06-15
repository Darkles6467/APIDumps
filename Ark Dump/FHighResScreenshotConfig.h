#pragma once

#include "BaseDeclarations.h"
#include "FSceneViewport.h"
#include "FColor.h"

struct FHighResScreenshotConfig
{
	char __padding[0x68L];
	FIntRect& UnscaledCaptureRegionField() { return *GetNativePointerField<FIntRect*>(this, "FHighResScreenshotConfig.UnscaledCaptureRegion"); }
	FIntRect& CaptureRegionField() { return *GetNativePointerField<FIntRect*>(this, "FHighResScreenshotConfig.CaptureRegion"); }
	float& ResolutionMultiplierField() { return *GetNativePointerField<float*>(this, "FHighResScreenshotConfig.ResolutionMultiplier"); }
	float& ResolutionMultiplierScaleField() { return *GetNativePointerField<float*>(this, "FHighResScreenshotConfig.ResolutionMultiplierScale"); }
	bool& bMaskEnabledField() { return *GetNativePointerField<bool*>(this, "FHighResScreenshotConfig.bMaskEnabled"); }
	bool& bDumpBufferVisualizationTargetsField() { return *GetNativePointerField<bool*>(this, "FHighResScreenshotConfig.bDumpBufferVisualizationTargets"); }
	bool& bDisplayCaptureRegionField() { return *GetNativePointerField<bool*>(this, "FHighResScreenshotConfig.bDisplayCaptureRegion"); }
	bool& bCaptureHDRField() { return *GetNativePointerField<bool*>(this, "FHighResScreenshotConfig.bCaptureHDR"); }

	// Functions

	void ChangeViewport(TWeakPtr<FSceneViewport,0> InViewport) { NativeCall<void, TWeakPtr<FSceneViewport,0>>(this, "FHighResScreenshotConfig.ChangeViewport", InViewport); }
	void Init() { NativeCall<void>(this, "FHighResScreenshotConfig.Init"); }
	bool MergeMaskIntoAlpha(TArray<FColor> * InBitmap) { return NativeCall<bool, TArray<FColor> *>(this, "FHighResScreenshotConfig.MergeMaskIntoAlpha", InBitmap); }
	bool ParseConsoleCommand(const FString * InCmd, FOutputDevice * Ar) { return NativeCall<bool, const FString *, FOutputDevice *>(this, "FHighResScreenshotConfig.ParseConsoleCommand", InCmd, Ar); }
};

