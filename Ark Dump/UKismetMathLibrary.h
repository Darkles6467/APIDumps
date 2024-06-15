#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FTimespan.h"
#include "FColor.h"
#include "FDateTime.h"

struct UKismetMathLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static float RandomFloat() { return NativeCall<float>(nullptr, "UKismetMathLibrary.RandomFloat"); }
	void MakeVector2D(float InMin, float InMax) { NativeCall<void, float, float>(this, "UKismetMathLibrary.MakeVector2D", InMin, InMax); }
	static float Atan2(float _Y, float _X) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Atan2", _Y, _X); }
	static int Abs_Int(int A) { return NativeCall<int, int>(nullptr, "UKismetMathLibrary.Abs_Int", A); }
	static float Acos(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Acos", A); }
	static char Add_ByteByte(char A, char B) { return NativeCall<char, char, char>(nullptr, "UKismetMathLibrary.Add_ByteByte", A, B); }
	static long double Add_DoubleDouble(long double A, long double B) { return NativeCall<long double, long double, long double>(nullptr, "UKismetMathLibrary.Add_DoubleDouble", A, B); }
	static long double Add_DoubleFloat(long double A, float B) { return NativeCall<long double, long double, float>(nullptr, "UKismetMathLibrary.Add_DoubleFloat", A, B); }
	static float Add_FloatFloat(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Add_FloatFloat", A, B); }
	static int Add_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Add_IntInt", A, B); }
	static FTimespan * Add_TimespanTimespan(FTimespan * result, FTimespan A, FTimespan B) { return NativeCall<FTimespan *, FTimespan *, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.Add_TimespanTimespan", result, A, B); }
	static FVector2D * Add_Vector2DFloat(FVector2D * result, FVector2D A, float B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, float>(nullptr, "UKismetMathLibrary.Add_Vector2DFloat", result, A, B); }
	static FVector2D * Add_Vector2DVector2D(FVector2D * result, FVector2D A, FVector2D B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, FVector2D>(nullptr, "UKismetMathLibrary.Add_Vector2DVector2D", result, A, B); }
	static FVector * Add_VectorFloat(FVector * result, FVector A, float B) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.Add_VectorFloat", result, A, B); }
	static FVector * Add_VectorVector(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.Add_VectorVector", result, A, B); }
	static int And_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.And_IntInt", A, B); }
	static float Asin(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Asin", A); }
	static bool BooleanAND(bool A, bool B) { return NativeCall<bool, bool, bool>(nullptr, "UKismetMathLibrary.BooleanAND", A, B); }
	static bool BooleanOR(bool A, bool B) { return NativeCall<bool, bool, bool>(nullptr, "UKismetMathLibrary.BooleanOR", A, B); }
	static bool BooleanXOR(bool A, bool B) { return NativeCall<bool, bool, bool>(nullptr, "UKismetMathLibrary.BooleanXOR", A, B); }
	static FVector * BoundToCube(FVector * result, FVector A, float Radius) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.BoundToCube", result, A, Radius); }
	static void BreakColor(const FLinearColor InColor, float * R, float * G, float * B, float * A) { NativeCall<void, const FLinearColor, float *, float *, float *, float *>(nullptr, "UKismetMathLibrary.BreakColor", InColor, R, G, B, A); }
	static void BreakRot(FVector InVec, float * X, float * Y, float * Z) { NativeCall<void, FVector, float *, float *, float *>(nullptr, "UKismetMathLibrary.BreakRot", InVec, X, Y, Z); }
	static void BreakRotIntoAxes(const FRotator * InRot, FVector * X, FVector * Y, FVector * Z) { NativeCall<void, const FRotator *, FVector *, FVector *, FVector *>(nullptr, "UKismetMathLibrary.BreakRotIntoAxes", InRot, X, Y, Z); }
	static void BreakTransform(const FTransform * InTransform, FVector * Translation, FRotator * Rotation, FVector * Scale) { NativeCall<void, const FTransform *, FVector *, FRotator *, FVector *>(nullptr, "UKismetMathLibrary.BreakTransform", InTransform, Translation, Rotation, Scale); }
	static void BreakVector2D(FVector2D InVec, float * X, float * Y) { NativeCall<void, FVector2D, float *, float *>(nullptr, "UKismetMathLibrary.BreakVector2D", InVec, X, Y); }
	static FLinearColor * CInterpTo(FLinearColor * result, FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed) { return NativeCall<FLinearColor *, FLinearColor *, FLinearColor, FLinearColor, float, float>(nullptr, "UKismetMathLibrary.CInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static int Clamp(int V, int A, int B) { return NativeCall<int, int, int, int>(nullptr, "UKismetMathLibrary.Clamp", V, A, B); }
	static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) { return NativeCall<float, float, float, float>(nullptr, "UKismetMathLibrary.ClampAngle", AngleDegrees, MinAngleDegrees, MaxAngleDegrees); }
	static FVector * ClampVectorSize(FVector * result, FVector A, float Min, float Max) { return NativeCall<FVector *, FVector *, FVector, float, float>(nullptr, "UKismetMathLibrary.ClampVectorSize", result, A, Min, Max); }
	static bool ClassIsChildOf(TSubclassOf<UObject> TestClass, TSubclassOf<UObject> ParentClass) { return NativeCall<bool, TSubclassOf<UObject>, TSubclassOf<UObject>>(nullptr, "UKismetMathLibrary.ClassIsChildOf", TestClass, ParentClass); }
	static FRotator * ComposeRotators(FRotator * result, FRotator A, FRotator B) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator>(nullptr, "UKismetMathLibrary.ComposeRotators", result, A, B); }
	static FTransform * ComposeTransforms(FTransform * result, const FTransform * A, const FTransform * B) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *>(nullptr, "UKismetMathLibrary.ComposeTransforms", result, A, B); }
	static char Conv_BoolToByte(bool InBool) { return NativeCall<char, bool>(nullptr, "UKismetMathLibrary.Conv_BoolToByte", InBool); }
	static float Conv_BoolToFloat(bool InBool) { return NativeCall<float, bool>(nullptr, "UKismetMathLibrary.Conv_BoolToFloat", InBool); }
	static int Conv_BoolToInt(bool InBool) { return NativeCall<int, bool>(nullptr, "UKismetMathLibrary.Conv_BoolToInt", InBool); }
	static float Conv_ByteToFloat(char InByte) { return NativeCall<float, char>(nullptr, "UKismetMathLibrary.Conv_ByteToFloat", InByte); }
	static FLinearColor * Conv_ColorToLinearColor(FLinearColor * result, FColor InColor) { return NativeCall<FLinearColor *, FLinearColor *, FColor>(nullptr, "UKismetMathLibrary.Conv_ColorToLinearColor", result, InColor); }
	static float Conv_DoubleToFloat(long double InDouble) { return NativeCall<float, long double>(nullptr, "UKismetMathLibrary.Conv_DoubleToFloat", InDouble); }
	static long double Conv_FloatToDouble(float InFloat) { return NativeCall<long double, float>(nullptr, "UKismetMathLibrary.Conv_FloatToDouble", InFloat); }
	static FLinearColor * Conv_FloatToLinearColor(FLinearColor * result, float InFloat) { return NativeCall<FLinearColor *, FLinearColor *, float>(nullptr, "UKismetMathLibrary.Conv_FloatToLinearColor", result, InFloat); }
	static FVector * Conv_FloatToVector(FVector * result, float InFloat) { return NativeCall<FVector *, FVector *, float>(nullptr, "UKismetMathLibrary.Conv_FloatToVector", result, InFloat); }
	static bool Conv_IntToBool(int InInt) { return NativeCall<bool, int>(nullptr, "UKismetMathLibrary.Conv_IntToBool", InInt); }
	static float Conv_IntToFloat(int InInt) { return NativeCall<float, int>(nullptr, "UKismetMathLibrary.Conv_IntToFloat", InInt); }
	static FColor * Conv_LinearColorToColor(FColor * result, FLinearColor InLinearColor) { return NativeCall<FColor *, FColor *, FLinearColor>(nullptr, "UKismetMathLibrary.Conv_LinearColorToColor", result, InLinearColor); }
	static FVector * Conv_RotatorToVector(FVector * result, FRotator InRot) { return NativeCall<FVector *, FVector *, FRotator>(nullptr, "UKismetMathLibrary.Conv_RotatorToVector", result, InRot); }
	static FVector * Conv_Vector2DToVector(FVector * result, FVector2D InVec2D, float Z) { return NativeCall<FVector *, FVector *, FVector2D, float>(nullptr, "UKismetMathLibrary.Conv_Vector2DToVector", result, InVec2D, Z); }
	static FLinearColor * Conv_VectorToLinearColor(FLinearColor * result, FVector InVec) { return NativeCall<FLinearColor *, FLinearColor *, FVector>(nullptr, "UKismetMathLibrary.Conv_VectorToLinearColor", result, InVec); }
	static FRotator * Conv_VectorToRotator(FRotator * result, FVector InVec) { return NativeCall<FRotator *, FRotator *, FVector>(nullptr, "UKismetMathLibrary.Conv_VectorToRotator", result, InVec); }
	static FTransform * Conv_VectorToTransform(FTransform * result, FVector InTranslation) { return NativeCall<FTransform *, FTransform *, FVector>(nullptr, "UKismetMathLibrary.Conv_VectorToTransform", result, InTranslation); }
	static FTransform * ConvertTransformToRelative(FTransform * result, const FTransform * WorldTransform, const FTransform * LocalTransform) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *>(nullptr, "UKismetMathLibrary.ConvertTransformToRelative", result, WorldTransform, LocalTransform); }
	static float Cos(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Cos", A); }
	static FVector * Cross_VectorVector(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.Cross_VectorVector", result, A, B); }
	static FDateTime * DateTimeMaxValue(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "UKismetMathLibrary.DateTimeMaxValue", result); }
	static int DaysInMonth(int Year, int Month) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.DaysInMonth", Year, Month); }
	static int DaysInYear(int Year) { return NativeCall<int, int>(nullptr, "UKismetMathLibrary.DaysInYear", Year); }
	static float DegAcos(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegAcos", A); }
	static float DegAsin(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegAsin", A); }
	static float DegAtan2(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.DegAtan2", A, B); }
	static float DegCos(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegCos", A); }
	static float DegSin(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegSin", A); }
	static float DegTan(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegTan", A); }
	static float DegreesToRadians(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.DegreesToRadians", A); }
	static char Divide_ByteByte(char A, char B) { return NativeCall<char, char, char>(nullptr, "UKismetMathLibrary.Divide_ByteByte", A, B); }
	static long double Divide_DoubleDouble(long double A, long double B) { return NativeCall<long double, long double, long double>(nullptr, "UKismetMathLibrary.Divide_DoubleDouble", A, B); }
	static long double Divide_DoubleFloat(long double A, float B) { return NativeCall<long double, long double, float>(nullptr, "UKismetMathLibrary.Divide_DoubleFloat", A, B); }
	static float Divide_FloatFloat(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Divide_FloatFloat", A, B); }
	static int Divide_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Divide_IntInt", A, B); }
	static FVector2D * Divide_Vector2DFloat(FVector2D * result, FVector2D A, float B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, float>(nullptr, "UKismetMathLibrary.Divide_Vector2DFloat", result, A, B); }
	static FVector * Divide_VectorFloat(FVector * result, FVector A, float B) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.Divide_VectorFloat", result, A, B); }
	static FVector * Divide_VectorVector(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.Divide_VectorVector", result, A, B); }
	static float Dot_VectorVector(FVector A, FVector B) { return NativeCall<float, FVector, FVector>(nullptr, "UKismetMathLibrary.Dot_VectorVector", A, B); }
	static float Ease(float A, float B, float Alpha, TEnumAsByte<enum EEasingFunc::Type> EasingFunc, float BlendExp, int Steps) { return NativeCall<float, float, float, float, TEnumAsByte<enum EEasingFunc::Type>, float, int>(nullptr, "UKismetMathLibrary.Ease", A, B, Alpha, EasingFunc, BlendExp, Steps); }
	static float EaseAngle(float startDegrees, float endDegrees, float Alpha, TEnumAsByte<enum EEasingFunc::Type> EasingFunc, float BlendExp, int Steps) { return NativeCall<float, float, float, float, TEnumAsByte<enum EEasingFunc::Type>, float, int>(nullptr, "UKismetMathLibrary.EaseAngle", startDegrees, endDegrees, Alpha, EasingFunc, BlendExp, Steps); }
	static bool EqualEqual_BoolBool(bool A, bool B) { return NativeCall<bool, bool, bool>(nullptr, "UKismetMathLibrary.EqualEqual_BoolBool", A, B); }
	static bool EqualEqual_ByteByte(char A, char B) { return NativeCall<bool, char, char>(nullptr, "UKismetMathLibrary.EqualEqual_ByteByte", A, B); }
	static bool EqualEqual_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.EqualEqual_DoubleDouble", A, B); }
	static bool EqualEqual_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.EqualEqual_FloatFloat", A, B); }
	static bool EqualEqual_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.EqualEqual_IntInt", A, B); }
	static bool EqualEqual_NameName(FName A, FName B) { return NativeCall<bool, FName, FName>(nullptr, "UKismetMathLibrary.EqualEqual_NameName", A, B); }
	static bool EqualEqual_RotatorRotator(FVector A, FVector B) { return NativeCall<bool, FVector, FVector>(nullptr, "UKismetMathLibrary.EqualEqual_RotatorRotator", A, B); }
	static float Exp(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Exp", A); }
	static float FAngleInterpEaseIn(float startAngle, float endAngle, float Alpha, float BlendExp) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FAngleInterpEaseIn", startAngle, endAngle, Alpha, BlendExp); }
	static float FAngleInterpEaseInOut(float startAngle, float endAngle, float Alpha, float BlendExp) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FAngleInterpEaseInOut", startAngle, endAngle, Alpha, BlendExp); }
	static float FAngleInterpEaseOut(float startAngle, float endAngle, float Alpha, float BlendExp) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FAngleInterpEaseOut", startAngle, endAngle, Alpha, BlendExp); }
	static float FAngleInterpTo(float CurrentDegrees, float TargetDegrees, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FAngleInterpTo", CurrentDegrees, TargetDegrees, DeltaTime, InterpSpeed); }
	static int FCeil(float A) { return NativeCall<int, float>(nullptr, "UKismetMathLibrary.FCeil", A); }
	static float FClamp(float V, float A, float B) { return NativeCall<float, float, float, float>(nullptr, "UKismetMathLibrary.FClamp", V, A, B); }
	static int FFloor(float A) { return NativeCall<int, float>(nullptr, "UKismetMathLibrary.FFloor", A); }
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exponent) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FInterpEaseInOut", A, B, Alpha, Exponent); }
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FInterpTo", Current, Target, DeltaTime, InterpSpeed); }
	static float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "UKismetMathLibrary.FInterpTo_Constant", Current, Target, DeltaTime, InterpSpeed); }
	static float FMax(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.FMax", A, B); }
	static float FMin(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.FMin", A, B); }
	static int FMod(float Dividend, float Divisor, float * Remainder) { return NativeCall<int, float, float, float *>(nullptr, "UKismetMathLibrary.FMod", Dividend, Divisor, Remainder); }
	static FRotator * FindLookAtRotation(FRotator * result, const FVector * Start, const FVector * Target) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.FindLookAtRotation", result, Start, Target); }
	static FVector * FlattenVector(FVector * result, FVector A) { return NativeCall<FVector *, FVector *, FVector>(nullptr, "UKismetMathLibrary.FlattenVector", result, A); }
	static FVector * FlattenVectorNormal(FVector * result, FVector A) { return NativeCall<FVector *, FVector *, FVector>(nullptr, "UKismetMathLibrary.FlattenVectorNormal", result, A); }
	static float Fraction(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Fraction", A); }
	static FTimespan * FromDays(FTimespan * result, float Days) { return NativeCall<FTimespan *, FTimespan *, float>(nullptr, "UKismetMathLibrary.FromDays", result, Days); }
	static FTimespan * FromHours(FTimespan * result, float Hours) { return NativeCall<FTimespan *, FTimespan *, float>(nullptr, "UKismetMathLibrary.FromHours", result, Hours); }
	static FTimespan * FromMilliseconds(FTimespan * result, float Milliseconds) { return NativeCall<FTimespan *, FTimespan *, float>(nullptr, "UKismetMathLibrary.FromMilliseconds", result, Milliseconds); }
	static FTimespan * FromMinutes(FTimespan * result, float Minutes) { return NativeCall<FTimespan *, FTimespan *, float>(nullptr, "UKismetMathLibrary.FromMinutes", result, Minutes); }
	static FTimespan * FromSeconds(FTimespan * result, float Seconds) { return NativeCall<FTimespan *, FTimespan *, float>(nullptr, "UKismetMathLibrary.FromSeconds", result, Seconds); }
	static void GetAxes(FRotator A, FVector * X, FVector * Y, FVector * Z) { NativeCall<void, FRotator, FVector *, FVector *, FVector *>(nullptr, "UKismetMathLibrary.GetAxes", A, X, Y, Z); }
	static FDateTime * GetDate(FDateTime * result, FDateTime A) { return NativeCall<FDateTime *, FDateTime *, FDateTime>(nullptr, "UKismetMathLibrary.GetDate", result, A); }
	static int GetDay(FDateTime A) { return NativeCall<int, FDateTime>(nullptr, "UKismetMathLibrary.GetDay", A); }
	static int GetDayOfYear(FDateTime A) { return NativeCall<int, FDateTime>(nullptr, "UKismetMathLibrary.GetDayOfYear", A); }
	static int GetDays(FTimespan A) { return NativeCall<int, FTimespan>(nullptr, "UKismetMathLibrary.GetDays", A); }
	static FVector * GetDirectionVector(FVector * result, FVector From, FVector To) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.GetDirectionVector", result, From, To); }
	static FTimespan * GetDuration(FTimespan * result, FTimespan A) { return NativeCall<FTimespan *, FTimespan *, FTimespan>(nullptr, "UKismetMathLibrary.GetDuration", result, A); }
	static FVector * GetForwardVector(FVector * result, FRotator InRot) { return NativeCall<FVector *, FVector *, FRotator>(nullptr, "UKismetMathLibrary.GetForwardVector", result, InRot); }
	static int GetHour12(FDateTime A) { return NativeCall<int, FDateTime>(nullptr, "UKismetMathLibrary.GetHour12", A); }
	static int GetHours(FTimespan A) { return NativeCall<int, FTimespan>(nullptr, "UKismetMathLibrary.GetHours", A); }
	static float GetMaxElement(FVector A) { return NativeCall<float, FVector>(nullptr, "UKismetMathLibrary.GetMaxElement", A); }
	static int GetMillisecond(FTimespan A) { return NativeCall<int, FTimespan>(nullptr, "UKismetMathLibrary.GetMillisecond", A); }
	static float GetMinElement(FVector A) { return NativeCall<float, FVector>(nullptr, "UKismetMathLibrary.GetMinElement", A); }
	static int GetMinute(FTimespan A) { return NativeCall<int, FTimespan>(nullptr, "UKismetMathLibrary.GetMinute", A); }
	static int GetMonth(FDateTime A) { return NativeCall<int, FDateTime>(nullptr, "UKismetMathLibrary.GetMonth", A); }
	static float GetPI() { return NativeCall<float>(nullptr, "UKismetMathLibrary.GetPI"); }
	static FVector * GetRightVector(FVector * result, FRotator InRot) { return NativeCall<FVector *, FVector *, FRotator>(nullptr, "UKismetMathLibrary.GetRightVector", result, InRot); }
	static int GetSeconds(FTimespan A) { return NativeCall<int, FTimespan>(nullptr, "UKismetMathLibrary.GetSeconds", A); }
	static FTimespan * GetTimeOfDay(FTimespan * result, FDateTime A) { return NativeCall<FTimespan *, FTimespan *, FDateTime>(nullptr, "UKismetMathLibrary.GetTimeOfDay", result, A); }
	static float GetTotalDays(FTimespan A) { return NativeCall<float, FTimespan>(nullptr, "UKismetMathLibrary.GetTotalDays", A); }
	static float GetTotalHours(FTimespan A) { return NativeCall<float, FTimespan>(nullptr, "UKismetMathLibrary.GetTotalHours", A); }
	static float GetTotalMilliseconds(FTimespan A) { return NativeCall<float, FTimespan>(nullptr, "UKismetMathLibrary.GetTotalMilliseconds", A); }
	static float GetTotalMinutes(FTimespan A) { return NativeCall<float, FTimespan>(nullptr, "UKismetMathLibrary.GetTotalMinutes", A); }
	static float GetTotalSeconds(FTimespan A) { return NativeCall<float, FTimespan>(nullptr, "UKismetMathLibrary.GetTotalSeconds", A); }
	static FVector * GetUpVector(FVector * result, FRotator InRot) { return NativeCall<FVector *, FVector *, FRotator>(nullptr, "UKismetMathLibrary.GetUpVector", result, InRot); }
	static FVector * GetVectorArrayAverage(FVector * result, const TArray<FVector> * Vectors) { return NativeCall<FVector *, FVector *, const TArray<FVector> *>(nullptr, "UKismetMathLibrary.GetVectorArrayAverage", result, Vectors); }
	static int GetYear(FDateTime A) { return NativeCall<int, FDateTime>(nullptr, "UKismetMathLibrary.GetYear", A); }
	static bool GreaterEqual_ByteByte(char A, char B) { return NativeCall<bool, char, char>(nullptr, "UKismetMathLibrary.GreaterEqual_ByteByte", A, B); }
	static bool GreaterEqual_DateTimeDateTime(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.GreaterEqual_DateTimeDateTime", A, B); }
	static bool GreaterEqual_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.GreaterEqual_DoubleDouble", A, B); }
	static bool GreaterEqual_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.GreaterEqual_FloatFloat", A, B); }
	static bool GreaterEqual_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.GreaterEqual_IntInt", A, B); }
	static FVector * GreaterGreater_VectorRotator(FVector * result, FVector A, FRotator B) { return NativeCall<FVector *, FVector *, FVector, FRotator>(nullptr, "UKismetMathLibrary.GreaterGreater_VectorRotator", result, A, B); }
	static bool Greater_ByteByte(char A, char B) { return NativeCall<bool, char, char>(nullptr, "UKismetMathLibrary.Greater_ByteByte", A, B); }
	static bool Greater_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.Greater_DoubleDouble", A, B); }
	static bool Greater_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.Greater_FloatFloat", A, B); }
	static bool Greater_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.Greater_IntInt", A, B); }
	static bool Greater_DateTimeDateTime(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.Greater_DateTimeDateTime", A, B); }
	static FLinearColor * HSVToRGB(FLinearColor * result, float H, float S, float V, float A) { return NativeCall<FLinearColor *, FLinearColor *, float, float, float, float>(nullptr, "UKismetMathLibrary.HSVToRGB", result, H, S, V, A); }
	static void HSVToRGB_Vector(const FLinearColor HSV, FLinearColor * RGB) { NativeCall<void, const FLinearColor, FLinearColor *>(nullptr, "UKismetMathLibrary.HSVToRGB_Vector", HSV, RGB); }
	static bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax) { return NativeCall<bool, float, float, float, bool, bool>(nullptr, "UKismetMathLibrary.InRange_FloatFloat", Value, Min, Max, InclusiveMin, InclusiveMax); }
	static FVector * InverseTransformDirection(FVector * result, const FTransform * T, FVector Direction) { return NativeCall<FVector *, FVector *, const FTransform *, FVector>(nullptr, "UKismetMathLibrary.InverseTransformDirection", result, T, Direction); }
	static FVector * InverseTransformLocation(FVector * result, const FTransform * T, FVector Location) { return NativeCall<FVector *, FVector *, const FTransform *, FVector>(nullptr, "UKismetMathLibrary.InverseTransformLocation", result, T, Location); }
	static bool IsAfternoon(FDateTime A) { return NativeCall<bool, FDateTime>(nullptr, "UKismetMathLibrary.IsAfternoon", A); }
	static bool IsLeapYear(int Year) { return NativeCall<bool, int>(nullptr, "UKismetMathLibrary.IsLeapYear", Year); }
	static bool IsMorning(FDateTime A) { return NativeCall<bool, FDateTime>(nullptr, "UKismetMathLibrary.IsMorning", A); }
	static bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent) { return NativeCall<bool, FVector, FVector, FVector>(nullptr, "UKismetMathLibrary.IsPointInBox", Point, BoxOrigin, BoxExtent); }
	static bool IsInfiniteOrNaN(FRotator A) { return NativeCall<bool, FRotator>(nullptr, "UKismetMathLibrary.IsInfiniteOrNaN", A); }
	static float Lerp(float A, float B, float V) { return NativeCall<float, float, float, float>(nullptr, "UKismetMathLibrary.Lerp", A, B, V); }
	static float LerpAngle(float startDegrees, float endDegrees, float V) { return NativeCall<float, float, float, float>(nullptr, "UKismetMathLibrary.LerpAngle", startDegrees, endDegrees, V); }
	static bool LessEqual_ByteByte(char A, char B) { return NativeCall<bool, char, char>(nullptr, "UKismetMathLibrary.LessEqual_ByteByte", A, B); }
	static bool LessEqual_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.LessEqual_DoubleDouble", A, B); }
	static bool LessEqual_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.LessEqual_FloatFloat", A, B); }
	static bool LessEqual_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.LessEqual_IntInt", A, B); }
	static bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.LessEqual_TimespanTimespan", A, B); }
	static FVector * LessLess_VectorRotator(FVector * result, FVector A, FRotator B) { return NativeCall<FVector *, FVector *, FVector, FRotator>(nullptr, "UKismetMathLibrary.LessLess_VectorRotator", result, A, B); }
	static bool Less_ByteByte(char A, char B) { return NativeCall<bool, char, char>(nullptr, "UKismetMathLibrary.Less_ByteByte", A, B); }
	static bool Less_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.Less_DoubleDouble", A, B); }
	static bool Less_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.Less_FloatFloat", A, B); }
	static bool Less_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.Less_IntInt", A, B); }
	static bool Less_TimespanTimespan(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.Less_TimespanTimespan", A, B); }
	static bool LinePlaneIntersection(const FVector * LineStart, const FVector * LineEnd, const FPlane * APlane, float * T, FVector * Intersection) { return NativeCall<bool, const FVector *, const FVector *, const FPlane *, float *, FVector *>(nullptr, "UKismetMathLibrary.LinePlaneIntersection", LineStart, LineEnd, APlane, T, Intersection); }
	static bool LinePlaneIntersection_OriginNormal(const FVector * LineStart, const FVector * LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float * T, FVector * Intersection) { return NativeCall<bool, const FVector *, const FVector *, FVector, FVector, float *, FVector *>(nullptr, "UKismetMathLibrary.LinePlaneIntersection_OriginNormal", LineStart, LineEnd, PlaneOrigin, PlaneNormal, T, Intersection); }
	static FLinearColor * LinearColorLerp(FLinearColor * result, FLinearColor A, FLinearColor B, float Alpha) { return NativeCall<FLinearColor *, FLinearColor *, FLinearColor, FLinearColor, float>(nullptr, "UKismetMathLibrary.LinearColorLerp", result, A, B, Alpha); }
	static float Loge(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Loge", A); }
	static FRotator * MakeRotFromX(FRotator * result, const FVector * X) { return NativeCall<FRotator *, FRotator *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromX", result, X); }
	static FRotator * MakeRotFromXY(FRotator * result, const FVector * X, const FVector * Y) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromXY", result, X, Y); }
	static FRotator * MakeRotFromXZ(FRotator * result, const FVector * X, const FVector * Z) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromXZ", result, X, Z); }
	static FRotator * MakeRotFromY(FRotator * result, const FVector * Y) { return NativeCall<FRotator *, FRotator *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromY", result, Y); }
	static FRotator * MakeRotFromYX(FRotator * result, const FVector * Y, const FVector * X) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromYX", result, Y, X); }
	static FRotator * MakeRotFromYZ(FRotator * result, const FVector * Y, const FVector * Z) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromYZ", result, Y, Z); }
	static FRotator * MakeRotFromZ(FRotator * result, const FVector * Z) { return NativeCall<FRotator *, FRotator *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromZ", result, Z); }
	static FRotator * MakeRotFromZX(FRotator * result, const FVector * Z, const FVector * X) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromZX", result, Z, X); }
	static FRotator * MakeRotFromZY(FRotator * result, const FVector * Z, const FVector * Y) { return NativeCall<FRotator *, FRotator *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.MakeRotFromZY", result, Z, Y); }
	static FRotator * MakeRotationFromAxes(FRotator * result, FVector Forward, FVector Right, FVector Up) { return NativeCall<FRotator *, FRotator *, FVector, FVector, FVector>(nullptr, "UKismetMathLibrary.MakeRotationFromAxes", result, Forward, Right, Up); }
	static FTransform * MakeTransform(FTransform * result, FVector Translation, FRotator Rotation, FVector Scale) { return NativeCall<FTransform *, FTransform *, FVector, FRotator, FVector>(nullptr, "UKismetMathLibrary.MakeTransform", result, Translation, Rotation, Scale); }
	static FVector * MakeVector(FVector * result, float X, float Y, float Z) { return NativeCall<FVector *, FVector *, float, float, float>(nullptr, "UKismetMathLibrary.MakeVector", result, X, Y, Z); }
	static float MapRange(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) { return NativeCall<float, float, float, float, float, float>(nullptr, "UKismetMathLibrary.MapRange", Value, InRangeA, InRangeB, OutRangeA, OutRangeB); }
	static int Max(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Max", A, B); }
	static void MaxOfByteArray(const TArray<unsigned char> * ByteArray, int * IndexOfMaxValue, char * MaxValue) { NativeCall<void, const TArray<unsigned char> *, int *, char *>(nullptr, "UKismetMathLibrary.MaxOfByteArray", ByteArray, IndexOfMaxValue, MaxValue); }
	static void MaxOfFloatArray(const TArray<float> * FloatArray, int * IndexOfMaxValue, float * MaxValue) { NativeCall<void, const TArray<float> *, int *, float *>(nullptr, "UKismetMathLibrary.MaxOfFloatArray", FloatArray, IndexOfMaxValue, MaxValue); }
	static void MaxOfIntArray(const TArray<int> * IntArray, int * IndexOfMaxValue, int * MaxValue) { NativeCall<void, const TArray<int> *, int *, int *>(nullptr, "UKismetMathLibrary.MaxOfIntArray", IntArray, IndexOfMaxValue, MaxValue); }
	static int Min(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Min", A, B); }
	static void MinOfByteArray(const TArray<unsigned char> * ByteArray, int * IndexOfMinValue, char * MinValue) { NativeCall<void, const TArray<unsigned char> *, int *, char *>(nullptr, "UKismetMathLibrary.MinOfByteArray", ByteArray, IndexOfMinValue, MinValue); }
	static void MinOfFloatArray(const TArray<float> * FloatArray, int * IndexOfMinValue, float * MinValue) { NativeCall<void, const TArray<float> *, int *, float *>(nullptr, "UKismetMathLibrary.MinOfFloatArray", FloatArray, IndexOfMinValue, MinValue); }
	static void MinOfIntArray(const TArray<int> * IntArray, int * IndexOfMinValue, int * MinValue) { NativeCall<void, const TArray<int> *, int *, int *>(nullptr, "UKismetMathLibrary.MinOfIntArray", IntArray, IndexOfMinValue, MinValue); }
	static void MinimumAreaRectangle(UObject * WorldContextObject, const TArray<FVector> * InVerts, const FVector * SampleSurfaceNormal, FVector * OutRectCenter, FRotator * OutRectRotation, float * OutSideLengthX, float * OutSideLengthY, bool bDebugDraw) { NativeCall<void, UObject *, const TArray<FVector> *, const FVector *, FVector *, FRotator *, float *, float *, bool>(nullptr, "UKismetMathLibrary.MinimumAreaRectangle", WorldContextObject, InVerts, SampleSurfaceNormal, OutRectCenter, OutRectRotation, OutSideLengthX, OutSideLengthY, bDebugDraw); }
	static FVector * MirrorVectorByNormal(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.MirrorVectorByNormal", result, A, B); }
	static float MultiplyByPi(float Value) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.MultiplyByPi", Value); }
	static float MultiplyMultiply_FloatFloat(float Base, float Exp) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.MultiplyMultiply_FloatFloat", Base, Exp); }
	static int MultiplyMultiply_IntInt(int Base, int Exp) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.MultiplyMultiply_IntInt", Base, Exp); }
	static char Multiply_ByteByte(char A, char B) { return NativeCall<char, char, char>(nullptr, "UKismetMathLibrary.Multiply_ByteByte", A, B); }
	static long double Multiply_DoubleDouble(long double A, long double B) { return NativeCall<long double, long double, long double>(nullptr, "UKismetMathLibrary.Multiply_DoubleDouble", A, B); }
	static long double Multiply_DoubleFloat(long double A, float B) { return NativeCall<long double, long double, float>(nullptr, "UKismetMathLibrary.Multiply_DoubleFloat", A, B); }
	static float Multiply_FloatFloat(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Multiply_FloatFloat", A, B); }
	static float Multiply_IntFloat(int A, float B) { return NativeCall<float, int, float>(nullptr, "UKismetMathLibrary.Multiply_IntFloat", A, B); }
	static int Multiply_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Multiply_IntInt", A, B); }
	static FLinearColor * Multiply_LinearColorFloat(FLinearColor * result, FLinearColor A, float B) { return NativeCall<FLinearColor *, FLinearColor *, FLinearColor, float>(nullptr, "UKismetMathLibrary.Multiply_LinearColorFloat", result, A, B); }
	static FLinearColor * Multiply_LinearColorLinearColor(FLinearColor * result, FLinearColor A, FLinearColor B) { return NativeCall<FLinearColor *, FLinearColor *, FLinearColor, FLinearColor>(nullptr, "UKismetMathLibrary.Multiply_LinearColorLinearColor", result, A, B); }
	static FTimespan * Multiply_TimespanFloat(FTimespan * result, FTimespan A, float Scalar) { return NativeCall<FTimespan *, FTimespan *, FTimespan, float>(nullptr, "UKismetMathLibrary.Multiply_TimespanFloat", result, A, Scalar); }
	static FVector2D * Multiply_Vector2DFloat(FVector2D * result, FVector2D A, float B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, float>(nullptr, "UKismetMathLibrary.Multiply_Vector2DFloat", result, A, B); }
	static FVector * Multiply_VectorFloat(FVector * result, FVector A, float B) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.Multiply_VectorFloat", result, A, B); }
	static FVector * Multiply_VectorVector(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.Multiply_VectorVector", result, A, B); }
	static bool NearlyEqual_DoubleDouble(long double A, long double B, float ErrorTolerance) { return NativeCall<bool, long double, long double, float>(nullptr, "UKismetMathLibrary.NearlyEqual_DoubleDouble", A, B, ErrorTolerance); }
	static bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance) { return NativeCall<bool, float, float, float>(nullptr, "UKismetMathLibrary.NearlyEqual_FloatFloat", A, B, ErrorTolerance); }
	static bool NearlyEqual_VectorVector(FVector A, FVector B, float ErrorTolerance) { return NativeCall<bool, FVector, FVector, float>(nullptr, "UKismetMathLibrary.NearlyEqual_VectorVector", A, B, ErrorTolerance); }
	static FRotator * NegateRotator(FRotator * result, FRotator A) { return NativeCall<FRotator *, FRotator *, FRotator>(nullptr, "UKismetMathLibrary.NegateRotator", result, A); }
	static FVector * NegateVector(FVector * result, FVector A) { return NativeCall<FVector *, FVector *, FVector>(nullptr, "UKismetMathLibrary.NegateVector", result, A); }
	static FVector2D * Normal2D(FVector2D * result, FVector2D A) { return NativeCall<FVector2D *, FVector2D *, FVector2D>(nullptr, "UKismetMathLibrary.Normal2D", result, A); }
	static FVector * Normal(FVector * result, FVector A) { return NativeCall<FVector *, FVector *, FVector>(nullptr, "UKismetMathLibrary.Normal", result, A); }
	static float NormalizeToRange(float Value, float RangeMin, float RangeMax) { return NativeCall<float, float, float, float>(nullptr, "UKismetMathLibrary.NormalizeToRange", Value, RangeMin, RangeMax); }
	static FRotator * NormalizedDeltaRotator(FRotator * result, FRotator A, FRotator B) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator>(nullptr, "UKismetMathLibrary.NormalizedDeltaRotator", result, A, B); }
	static bool NotEqual_BoolBool(bool A, bool B) { return NativeCall<bool, bool, bool>(nullptr, "UKismetMathLibrary.NotEqual_BoolBool", A, B); }
	static bool NotEqual_DoubleDouble(long double A, long double B) { return NativeCall<bool, long double, long double>(nullptr, "UKismetMathLibrary.NotEqual_DoubleDouble", A, B); }
	static bool NotEqual_FloatFloat(float A, float B) { return NativeCall<bool, float, float>(nullptr, "UKismetMathLibrary.NotEqual_FloatFloat", A, B); }
	static bool NotEqual_IntInt(int A, int B) { return NativeCall<bool, int, int>(nullptr, "UKismetMathLibrary.NotEqual_IntInt", A, B); }
	static bool NotEqual_NameName(FName A, FName B) { return NativeCall<bool, FName, FName>(nullptr, "UKismetMathLibrary.NotEqual_NameName", A, B); }
	static bool NotEqual_DateTimeDateTime(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.NotEqual_DateTimeDateTime", A, B); }
	static bool NotEqual_VectorVector(FVector A, FVector B) { return NativeCall<bool, FVector, FVector>(nullptr, "UKismetMathLibrary.NotEqual_VectorVector", A, B); }
	static int Not_Int(int A) { return NativeCall<int, int>(nullptr, "UKismetMathLibrary.Not_Int", A); }
	static bool Not_PreBool(bool A) { return NativeCall<bool, bool>(nullptr, "UKismetMathLibrary.Not_PreBool", A); }
	static FDateTime * Now(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "UKismetMathLibrary.Now", result); }
	static int Or_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Or_IntInt", A, B); }
	static char Percent_ByteByte(char A, char B) { return NativeCall<char, char, char>(nullptr, "UKismetMathLibrary.Percent_ByteByte", A, B); }
	static long double Percent_DoubleDouble(long double A, long double B) { return NativeCall<long double, long double, long double>(nullptr, "UKismetMathLibrary.Percent_DoubleDouble", A, B); }
	static float Percent_FloatFloat(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Percent_FloatFloat", A, B); }
	static int Percent_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Percent_IntInt", A, B); }
	static bool PointsAreCoplanar(const TArray<FVector> * Points, float Tolerance) { return NativeCall<bool, const TArray<FVector> *, float>(nullptr, "UKismetMathLibrary.PointsAreCoplanar", Points, Tolerance); }
	static FVector * ProjectOnTo(FVector * result, FVector X, FVector Y) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.ProjectOnTo", result, X, Y); }
	static FVector * ProjectVectorOnToPlane(FVector * result, const FVector * V, const FVector * PlaneNormal) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.ProjectVectorOnToPlane", result, V, PlaneNormal); }
	static FRotator * QInterpTo(FRotator * result, FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, float>(nullptr, "UKismetMathLibrary.QInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * REase(FRotator * result, FRotator A, FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<enum EEasingFunc::Type> EasingFunc, float BlendExp, int Steps) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, bool, TEnumAsByte<enum EEasingFunc::Type>, float, int>(nullptr, "UKismetMathLibrary.REase", result, A, B, Alpha, bShortestPath, EasingFunc, BlendExp, Steps); }
	static void RGBToHSV(const FLinearColor InColor, float * H, float * S, float * V, float * A) { NativeCall<void, const FLinearColor, float *, float *, float *, float *>(nullptr, "UKismetMathLibrary.RGBToHSV", InColor, H, S, V, A); }
	static void RGBToHSV_Vector(const FLinearColor RGB, FLinearColor * HSV) { NativeCall<void, const FLinearColor, FLinearColor *>(nullptr, "UKismetMathLibrary.RGBToHSV_Vector", RGB, HSV); }
	static FRotator * RInterpTo(FRotator * result, FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, float>(nullptr, "UKismetMathLibrary.RInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * RInterpTo_Constant(FRotator * result, FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, float>(nullptr, "UKismetMathLibrary.RInterpTo_Constant", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * RInterpTo_Constant_PerAxis(FRotator * result, FRotator Current, FRotator Target, float DeltaTime, FRotator InterpSpeedPerAxis) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, FRotator>(nullptr, "UKismetMathLibrary.RInterpTo_Constant_PerAxis", result, Current, Target, DeltaTime, InterpSpeedPerAxis); }
	static FRotator * RInterpTo_PerAxis(FRotator * result, FRotator Current, FRotator Target, float DeltaTime, FRotator InterpSpeedPerAxis) { return NativeCall<FRotator *, FRotator *, FRotator, FRotator, float, FRotator>(nullptr, "UKismetMathLibrary.RInterpTo_PerAxis", result, Current, Target, DeltaTime, InterpSpeedPerAxis); }
	static float RadiansToDegrees(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.RadiansToDegrees", A); }
	static bool RandomBool() { return NativeCall<bool>(nullptr, "UKismetMathLibrary.RandomBool"); }
	static bool RandomBoolFromStream(const FRandomStream * Stream) { return NativeCall<bool, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomBoolFromStream", Stream); }
	static float RandomFloatInRange(float Min, float Max) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.RandomFloatInRange", Min, Max); }
	static float RandomFloatInRangeFromStream(float Min, float Max, const FRandomStream * Stream) { return NativeCall<float, float, float, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomFloatInRangeFromStream", Min, Max, Stream); }
	static int RandomInteger(int A) { return NativeCall<int, int>(nullptr, "UKismetMathLibrary.RandomInteger", A); }
	static int RandomIntegerFromStream(int Max, const FRandomStream * Stream) { return NativeCall<int, int, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomIntegerFromStream", Max, Stream); }
	static int RandomIntegerInRange(int Min, int Max) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.RandomIntegerInRange", Min, Max); }
	static int RandomIntegerInRangeFromStream(int Min, int Max, const FRandomStream * Stream) { return NativeCall<int, int, int, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomIntegerInRangeFromStream", Min, Max, Stream); }
	static FVector * RandomPointInBoundingBox(FVector * result, const FVector * Origin, const FVector * BoxExtent) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *>(nullptr, "UKismetMathLibrary.RandomPointInBoundingBox", result, Origin, BoxExtent); }
	static FRotator * RandomRotator(FRotator * result, bool bRoll) { return NativeCall<FRotator *, FRotator *, bool>(nullptr, "UKismetMathLibrary.RandomRotator", result, bRoll); }
	static FRotator * RandomRotatorFromStream(FRotator * result, bool bRoll, const FRandomStream * Stream) { return NativeCall<FRotator *, FRotator *, bool, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomRotatorFromStream", result, bRoll, Stream); }
	static FVector * RandomUnitVector(FVector * result) { return NativeCall<FVector *, FVector *>(nullptr, "UKismetMathLibrary.RandomUnitVector", result); }
	static FVector * RandomUnitVectorFromStream(FVector * result, const FRandomStream * Stream) { return NativeCall<FVector *, FVector *, const FRandomStream *>(nullptr, "UKismetMathLibrary.RandomUnitVectorFromStream", result, Stream); }
	static FVector * RandomUnitVectorInCone(FVector * result, FVector ConeDir, float ConeHalfAngle) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.RandomUnitVectorInCone", result, ConeDir, ConeHalfAngle); }
	static void ResetRandomStream(const FRandomStream * Stream) { NativeCall<void, const FRandomStream *>(nullptr, "UKismetMathLibrary.ResetRandomStream", Stream); }
	static FVector * RotateAngleAxis(FVector * result, FVector InVect, float AngleDeg, FVector Axis) { return NativeCall<FVector *, FVector *, FVector, float, FVector>(nullptr, "UKismetMathLibrary.RotateAngleAxis", result, InVect, AngleDeg, Axis); }
	static FRotator * RotatorFromAxisAndAngle(FRotator * result, FVector Axis, float Angle) { return NativeCall<FRotator *, FRotator *, FVector, float>(nullptr, "UKismetMathLibrary.RotatorFromAxisAndAngle", result, Axis, Angle); }
	static int Round(float A) { return NativeCall<int, float>(nullptr, "UKismetMathLibrary.Round", A); }
	static void SeedRandomStream(FRandomStream * Stream) { NativeCall<void, FRandomStream *>(nullptr, "UKismetMathLibrary.SeedRandomStream", Stream); }
	static FLinearColor * SelectColor(FLinearColor * result, FLinearColor A, FLinearColor B, bool bSelectA) { return NativeCall<FLinearColor *, FLinearColor *, FLinearColor, FLinearColor, bool>(nullptr, "UKismetMathLibrary.SelectColor", result, A, B, bSelectA); }
	static float SelectFloat(float A, float B, bool bSelectA) { return NativeCall<float, float, float, bool>(nullptr, "UKismetMathLibrary.SelectFloat", A, B, bSelectA); }
	static int SelectInt(int A, int B, bool bSelectA) { return NativeCall<int, int, int, bool>(nullptr, "UKismetMathLibrary.SelectInt", A, B, bSelectA); }
	static FString * SelectString(FString * result, const FString * A, const FString * B, bool bSelectA) { return NativeCall<FString *, FString *, const FString *, const FString *, bool>(nullptr, "UKismetMathLibrary.SelectString", result, A, B, bSelectA); }
	static FTransform * SelectTransform(FTransform * result, const FTransform * A, const FTransform * B, bool bSelectA) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *, bool>(nullptr, "UKismetMathLibrary.SelectTransform", result, A, B, bSelectA); }
	static FVector * SelectVector(FVector * result, FVector A, FVector B, bool bSelectA) { return NativeCall<FVector *, FVector *, FVector, FVector, bool>(nullptr, "UKismetMathLibrary.SelectVector", result, A, B, bSelectA); }
	static void SetRandomStreamSeed(FRandomStream * Stream, int NewSeed) { NativeCall<void, FRandomStream *, int>(nullptr, "UKismetMathLibrary.SetRandomStreamSeed", Stream, NewSeed); }
	static float SignOfFloat(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.SignOfFloat", A); }
	static int SignOfInteger(int A) { return NativeCall<int, int>(nullptr, "UKismetMathLibrary.SignOfInteger", A); }
	static float Sin(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Sin", A); }
	static float Sqrt(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Sqrt", A); }
	static float Square(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Square", A); }
	static char Subtract_ByteByte(char A, char B) { return NativeCall<char, char, char>(nullptr, "UKismetMathLibrary.Subtract_ByteByte", A, B); }
	static FTimespan * Subtract_DateTimeTimespan(FTimespan * result, FTimespan A, FTimespan B) { return NativeCall<FTimespan *, FTimespan *, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.Subtract_DateTimeTimespan", result, A, B); }
	static long double Subtract_DoubleDouble(long double A, long double B) { return NativeCall<long double, long double, long double>(nullptr, "UKismetMathLibrary.Subtract_DoubleDouble", A, B); }
	static long double Subtract_DoubleFloat(long double A, float B) { return NativeCall<long double, long double, float>(nullptr, "UKismetMathLibrary.Subtract_DoubleFloat", A, B); }
	static float Subtract_FloatFloat(float A, float B) { return NativeCall<float, float, float>(nullptr, "UKismetMathLibrary.Subtract_FloatFloat", A, B); }
	static int Subtract_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Subtract_IntInt", A, B); }
	static FVector2D * Subtract_Vector2DFloat(FVector2D * result, FVector2D A, float B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, float>(nullptr, "UKismetMathLibrary.Subtract_Vector2DFloat", result, A, B); }
	static FVector2D * Subtract_Vector2DVector2D(FVector2D * result, FVector2D A, FVector2D B) { return NativeCall<FVector2D *, FVector2D *, FVector2D, FVector2D>(nullptr, "UKismetMathLibrary.Subtract_Vector2DVector2D", result, A, B); }
	static FVector * Subtract_VectorFloat(FVector * result, FVector A, float B) { return NativeCall<FVector *, FVector *, FVector, float>(nullptr, "UKismetMathLibrary.Subtract_VectorFloat", result, A, B); }
	static FVector * Subtract_VectorVector(FVector * result, FVector A, FVector B) { return NativeCall<FVector *, FVector *, FVector, FVector>(nullptr, "UKismetMathLibrary.Subtract_VectorVector", result, A, B); }
	static FTransform * TEase(FTransform * result, const FTransform * A, const FTransform * B, float Alpha, TEnumAsByte<enum EEasingFunc::Type> EasingFunc, float BlendExp, int Steps) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *, float, TEnumAsByte<enum EEasingFunc::Type>, float, int>(nullptr, "UKismetMathLibrary.TEase", result, A, B, Alpha, EasingFunc, BlendExp, Steps); }
	static FTransform * TInterpTo(FTransform * result, const FTransform * Current, const FTransform * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *, float, float>(nullptr, "UKismetMathLibrary.TInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FTransform * TLerp(FTransform * result, const FTransform * A, const FTransform * B, float Alpha) { return NativeCall<FTransform *, FTransform *, const FTransform *, const FTransform *, float>(nullptr, "UKismetMathLibrary.TLerp", result, A, B, Alpha); }
	static float Tan(float A) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.Tan", A); }
	static FTimespan * TimespanMaxValue(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(nullptr, "UKismetMathLibrary.TimespanMaxValue", result); }
	static FTimespan * TimespanMinValue(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(nullptr, "UKismetMathLibrary.TimespanMinValue", result); }
	static float TimespanRatio(FTimespan A, FTimespan B) { return NativeCall<float, FTimespan, FTimespan>(nullptr, "UKismetMathLibrary.TimespanRatio", A, B); }
	static FDateTime * Today(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "UKismetMathLibrary.Today", result); }
	static FVector * TransformDirection(FVector * result, const FTransform * T, FVector Direction) { return NativeCall<FVector *, FVector *, const FTransform *, FVector>(nullptr, "UKismetMathLibrary.TransformDirection", result, T, Direction); }
	static FVector * TransformLocation(FVector * result, const FTransform * T, FVector Location) { return NativeCall<FVector *, FVector *, const FTransform *, FVector>(nullptr, "UKismetMathLibrary.TransformLocation", result, T, Location); }
	static FDateTime * UtcNow(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(nullptr, "UKismetMathLibrary.UtcNow", result); }
	static FVector * VEase(FVector * result, FVector A, FVector B, float Alpha, TEnumAsByte<enum EEasingFunc::Type> EasingFunc, float BlendExp, int Steps) { return NativeCall<FVector *, FVector *, FVector, FVector, float, TEnumAsByte<enum EEasingFunc::Type>, float, int>(nullptr, "UKismetMathLibrary.VEase", result, A, B, Alpha, EasingFunc, BlendExp, Steps); }
	static FVector * VInterpTo(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float>(nullptr, "UKismetMathLibrary.VInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FVector * VInterpTo_ClampDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float ClampDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_ClampDist", result, Current, Target, DeltaTime, InterpSpeed, ClampDist); }
	static FVector * VInterpTo_Constant(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_Constant", result, Current, Target, DeltaTime, InterpSpeed); }
	static FVector * VInterpTo_Constant_ClampDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float ClampDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_Constant_ClampDist", result, Current, Target, DeltaTime, InterpSpeed, ClampDist); }
	static FVector * VInterpTo_Constant_SnapPastDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float SnapPastDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_Constant_SnapPastDist", result, Current, Target, DeltaTime, InterpSpeed, SnapPastDist); }
	static FVector * VInterpTo_Constant_SnapWithinDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float SnapWithinDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_Constant_SnapWithinDist", result, Current, Target, DeltaTime, InterpSpeed, SnapWithinDist); }
	static FVector * VInterpTo_SnapPastDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float SnapPastDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_SnapPastDist", result, Current, Target, DeltaTime, InterpSpeed, SnapPastDist); }
	static FVector * VInterpTo_SnapWithinDist(FVector * result, FVector Current, FVector Target, float DeltaTime, float InterpSpeed, float SnapWithinDist) { return NativeCall<FVector *, FVector *, FVector, FVector, float, float, float>(nullptr, "UKismetMathLibrary.VInterpTo_SnapWithinDist", result, Current, Target, DeltaTime, InterpSpeed, SnapWithinDist); }
	static FVector * VLerp(FVector * result, FVector A, FVector B, float V) { return NativeCall<FVector *, FVector *, FVector, FVector, float>(nullptr, "UKismetMathLibrary.VLerp", result, A, B, V); }
	static float VSize2D(FVector2D A) { return NativeCall<float, FVector2D>(nullptr, "UKismetMathLibrary.VSize2D", A); }
	static float VSize(FVector A) { return NativeCall<float, FVector>(nullptr, "UKismetMathLibrary.VSize", A); }
	static float VSizeSquared2D(FVector2D A) { return NativeCall<float, FVector2D>(nullptr, "UKismetMathLibrary.VSizeSquared2D", A); }
	static float VSizeSquared(FVector A) { return NativeCall<float, FVector>(nullptr, "UKismetMathLibrary.VSizeSquared", A); }
	static float WrapAngle(float degrees) { return NativeCall<float, float>(nullptr, "UKismetMathLibrary.WrapAngle", degrees); }
	static int Xor_IntInt(int A, int B) { return NativeCall<int, int, int>(nullptr, "UKismetMathLibrary.Xor_IntInt", A, B); }
	static FVector2D * Conv_VectorToVector2D(FVector2D * result, FVector InVec) { return NativeCall<FVector2D *, FVector2D *, FVector>(nullptr, "UKismetMathLibrary.Conv_VectorToVector2D", result, InVec); }
};

