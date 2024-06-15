#pragma once

#include "BaseDeclarations.h"
struct FDateTime
{
	char __padding[0x8L];
	__int64& TicksField() { return *GetNativePointerField<__int64*>(this, "FDateTime.Ticks"); }

	// Functions

	int ToUnixTimestamp() { return NativeCall<int>(this, "FDateTime.ToUnixTimestamp"); }
	FTimespan * operator-(FTimespan * result, const FDateTime * Other) { return NativeCall<FTimespan *, FTimespan *, const FDateTime *>(this, "FDateTime.operator-", result, Other); }
	static FDateTime * FromUnixTimestamp(FDateTime * result, int UnixTime) { return NativeCall<FDateTime *, FDateTime *, int>(nullptr, "FDateTime.FromUnixTimestamp", result, UnixTime); }
	int GetHour() { return NativeCall<int>(this, "FDateTime.GetHour"); }
	int GetMillisecond() { return NativeCall<int>(this, "FDateTime.GetMillisecond"); }
	int GetMinute() { return NativeCall<int>(this, "FDateTime.GetMinute"); }
	static int DaysInMonth(int Year, int Month) { return NativeCall<int, int, int>(nullptr, "FDateTime.DaysInMonth", Year, Month); }
	static int DaysInYear(int Year) { return NativeCall<int, int>(nullptr, "FDateTime.DaysInYear", Year); }
	bool ExportTextItem(FString * ValueStr, const FDateTime * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const FDateTime *, UObject *, int, UObject *>(this, "FDateTime.ExportTextItem", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	int GetDay() { return NativeCall<int>(this, "FDateTime.GetDay"); }
	EDayOfWeek::Type GetDayOfWeek() { return NativeCall<EDayOfWeek::Type>(this, "FDateTime.GetDayOfWeek"); }
	int GetDayOfYear() { return NativeCall<int>(this, "FDateTime.GetDayOfYear"); }
	int GetHour12() { return NativeCall<int>(this, "FDateTime.GetHour12"); }
	int GetMonth() { return NativeCall<int>(this, "FDateTime.GetMonth"); }
	int GetYear() { return NativeCall<int>(this, "FDateTime.GetYear"); }
	bool ImportTextItem(const wchar_t ** Buffer, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<bool, const wchar_t **, int, UObject *, FOutputDevice *>(this, "FDateTime.ImportTextItem", Buffer, PortFlags, Parent, ErrorText); }
	static bool IsLeapYear(int Year) { return NativeCall<bool, int>(nullptr, "FDateTime.IsLeapYear", Year); }
	static FDateTime * Now(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "FDateTime.Now", result); }
	static bool Parse(const FString * DateTimeString, FDateTime * OutDateTime) { return NativeCall<bool, const FString *, FDateTime *>(nullptr, "FDateTime.Parse", DateTimeString, OutDateTime); }
	FString * ToIso8601(FString * result) { return NativeCall<FString *, FString *>(this, "FDateTime.ToIso8601", result); }
	FString * ToString(FString * result, const wchar_t * Format) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FDateTime.ToString", result, Format); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FDateTime.ToString", result); }
	FString * ToStringNoChar(FString * result) { return NativeCall<FString *, FString *>(this, "FDateTime.ToStringNoChar", result); }
	static FDateTime * UtcNow(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "FDateTime.UtcNow", result); }
};

