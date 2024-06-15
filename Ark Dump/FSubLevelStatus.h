#pragma once

#include "BaseDeclarations.h"
struct FSubLevelStatus
{
	char __padding[0x14L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FSubLevelStatus.PackageName"); }
	EStreamingStatus& StreamingStatusField() { return *GetNativePointerField<EStreamingStatus*>(this, "FSubLevelStatus.StreamingStatus"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "FSubLevelStatus.LODIndex"); }
	bool& bPlayerInsideField() { return *GetNativePointerField<bool*>(this, "FSubLevelStatus.bPlayerInside"); }
};

