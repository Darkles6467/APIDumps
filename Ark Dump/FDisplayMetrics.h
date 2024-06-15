#pragma once

#include "BaseDeclarations.h"
struct FDisplayMetrics
{
	char __padding[0x48L];
	int& PrimaryDisplayWidthField() { return *GetNativePointerField<int*>(this, "FDisplayMetrics.PrimaryDisplayWidth"); }
	int& PrimaryDisplayHeightField() { return *GetNativePointerField<int*>(this, "FDisplayMetrics.PrimaryDisplayHeight"); }
	TArray<FMonitorInfo>& MonitorInfoField() { return *GetNativePointerField<TArray<FMonitorInfo>*>(this, "FDisplayMetrics.MonitorInfo"); }
	FPlatformRect& PrimaryDisplayWorkAreaRectField() { return *GetNativePointerField<FPlatformRect*>(this, "FDisplayMetrics.PrimaryDisplayWorkAreaRect"); }
	FPlatformRect& VirtualDisplayRectField() { return *GetNativePointerField<FPlatformRect*>(this, "FDisplayMetrics.VirtualDisplayRect"); }
	FVector2D& TitleSafePaddingSizeField() { return *GetNativePointerField<FVector2D*>(this, "FDisplayMetrics.TitleSafePaddingSize"); }
	FVector2D& ActionSafePaddingSizeField() { return *GetNativePointerField<FVector2D*>(this, "FDisplayMetrics.ActionSafePaddingSize"); }

	// Functions

	static void GetDisplayMetrics(FDisplayMetrics * OutDisplayMetrics) { NativeCall<void, FDisplayMetrics *>(nullptr, "FDisplayMetrics.GetDisplayMetrics", OutDisplayMetrics); }
};

