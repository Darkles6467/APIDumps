#pragma once

#include "BaseDeclarations.h"
struct FDetailedTickStats
{
	char __padding[0xf0L];
	TArray<FTickStats>& AllStatsField() { return *GetNativePointerField<TArray<FTickStats>*>(this, "FDetailedTickStats.AllStats"); }
	int& GCIndexField() { return *GetNativePointerField<int*>(this, "FDetailedTickStats.GCIndex"); }
	bool& GCCallBackRegisteredField() { return *GetNativePointerField<bool*>(this, "FDetailedTickStats.GCCallBackRegistered"); }
	int& NumObjectsToReportField() { return *GetNativePointerField<int*>(this, "FDetailedTickStats.NumObjectsToReport"); }
	float& TimeBetweenLogDumpsField() { return *GetNativePointerField<float*>(this, "FDetailedTickStats.TimeBetweenLogDumps"); }
	float& MinTimeBetweenLogDumpsField() { return *GetNativePointerField<float*>(this, "FDetailedTickStats.MinTimeBetweenLogDumps"); }
	long double& LastTimeOfLogDumpField() { return *GetNativePointerField<long double*>(this, "FDetailedTickStats.LastTimeOfLogDump"); }
	float& TimesToReportField() { return *GetNativePointerField<float*>(this, "FDetailedTickStats.TimesToReport"); }
	FString& OperationPerformedField() { return *GetNativePointerField<FString*>(this, "FDetailedTickStats.OperationPerformed"); }
};

