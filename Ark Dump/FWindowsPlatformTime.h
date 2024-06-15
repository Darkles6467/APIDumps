#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformTime
{

	// Functions

	static long double GetSecondsPerCycle() { return NativeCall<long double>(nullptr, "FGenericPlatformTime.GetSecondsPerCycle"); }
	static wchar_t * StrTime(wchar_t * Dest, unsigned __int64 DestSize) { return NativeCall<wchar_t *, wchar_t *, unsigned __int64>(nullptr, "FGenericPlatformTime.StrTime", Dest, DestSize); }
	static const wchar_t * StrTimestamp() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformTime.StrTimestamp"); }
};

struct FWindowsPlatformTime : FGenericPlatformTime
{

	// Functions

	static FCPUTime * GetCPUTime(FCPUTime * result) { return NativeCall<FCPUTime *, FCPUTime *>(nullptr, "FWindowsPlatformTime.GetCPUTime", result); }
	static long double InitTiming() { return NativeCall<long double>(nullptr, "FWindowsPlatformTime.InitTiming"); }
	static unsigned int SimpleUTCTimeSeconds() { return NativeCall<unsigned int>(nullptr, "FWindowsPlatformTime.SimpleUTCTimeSeconds"); }
	static void SystemTime(int * Year, int * Month, int * DayOfWeek, int * Day, int * Hour, int * Min, int * Sec, int * MSec) { NativeCall<void, int *, int *, int *, int *, int *, int *, int *, int *>(nullptr, "FWindowsPlatformTime.SystemTime", Year, Month, DayOfWeek, Day, Hour, Min, Sec, MSec); }
	static bool UpdateCPUTime(float __formal) { return NativeCall<bool, float>(nullptr, "FWindowsPlatformTime.UpdateCPUTime", __formal); }
	static void UtcTime(int * Year, int * Month, int * DayOfWeek, int * Day, int * Hour, int * Min, int * Sec, int * MSec) { NativeCall<void, int *, int *, int *, int *, int *, int *, int *, int *>(nullptr, "FWindowsPlatformTime.UtcTime", Year, Month, DayOfWeek, Day, Hour, Min, Sec, MSec); }
};

