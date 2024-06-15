#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UKismetStringLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static FString * Conv_FloatToString(FString * result, float Value) { return NativeCall<FString *, FString *, float>(nullptr, "UKismetStringLibrary.Conv_FloatToString", result, Value); }
	static FString * BuildString_Bool(FString * result, const FString * AppendTo, const FString * Prefix, bool InBool, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, bool, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Bool", result, AppendTo, Prefix, InBool, Suffix); }
	static FString * BuildString_Color(FString * result, const FString * AppendTo, const FString * Prefix, FLinearColor InColor, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, FLinearColor, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Color", result, AppendTo, Prefix, InColor, Suffix); }
	static FString * BuildString_Float(FString * result, const FString * AppendTo, const FString * Prefix, float InFloat, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, float, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Float", result, AppendTo, Prefix, InFloat, Suffix); }
	static FString * BuildString_Int(FString * result, const FString * AppendTo, const FString * Prefix, int InInt, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, int, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Int", result, AppendTo, Prefix, InInt, Suffix); }
	static FString * BuildString_Name(FString * result, const FString * AppendTo, const FString * Prefix, FName InName, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, FName, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Name", result, AppendTo, Prefix, InName, Suffix); }
	static FString * BuildString_Object(FString * result, const FString * AppendTo, const FString * Prefix, UObject * InObj, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, UObject *, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Object", result, AppendTo, Prefix, InObj, Suffix); }
	static FString * BuildString_Rotator(FString * result, const FString * AppendTo, const FString * Prefix, FRotator InRot, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, FRotator, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Rotator", result, AppendTo, Prefix, InRot, Suffix); }
	static FString * BuildString_Vector2d(FString * result, const FString * AppendTo, const FString * Prefix, FVector2D InVector2d, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, FVector2D, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Vector2d", result, AppendTo, Prefix, InVector2d, Suffix); }
	static FString * BuildString_Vector(FString * result, const FString * AppendTo, const FString * Prefix, FVector InVector, const FString * Suffix) { return NativeCall<FString *, FString *, const FString *, const FString *, FVector, const FString *>(nullptr, "UKismetStringLibrary.BuildString_Vector", result, AppendTo, Prefix, InVector, Suffix); }
	static FString * Concat_StrStr(FString * result, const FString * A, const FString * B) { return NativeCall<FString *, FString *, const FString *, const FString *>(nullptr, "UKismetStringLibrary.Concat_StrStr", result, A, B); }
	static FString * Conv_BoolToString(FString * result, bool InBool) { return NativeCall<FString *, FString *, bool>(nullptr, "UKismetStringLibrary.Conv_BoolToString", result, InBool); }
	static FString * Conv_ByteToString(FString * result, char InByte) { return NativeCall<FString *, FString *, char>(nullptr, "UKismetStringLibrary.Conv_ByteToString", result, InByte); }
	static FString * Conv_ColorToString(FString * result, FLinearColor C) { return NativeCall<FString *, FString *, FLinearColor>(nullptr, "UKismetStringLibrary.Conv_ColorToString", result, C); }
	static FString * Conv_DoubleToString(FString * result, long double InDouble) { return NativeCall<FString *, FString *, long double>(nullptr, "UKismetStringLibrary.Conv_DoubleToString", result, InDouble); }
	static FString * Conv_IntToString(FString * result, int InInt) { return NativeCall<FString *, FString *, int>(nullptr, "UKismetStringLibrary.Conv_IntToString", result, InInt); }
	static FString * Conv_NameToString(FString * result, FName InName) { return NativeCall<FString *, FString *, FName>(nullptr, "UKismetStringLibrary.Conv_NameToString", result, InName); }
	static FString * Conv_ObjectToString(FString * result, UObject * InObj) { return NativeCall<FString *, FString *, UObject *>(nullptr, "UKismetStringLibrary.Conv_ObjectToString", result, InObj); }
	static FString * Conv_RotatorToString(FString * result, FRotator InRot) { return NativeCall<FString *, FString *, FRotator>(nullptr, "UKismetStringLibrary.Conv_RotatorToString", result, InRot); }
	static long double Conv_StringToDouble(const FString * InString) { return NativeCall<long double, const FString *>(nullptr, "UKismetStringLibrary.Conv_StringToDouble", InString); }
	static float Conv_StringToFloat(const FString * InString) { return NativeCall<float, const FString *>(nullptr, "UKismetStringLibrary.Conv_StringToFloat", InString); }
	static int Conv_StringToInt(const FString * InString) { return NativeCall<int, const FString *>(nullptr, "UKismetStringLibrary.Conv_StringToInt", InString); }
	static FName * Conv_StringToName(FName * result, const FString * InString) { return NativeCall<FName *, FName *, const FString *>(nullptr, "UKismetStringLibrary.Conv_StringToName", result, InString); }
	static FString * Conv_TransformToString(FString * result, const FTransform * InTrans) { return NativeCall<FString *, FString *, const FTransform *>(nullptr, "UKismetStringLibrary.Conv_TransformToString", result, InTrans); }
	static FString * Conv_Vector2dToString(FString * result, FVector2D InVec) { return NativeCall<FString *, FString *, FVector2D>(nullptr, "UKismetStringLibrary.Conv_Vector2dToString", result, InVec); }
	static FString * Conv_VectorToString(FString * result, FVector InVec) { return NativeCall<FString *, FString *, FVector>(nullptr, "UKismetStringLibrary.Conv_VectorToString", result, InVec); }
	static int CullArray(const FString * SourceString, TArray<FString> * InArray) { return NativeCall<int, const FString *, TArray<FString> *>(nullptr, "UKismetStringLibrary.CullArray", SourceString, InArray); }
	static bool EndsWith(const FString * SourceString, const FString * InSuffix, ESearchCase::Type SearchCase) { return NativeCall<bool, const FString *, const FString *, ESearchCase::Type>(nullptr, "UKismetStringLibrary.EndsWith", SourceString, InSuffix, SearchCase); }
	static bool EqualEqual_StrStr(const FString * A, const FString * B) { return NativeCall<bool, const FString *, const FString *>(nullptr, "UKismetStringLibrary.EqualEqual_StrStr", A, B); }
	static int FindSubstring(const FString * SearchIn, const FString * Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition) { return NativeCall<int, const FString *, const FString *, bool, bool, int>(nullptr, "UKismetStringLibrary.FindSubstring", SearchIn, Substring, bUseCase, bSearchFromEnd, StartPosition); }
	static TArray<FString> * GetCharacterArrayFromString(TArray<FString> * result, const FString * SourceString) { return NativeCall<TArray<FString> *, TArray<FString> *, const FString *>(nullptr, "UKismetStringLibrary.GetCharacterArrayFromString", result, SourceString); }
	static int GetCharacterAsNumber(const FString * SourceString, int Index) { return NativeCall<int, const FString *, int>(nullptr, "UKismetStringLibrary.GetCharacterAsNumber", SourceString, Index); }
	static FString * GetSubstring(FString * result, const FString * SourceString, int Start, int Count) { return NativeCall<FString *, FString *, const FString *, int, int>(nullptr, "UKismetStringLibrary.GetSubstring", result, SourceString, Start, Count); }
	static bool IsNumeric(const FString * SourceString) { return NativeCall<bool, const FString *>(nullptr, "UKismetStringLibrary.IsNumeric", SourceString); }
	static FString * JoinStringArray(FString * result, const TArray<FString> * SourceArray, const FString * Separator) { return NativeCall<FString *, FString *, const TArray<FString> *, const FString *>(nullptr, "UKismetStringLibrary.JoinStringArray", result, SourceArray, Separator); }
	static FString * Left(FString * result, const FString * SourceString, int Count) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.Left", result, SourceString, Count); }
	static FString * LeftChop(FString * result, const FString * SourceString, int Count) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.LeftChop", result, SourceString, Count); }
	static FString * LeftPad(FString * result, const FString * SourceString, int ChCount) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.LeftPad", result, SourceString, ChCount); }
	static int Len(const FString * S) { return NativeCall<int, const FString *>(nullptr, "UKismetStringLibrary.Len", S); }
	static bool MatchesWildcard(const FString * SourceString, const FString * Wildcard, ESearchCase::Type SearchCase) { return NativeCall<bool, const FString *, const FString *, ESearchCase::Type>(nullptr, "UKismetStringLibrary.MatchesWildcard", SourceString, Wildcard, SearchCase); }
	static bool NotEqual_StrStr(const FString * A, const FString * B) { return NativeCall<bool, const FString *, const FString *>(nullptr, "UKismetStringLibrary.NotEqual_StrStr", A, B); }
	static bool NotEqual_StriStri(const FString * A, const FString * B) { return NativeCall<bool, const FString *, const FString *>(nullptr, "UKismetStringLibrary.NotEqual_StriStri", A, B); }
	static TArray<FString> * ParseIntoArray(TArray<FString> * result, const FString * SourceString, const FString * Delimiter, const bool CullEmptyStrings) { return NativeCall<TArray<FString> *, TArray<FString> *, const FString *, const FString *, const bool>(nullptr, "UKismetStringLibrary.ParseIntoArray", result, SourceString, Delimiter, CullEmptyStrings); }
	static FString * Replace(FString * result, const FString * SourceString, const FString * From, const FString * To, ESearchCase::Type SearchCase) { return NativeCall<FString *, FString *, const FString *, const FString *, const FString *, ESearchCase::Type>(nullptr, "UKismetStringLibrary.Replace", result, SourceString, From, To, SearchCase); }
	static int ReplaceInline(FString * SourceString, const FString * SearchText, const FString * ReplacementText, ESearchCase::Type SearchCase) { return NativeCall<int, FString *, const FString *, const FString *, ESearchCase::Type>(nullptr, "UKismetStringLibrary.ReplaceInline", SourceString, SearchText, ReplacementText, SearchCase); }
	static FString * Reverse(FString * result, const FString * SourceString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UKismetStringLibrary.Reverse", result, SourceString); }
	static FString * Right(FString * result, const FString * SourceString, int Count) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.Right", result, SourceString, Count); }
	static FString * RightChop(FString * result, const FString * SourceString, int Count) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.RightChop", result, SourceString, Count); }
	static FString * RightPad(FString * result, const FString * SourceString, int ChCount) { return NativeCall<FString *, FString *, const FString *, int>(nullptr, "UKismetStringLibrary.RightPad", result, SourceString, ChCount); }
	static bool Split(const FString * SourceString, const FString * InStr, FString * LeftS, FString * RightS, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir) { return NativeCall<bool, const FString *, const FString *, FString *, FString *, ESearchCase::Type, ESearchDir::Type>(nullptr, "UKismetStringLibrary.Split", SourceString, InStr, LeftS, RightS, SearchCase, SearchDir); }
	static bool StartsWith(const FString * SourceString, const FString * InPrefix, ESearchCase::Type SearchCase) { return NativeCall<bool, const FString *, const FString *, ESearchCase::Type>(nullptr, "UKismetStringLibrary.StartsWith", SourceString, InPrefix, SearchCase); }
	static FString * ToLower(FString * result, const FString * SourceString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UKismetStringLibrary.ToLower", result, SourceString); }
	static FString * ToUpper(FString * result, const FString * SourceString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UKismetStringLibrary.ToUpper", result, SourceString); }
	static FString * Trim(FString * result, const FString * SourceString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UKismetStringLibrary.Trim", result, SourceString); }
	static FString * TrimTrailing(FString * result, const FString * SourceString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "UKismetStringLibrary.TrimTrailing", result, SourceString); }
};

