#pragma once

#include "BaseDeclarations.h"
struct FPackageNameAndLODIndex
{
	char __padding[0x18L];
	FString& PackageNameField() { return *GetNativePointerField<FString*>(this, "FPackageNameAndLODIndex.PackageName"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "FPackageNameAndLODIndex.LODIndex"); }
};

