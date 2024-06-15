#pragma once

#include "BaseDeclarations.h"
#include "FColor.h"

struct FScreenshotRequest
{

	// Functions

	static void CreateViewportScreenShotFilename(FString * InOutFilename) { NativeCall<void, FString *>(nullptr, "FScreenshotRequest.CreateViewportScreenShotFilename", InOutFilename); }
	static TArray<FColor> * GetHighresScreenshotMaskColorArray() { return NativeCall<TArray<FColor> *>(nullptr, "FScreenshotRequest.GetHighresScreenshotMaskColorArray"); }
	static void RequestScreenshot(const FString * InFilename, bool bInShowUI) { NativeCall<void, const FString *, bool>(nullptr, "FScreenshotRequest.RequestScreenshot", InFilename, bInShowUI); }
	static void RequestScreenshot(bool bInShowUI) { NativeCall<void, bool>(nullptr, "FScreenshotRequest.RequestScreenshot", bInShowUI); }
};

