#pragma once

#include "BaseDeclarations.h"
struct FTimespan
{
	char __padding[0x8L];
	__int64& TicksField() { return *GetNativePointerField<__int64*>(this, "FTimespan.Ticks"); }

	// Functions

	int GetSeconds() { return NativeCall<int>(this, "FTimespan.GetSeconds"); }
	long double GetTotalDays() { return NativeCall<long double>(this, "FTimespan.GetTotalDays"); }
	long double GetTotalMinutes() { return NativeCall<long double>(this, "FTimespan.GetTotalMinutes"); }
	long double GetTotalSeconds() { return NativeCall<long double>(this, "FTimespan.GetTotalSeconds"); }
	void Assign(int Days, int Hours, int Minutes, int Seconds, int Milliseconds) { NativeCall<void, int, int, int, int, int>(this, "FTimespan.Assign", Days, Hours, Minutes, Seconds, Milliseconds); }
	bool ExportTextItem(FString * ValueStr, const FTimespan * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const FTimespan *, UObject *, int, UObject *>(this, "FTimespan.ExportTextItem", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	static FTimespan * FromDays(FTimespan * result, long double Days) { return NativeCall<FTimespan *, FTimespan *, long double>(nullptr, "FTimespan.FromDays", result, Days); }
	static FTimespan * FromHours(FTimespan * result, long double Hours) { return NativeCall<FTimespan *, FTimespan *, long double>(nullptr, "FTimespan.FromHours", result, Hours); }
	static FTimespan * FromMilliseconds(FTimespan * result, long double Milliseconds) { return NativeCall<FTimespan *, FTimespan *, long double>(nullptr, "FTimespan.FromMilliseconds", result, Milliseconds); }
	static FTimespan * FromMinutes(FTimespan * result, long double Minutes) { return NativeCall<FTimespan *, FTimespan *, long double>(nullptr, "FTimespan.FromMinutes", result, Minutes); }
	static FTimespan * FromSeconds(FTimespan * result, long double Seconds) { return NativeCall<FTimespan *, FTimespan *, long double>(nullptr, "FTimespan.FromSeconds", result, Seconds); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FTimespan.Serialize", Ar); }
	FString * ToString(FString * result, const wchar_t * Format) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FTimespan.ToString", result, Format); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FTimespan.ToString", result); }
};

