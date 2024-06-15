#pragma once

#include "BaseDeclarations.h"
struct FServerProfiler
{
	char __padding[0x3f0L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FServerProfiler.bInitialized"); }
	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "FServerProfiler.bActive"); }
	FString& FilePrefixField() { return *GetNativePointerField<FString*>(this, "FServerProfiler.FilePrefix"); }
	long double& StartFrameTimeField() { return *GetNativePointerField<long double*>(this, "FServerProfiler.StartFrameTime"); }
	long double& LastTimeFastReportingField() { return *GetNativePointerField<long double*>(this, "FServerProfiler.LastTimeFastReporting"); }
	long double& LastTimeMediumReportingField() { return *GetNativePointerField<long double*>(this, "FServerProfiler.LastTimeMediumReporting"); }
	long double& LastTimeSlowReportingField() { return *GetNativePointerField<long double*>(this, "FServerProfiler.LastTimeSlowReporting"); }
	long double& InitialStartTimeField() { return *GetNativePointerField<long double*>(this, "FServerProfiler.InitialStartTime"); }
	bool& bIsFastActiveFrameField() { return *GetNativePointerField<bool*>(this, "FServerProfiler.bIsFastActiveFrame"); }
	bool& bIsMediumActiveFrameField() { return *GetNativePointerField<bool*>(this, "FServerProfiler.bIsMediumActiveFrame"); }
	char& FastIndentField() { return *GetNativePointerField<char*>(this, "FServerProfiler.FastIndent"); }
	TArray<FServerProfiler::FNamedMarks>& NamedMarksField() { return *GetNativePointerField<TArray<FServerProfiler::FNamedMarks>*>(this, "FServerProfiler.NamedMarks"); }
	TArray<FServerProfiler::FNameGroupedData>& GroupedDataFastField() { return *GetNativePointerField<TArray<FServerProfiler::FNameGroupedData>*>(this, "FServerProfiler.GroupedDataFast"); }

	// Functions

	void FMediumFrameScopeTime() { NativeCall<void>(this, "FServerProfiler.FMediumFrameScopeTime"); }
	void FFastFrameScopeTime() { NativeCall<void>(this, "FServerProfiler.FFastFrameScopeTime"); }
	void FServerFrame() { NativeCall<void>(this, "FServerProfiler.FServerFrame"); }
	void EndFrame(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FServerProfiler.EndFrame", InWorld); }
	void MarkFrame(const FName * InMark) { NativeCall<void, const FName *>(this, "FServerProfiler.MarkFrame", InMark); }
	int ProfileElementFastStart(const FName * Name) { return NativeCall<int, const FName *>(this, "FServerProfiler.ProfileElementFastStart", Name); }
	void ProfileElementFastStop(int Index, float DurationMS) { NativeCall<void, int, float>(this, "FServerProfiler.ProfileElementFastStop", Index, DurationMS); }
	void ProfileElementMedium(const FName * Name, char TickGroup, float DurationMS) { NativeCall<void, const FName *, char, float>(this, "FServerProfiler.ProfileElementMedium", Name, TickGroup, DurationMS); }
	void StartFrame(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FServerProfiler.StartFrame", InWorld); }
};

