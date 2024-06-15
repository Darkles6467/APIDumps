#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDeviceProfileManager : UObject
{
	char __padding[0x40L];
	UDeviceProfile * ActiveDeviceProfileField() { return GetNativePointerField<UDeviceProfile *>(this, "UDeviceProfileManager.ActiveDeviceProfile"); }
	int& RenameIndexField() { return *GetNativePointerField<int*>(this, "UDeviceProfileManager.RenameIndex"); }

	// Functions

};

