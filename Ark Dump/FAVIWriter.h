#pragma once

#include "BaseDeclarations.h"
struct FAVIWriter
{
	char __padding[0x40L];
	FColor * ColorBufferField() { return GetNativePointerField<FColor *>(this, "FAVIWriter.ColorBuffer"); }
	int& MovieCaptureIndexField() { return *GetNativePointerField<int*>(this, "FAVIWriter.MovieCaptureIndex"); }
	bool& bCapturingField() { return *GetNativePointerField<bool*>(this, "FAVIWriter.bCapturing"); }
	bool& bReadyForCaptureField() { return *GetNativePointerField<bool*>(this, "FAVIWriter.bReadyForCapture"); }
	bool& bMatineeFinishedField() { return *GetNativePointerField<bool*>(this, "FAVIWriter.bMatineeFinished"); }
	TArray<FColor>& ViewportColorBufferField() { return *GetNativePointerField<TArray<FColor>*>(this, "FAVIWriter.ViewportColorBuffer"); }
	FSlateRenderer * CaptureSlateRendererField() { return GetNativePointerField<FSlateRenderer *>(this, "FAVIWriter.CaptureSlateRenderer"); }
	int& FrameNumberField() { return *GetNativePointerField<int*>(this, "FAVIWriter.FrameNumber"); }
	float& CurrentAccumSecondsField() { return *GetNativePointerField<float*>(this, "FAVIWriter.CurrentAccumSeconds"); }
};

