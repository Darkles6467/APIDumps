#pragma once

#include "BaseDeclarations.h"
struct FMonitorInfo
{
	char __padding[0x30L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FMonitorInfo.Name"); }
	FString& IDField() { return *GetNativePointerField<FString*>(this, "FMonitorInfo.ID"); }
	int& NativeWidthField() { return *GetNativePointerField<int*>(this, "FMonitorInfo.NativeWidth"); }
	int& NativeHeightField() { return *GetNativePointerField<int*>(this, "FMonitorInfo.NativeHeight"); }
	bool& bIsPrimaryField() { return *GetNativePointerField<bool*>(this, "FMonitorInfo.bIsPrimary"); }
};

