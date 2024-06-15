#pragma once

#include "BaseDeclarations.h"
struct FFullyLoadedPackagesInfo
{
	char __padding[0x38L];
	TEnumAsByte<enum EFullyLoadPackageType>& FullyLoadTypeField() { return *GetNativePointerField<TEnumAsByte<enum EFullyLoadPackageType>*>(this, "FFullyLoadedPackagesInfo.FullyLoadType"); }
	FString& TagField() { return *GetNativePointerField<FString*>(this, "FFullyLoadedPackagesInfo.Tag"); }
	TArray<FName>& PackagesToLoadField() { return *GetNativePointerField<TArray<FName>*>(this, "FFullyLoadedPackagesInfo.PackagesToLoad"); }

	// Functions

};

