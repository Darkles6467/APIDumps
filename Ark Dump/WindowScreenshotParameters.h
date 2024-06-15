#pragma once

#include "BaseDeclarations.h"
struct WindowScreenshotParameters
{
	char __padding[0x20L];
	FString& ScreenshotNameField() { return *GetNativePointerField<FString*>(this, "WindowScreenshotParameters.ScreenshotName"); }
	TSharedPtr<SWindow,0>& CurrentWindowField() { return *GetNativePointerField<TSharedPtr<SWindow,0>*>(this, "WindowScreenshotParameters.CurrentWindow"); }
};

