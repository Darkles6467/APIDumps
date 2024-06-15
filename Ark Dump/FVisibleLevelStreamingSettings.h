#pragma once

#include "BaseDeclarations.h"
struct FVisibleLevelStreamingSettings
{
	char __padding[0x3L];
	bool& bShouldBeVisibleField() { return *GetNativePointerField<bool*>(this, "FVisibleLevelStreamingSettings.bShouldBeVisible"); }
	bool& bShouldBlockOnLoadField() { return *GetNativePointerField<bool*>(this, "FVisibleLevelStreamingSettings.bShouldBlockOnLoad"); }
	bool& bShouldChangeVisibilityField() { return *GetNativePointerField<bool*>(this, "FVisibleLevelStreamingSettings.bShouldChangeVisibility"); }
};

