#pragma once

#include "BaseDeclarations.h"
struct FParse
{

	// Functions

	static bool AlnumToken(const wchar_t ** Str, FString * Arg) { return NativeCall<bool, const wchar_t **, FString *>(nullptr, "FParse.AlnumToken", Str, Arg); }
	static bool Bool(const wchar_t * Stream, const wchar_t * Match, bool * OnOff) { return NativeCall<bool, const wchar_t *, const wchar_t *, bool *>(nullptr, "FParse.Bool", Stream, Match, OnOff); }
	static bool Command(const wchar_t ** Stream, const wchar_t * Match, bool bParseMightTriggerExecution) { return NativeCall<bool, const wchar_t **, const wchar_t *, bool>(nullptr, "FParse.Command", Stream, Match, bParseMightTriggerExecution); }
	static unsigned int HexNumber(const wchar_t * HexString) { return NativeCall<unsigned int, const wchar_t *>(nullptr, "FParse.HexNumber", HexString); }
	static bool Line(const wchar_t ** Stream, FString * Result, bool Exact) { return NativeCall<bool, const wchar_t **, FString *, bool>(nullptr, "FParse.Line", Stream, Result, Exact); }
	static bool Line(const wchar_t ** Stream, wchar_t * Result, int MaxLen, bool Exact) { return NativeCall<bool, const wchar_t **, wchar_t *, int, bool>(nullptr, "FParse.Line", Stream, Result, MaxLen, Exact); }
	static bool LineExtended(const wchar_t ** Stream, FString * Result, int * LinesConsumed, bool Exact) { return NativeCall<bool, const wchar_t **, FString *, int *, bool>(nullptr, "FParse.LineExtended", Stream, Result, LinesConsumed, Exact); }
	static void Next(const wchar_t ** Stream) { NativeCall<void, const wchar_t **>(nullptr, "FParse.Next", Stream); }
	static bool Param(const wchar_t * Stream, const wchar_t * Param) { return NativeCall<bool, const wchar_t *, const wchar_t *>(nullptr, "FParse.Param", Stream, Param); }
	static bool Resolution(const wchar_t * InResolution, unsigned int * OutX, unsigned int * OutY) { return NativeCall<bool, const wchar_t *, unsigned int *, unsigned int *>(nullptr, "FParse.Resolution", InResolution, OutX, OutY); }
	static bool Resolution(const wchar_t * InResolution, unsigned int * OutX, unsigned int * OutY, int * OutWindowMode) { return NativeCall<bool, const wchar_t *, unsigned int *, unsigned int *, int *>(nullptr, "FParse.Resolution", InResolution, OutX, OutY, OutWindowMode); }
	static bool Text(const wchar_t * Str, FText * Value, const wchar_t * Namespace) { return NativeCall<bool, const wchar_t *, FText *, const wchar_t *>(nullptr, "FParse.Text", Str, Value, Namespace); }
	static FString * Token(FString * result, const wchar_t ** Str, bool UseEscape) { return NativeCall<FString *, FString *, const wchar_t **, bool>(nullptr, "FParse.Token", result, Str, UseEscape); }
	static bool Token(const wchar_t ** Str, FString * Arg, bool UseEscape) { return NativeCall<bool, const wchar_t **, FString *, bool>(nullptr, "FParse.Token", Str, Arg, UseEscape); }
	static bool Token(const wchar_t ** Str, wchar_t * Result, int MaxLen, bool UseEscape) { return NativeCall<bool, const wchar_t **, wchar_t *, int, bool>(nullptr, "FParse.Token", Str, Result, MaxLen, UseEscape); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, char * Value) { return NativeCall<bool, const wchar_t *, const wchar_t *, char *>(nullptr, "FParse.Value", Stream, Match, Value); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, int * Value) { return NativeCall<bool, const wchar_t *, const wchar_t *, int *>(nullptr, "FParse.Value", Stream, Match, Value); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, unsigned int * Value) { return NativeCall<bool, const wchar_t *, const wchar_t *, unsigned int *>(nullptr, "FParse.Value", Stream, Match, Value); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, float * Value) { return NativeCall<bool, const wchar_t *, const wchar_t *, float *>(nullptr, "FParse.Value", Stream, Match, Value); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, FName * Name) { return NativeCall<bool, const wchar_t *, const wchar_t *, FName *>(nullptr, "FParse.Value", Stream, Match, Name); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, FString * Value, bool bShouldStopOnComma) { return NativeCall<bool, const wchar_t *, const wchar_t *, FString *, bool>(nullptr, "FParse.Value", Stream, Match, Value, bShouldStopOnComma); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, FText * Value, const wchar_t * Namespace) { return NativeCall<bool, const wchar_t *, const wchar_t *, FText *, const wchar_t *>(nullptr, "FParse.Value", Stream, Match, Value, Namespace); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, __int64 * Value) { return NativeCall<bool, const wchar_t *, const wchar_t *, __int64 *>(nullptr, "FParse.Value", Stream, Match, Value); }
	static bool Value(const wchar_t * Stream, const wchar_t * Match, wchar_t * Value, int MaxLen, bool bShouldStopOnComma) { return NativeCall<bool, const wchar_t *, const wchar_t *, wchar_t *, int, bool>(nullptr, "FParse.Value", Stream, Match, Value, MaxLen, bShouldStopOnComma); }
};

