#pragma once

#include "BaseDeclarations.h"
struct FGameBroadcastConfig
{
	char __padding[0x18L];
	int& FrameRateField() { return *GetNativePointerField<int*>(this, "FGameBroadcastConfig.FrameRate"); }
	float& ScreenScalingField() { return *GetNativePointerField<float*>(this, "FGameBroadcastConfig.ScreenScaling"); }
	bool& bEnableWebCamField() { return *GetNativePointerField<bool*>(this, "FGameBroadcastConfig.bEnableWebCam"); }
	int& DesiredWebCamWidthField() { return *GetNativePointerField<int*>(this, "FGameBroadcastConfig.DesiredWebCamWidth"); }
	int& DesiredWebCamHeightField() { return *GetNativePointerField<int*>(this, "FGameBroadcastConfig.DesiredWebCamHeight"); }
	bool& bMirrorWebCamImageField() { return *GetNativePointerField<bool*>(this, "FGameBroadcastConfig.bMirrorWebCamImage"); }
	bool& bCaptureAudioFromComputerField() { return *GetNativePointerField<bool*>(this, "FGameBroadcastConfig.bCaptureAudioFromComputer"); }
	bool& bCaptureAudioFromMicrophoneField() { return *GetNativePointerField<bool*>(this, "FGameBroadcastConfig.bCaptureAudioFromMicrophone"); }
	bool& bDrawSimpleWebCamVideoField() { return *GetNativePointerField<bool*>(this, "FGameBroadcastConfig.bDrawSimpleWebCamVideo"); }
};

