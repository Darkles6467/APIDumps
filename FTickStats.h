#pragma once

#include "BaseDeclarations.h"
struct FTickStats
{
	char __padding[0x38L];
	FString& ObjectPathNameField() { return *GetNativePointerField<FString*>(this, "FTickStats.ObjectPathName"); }
	FString& ObjectDetailedInfoField() { return *GetNativePointerField<FString*>(this, "FTickStats.ObjectDetailedInfo"); }
	FName& ObjectClassFNameField() { return *GetNativePointerField<FName*>(this, "FTickStats.ObjectClassFName"); }
	int& GCIndexField() { return *GetNativePointerField<int*>(this, "FTickStats.GCIndex"); }
	float& TotalTimeField() { return *GetNativePointerField<float*>(this, "FTickStats.TotalTime"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FTickStats.Count"); }
	bool& bForSummaryField() { return *GetNativePointerField<bool*>(this, "FTickStats.bForSummary"); }
};

