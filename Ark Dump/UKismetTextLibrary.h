#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FFormatTextArgument.h"

struct UKismetTextLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static FText * AsCurrency_Float(FText * result, float Value, TEnumAsByte<enum ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const FString * CurrencyCode) { return NativeCall<FText *, FText *, float, TEnumAsByte<enum ERoundingMode>, bool, int, int, int, int, const FString *>(nullptr, "UKismetTextLibrary.AsCurrency_Float", result, Value, RoundingMode, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode); }
	static FText * AsCurrency_Integer(FText * result, int Value, TEnumAsByte<enum ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const FString * CurrencyCode) { return NativeCall<FText *, FText *, int, TEnumAsByte<enum ERoundingMode>, bool, int, int, int, int, const FString *>(nullptr, "UKismetTextLibrary.AsCurrency_Integer", result, Value, RoundingMode, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode); }
	static FText * AsDateTime_DateTime(FText * result, const FDateTime * InDateTime) { return NativeCall<FText *, FText *, const FDateTime *>(nullptr, "UKismetTextLibrary.AsDateTime_DateTime", result, InDateTime); }
	static FText * AsDate_DateTime(FText * result, const FDateTime * InDateTime) { return NativeCall<FText *, FText *, const FDateTime *>(nullptr, "UKismetTextLibrary.AsDate_DateTime", result, InDateTime); }
	static FText * AsPercent_Float(FText * result, float Value, TEnumAsByte<enum ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits) { return NativeCall<FText *, FText *, float, TEnumAsByte<enum ERoundingMode>, bool, int, int, int, int>(nullptr, "UKismetTextLibrary.AsPercent_Float", result, Value, RoundingMode, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits); }
	static FText * AsTime_DateTime(FText * result, const FDateTime * InDateTime) { return NativeCall<FText *, FText *, const FDateTime *>(nullptr, "UKismetTextLibrary.AsTime_DateTime", result, InDateTime); }
	static FText * AsTimespan_Timespan(FText * result, const FTimespan * InTimespan) { return NativeCall<FText *, FText *, const FTimespan *>(nullptr, "UKismetTextLibrary.AsTimespan_Timespan", result, InTimespan); }
	static FText * Conv_BoolToText(FText * result, bool InBool) { return NativeCall<FText *, FText *, bool>(nullptr, "UKismetTextLibrary.Conv_BoolToText", result, InBool); }
	static FText * Conv_ByteToText(FText * result, char Value) { return NativeCall<FText *, FText *, char>(nullptr, "UKismetTextLibrary.Conv_ByteToText", result, Value); }
	static FText * Conv_FloatToText(FText * result, float Value, TEnumAsByte<enum ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits) { return NativeCall<FText *, FText *, float, TEnumAsByte<enum ERoundingMode>, bool, int, int, int, int>(nullptr, "UKismetTextLibrary.Conv_FloatToText", result, Value, RoundingMode, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits); }
	static FText * Conv_IntToText(FText * result, int Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits) { return NativeCall<FText *, FText *, int, bool, int, int>(nullptr, "UKismetTextLibrary.Conv_IntToText", result, Value, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits); }
	static FText * Conv_NameToText(FText * result, FName InName) { return NativeCall<FText *, FText *, FName>(nullptr, "UKismetTextLibrary.Conv_NameToText", result, InName); }
	static FText * Conv_StringToText(FText * result, const FString * InString) { return NativeCall<FText *, FText *, const FString *>(nullptr, "UKismetTextLibrary.Conv_StringToText", result, InString); }
	static FString * Conv_TextToString(FString * result, const FText * InText) { return NativeCall<FString *, FString *, const FText *>(nullptr, "UKismetTextLibrary.Conv_TextToString", result, InText); }
	static bool EqualEqual_IgnoreCase_TextText(const FText * A, const FText * B) { return NativeCall<bool, const FText *, const FText *>(nullptr, "UKismetTextLibrary.EqualEqual_IgnoreCase_TextText", A, B); }
	static bool EqualEqual_TextText(const FText * A, const FText * B) { return NativeCall<bool, const FText *, const FText *>(nullptr, "UKismetTextLibrary.EqualEqual_TextText", A, B); }
	static bool FindTextInLocalizationTable(const FString * Namespace, const FString * Key, FText * OutText) { return NativeCall<bool, const FString *, const FString *, FText *>(nullptr, "UKismetTextLibrary.FindTextInLocalizationTable", Namespace, Key, OutText); }
	static FText * Format(FText * result, FText InPattern, TArray<FFormatTextArgument> InArgs) { return NativeCall<FText *, FText *, FText, TArray<FFormatTextArgument>>(nullptr, "UKismetTextLibrary.Format", result, InPattern, InArgs); }
	static FText * GetEmptyText(FText * result) { return NativeCall<FText *, FText *>(nullptr, "UKismetTextLibrary.GetEmptyText", result); }
	static bool NotEqual_IgnoreCase_TextText(const FText * A, const FText * B) { return NativeCall<bool, const FText *, const FText *>(nullptr, "UKismetTextLibrary.NotEqual_IgnoreCase_TextText", A, B); }
	static bool NotEqual_TextText(const FText * A, const FText * B) { return NativeCall<bool, const FText *, const FText *>(nullptr, "UKismetTextLibrary.NotEqual_TextText", A, B); }
	static bool TextIsCultureInvariant(const FText * InText) { return NativeCall<bool, const FText *>(nullptr, "UKismetTextLibrary.TextIsCultureInvariant", InText); }
	static bool TextIsTransient(const FText * InText) { return NativeCall<bool, const FText *>(nullptr, "UKismetTextLibrary.TextIsTransient", InText); }
	static FText * TextTrimPreceding(FText * result, const FText * InText) { return NativeCall<FText *, FText *, const FText *>(nullptr, "UKismetTextLibrary.TextTrimPreceding", result, InText); }
	static FText * TextTrimPrecedingAndTrailing(FText * result, const FText * InText) { return NativeCall<FText *, FText *, const FText *>(nullptr, "UKismetTextLibrary.TextTrimPrecedingAndTrailing", result, InText); }
	static FText * TextTrimTrailing(FText * result, const FText * InText) { return NativeCall<FText *, FText *, const FText *>(nullptr, "UKismetTextLibrary.TextTrimTrailing", result, InText); }
};

