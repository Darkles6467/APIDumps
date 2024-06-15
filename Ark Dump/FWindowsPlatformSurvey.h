#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformSurvey
{
};

struct FWindowsPlatformSurvey : FGenericPlatformSurvey
{

	// Functions

	static FString * GetDxDiagOutputFilepath(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FWindowsPlatformSurvey.GetDxDiagOutputFilepath", result); }
	static bool GetLineFollowing(const FString * Token, const TArray<FString> * InLines, FString * OutString, int NthHit) { return NativeCall<bool, const FString *, const TArray<FString> *, FString *, int>(nullptr, "FWindowsPlatformSurvey.GetLineFollowing", Token, InLines, OutString, NthHit); }
	static bool GetNamedSection(FString SectionName, const TArray<FString> * InLines, TArray<FString> * OutSectionLines) { return NativeCall<bool, FString, const TArray<FString> *, TArray<FString> *>(nullptr, "FWindowsPlatformSurvey.GetNamedSection", SectionName, InLines, OutSectionLines); }
	static void GetOSVersionLabels(const _SYSTEM_INFO * SystemInfo, FHardwareSurveyResults * Results) { NativeCall<void, const _SYSTEM_INFO *, FHardwareSurveyResults *>(nullptr, "FWindowsPlatformSurvey.GetOSVersionLabels", SystemInfo, Results); }
	static bool GetSubComponentIndex(IProvideWinSATResultsInfo * WinSATResults, FHardwareSurveyResults * OutSurveyResults, int SubComponent, float * OutSubComponentIndex) { return NativeCall<bool, IProvideWinSATResultsInfo *, FHardwareSurveyResults *, int, float *>(nullptr, "FWindowsPlatformSurvey.GetSubComponentIndex", WinSATResults, OutSurveyResults, SubComponent, OutSubComponentIndex); }
	static bool GetSurveyResults(FHardwareSurveyResults * OutResults, bool bWait) { return NativeCall<bool, FHardwareSurveyResults *, bool>(nullptr, "FWindowsPlatformSurvey.GetSurveyResults", OutResults, bWait); }
	static void TickSurveyHardware(FHardwareSurveyResults * OutResults) { NativeCall<void, FHardwareSurveyResults *>(nullptr, "FWindowsPlatformSurvey.TickSurveyHardware", OutResults); }
	static void WriteFStringToResults(wchar_t * OutBuffer, const FString * InString) { NativeCall<void, wchar_t *, const FString *>(nullptr, "FWindowsPlatformSurvey.WriteFStringToResults", OutBuffer, InString); }
};

