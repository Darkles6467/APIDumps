#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDeviceProfile : UObject
{
	char __padding[0x48L];
	FString& DeviceTypeField() { return *GetNativePointerField<FString*>(this, "UDeviceProfile.DeviceType"); }
	FString& BaseProfileNameField() { return *GetNativePointerField<FString*>(this, "UDeviceProfile.BaseProfileName"); }
	bool& bVisibleField() { return *GetNativePointerField<bool*>(this, "UDeviceProfile.bVisible"); }
	TArray<FString>& CVarsField() { return *GetNativePointerField<TArray<FString>*>(this, "UDeviceProfile.CVars"); }

	// Functions

};

