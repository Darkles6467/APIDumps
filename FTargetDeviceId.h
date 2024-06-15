#pragma once

#include "BaseDeclarations.h"
struct FTargetDeviceId
{
	char __padding[0x20L];
	FString& PlatformNameField() { return *GetNativePointerField<FString*>(this, "FTargetDeviceId.PlatformName"); }
	FString& DeviceNameField() { return *GetNativePointerField<FString*>(this, "FTargetDeviceId.DeviceName"); }
};

