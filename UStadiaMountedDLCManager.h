#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMountedDLCManager : UObject
{
	char __padding[0x40L];
	TArray<FMountedDLCInfo>& MountedDLCsField() { return *GetNativePointerField<TArray<FMountedDLCInfo>*>(this, "UMountedDLCManager.MountedDLCs"); }
	TArray<FMountedDLCMapInfo>& MountedDLCMapsField() { return *GetNativePointerField<TArray<FMountedDLCMapInfo>*>(this, "UMountedDLCManager.MountedDLCMaps"); }

	// Functions

};

struct UStadiaMountedDLCManager : UMountedDLCManager
{
	char __padding[0x8L];

	// Functions

	bool IsTickable() { return NativeCall<bool>(this, "UStadiaMountedDLCManager.IsTickable"); }
};

