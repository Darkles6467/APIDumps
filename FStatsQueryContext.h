#pragma once

#include "BaseDeclarations.h"
struct FStatsQueryContext
{
	char __padding[0x70L];
	int& NumPlayerReadsField() { return *GetNativePointerField<int*>(this, "FStatsQueryContext.NumPlayerReads"); }
	TArray<FString>& StatNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FStatsQueryContext.StatNames"); }
};

