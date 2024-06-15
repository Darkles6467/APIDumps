#pragma once

#include "BaseDeclarations.h"
struct FLevelStreamingStatus
{
	char __padding[0x10L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FLevelStreamingStatus.PackageName"); }
	unsigned int& LODIndexField() { return *GetNativePointerField<unsigned int*>(this, "FLevelStreamingStatus.LODIndex"); }

	// Functions

};

