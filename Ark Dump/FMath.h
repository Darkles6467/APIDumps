#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformMath
{

	// Functions

	static float SRand() { return NativeCall<float>(nullptr, "FGenericPlatformMath.SRand"); }
	static void SRandInit(int Seed) { NativeCall<void, int>(nullptr, "FGenericPlatformMath.SRandInit", Seed); }
};

struct FWindowsPlatformMath : FGenericPlatformMath
{
};

struct FMath : FWindowsPlatformMath
{

	// Functions

	static FVector * VRand(FVector * result) { return NativeCall<FVector *, FVector *>(nullptr, "FMath.VRand", result); }
	static float UnwindRadians(float A) { return NativeCall<float, float>(nullptr, "FMath.UnwindRadians", A); }
	static FLinearColor * CInterpTo(FLinearColor * result, const FLinearColor * Current, const FLinearColor * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *, const FLinearColor *, float, float>(nullptr, "FMath.CInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) { return NativeCall<float, float, float, float>(nullptr, "FMath.ClampAngle", AngleDegrees, MinAngleDegrees, MaxAngleDegrees); }
	static FVector * ClosestPointOnLine(FVector * result, const FVector * LineStart, const FVector * LineEnd, const FVector * Point) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const FVector *>(nullptr, "FMath.ClosestPointOnLine", result, LineStart, LineEnd, Point); }
	static FVector * ClosestPointOnSegment(FVector * result, const FVector * Point, const FVector * StartPoint, const FVector * EndPoint) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const FVector *>(nullptr, "FMath.ClosestPointOnSegment", result, Point, StartPoint, EndPoint); }
	static FVector * ComputeBaryCentric2D(FVector * result, const FVector * Point, const FVector * A, const FVector * B, const FVector * C) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const FVector *, const FVector *>(nullptr, "FMath.ComputeBaryCentric2D", result, Point, A, B, C); }
	static bool Eval(FString Str, float * OutValue) { return NativeCall<bool, FString, float *>(nullptr, "FMath.Eval", Str, OutValue); }
	static float FAngleInterpTo(float CurrentDegrees, float TargetDegrees, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "FMath.FAngleInterpTo", CurrentDegrees, TargetDegrees, DeltaTime, InterpSpeed); }
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "FMath.FInterpConstantTo", Current, Target, DeltaTime, InterpSpeed); }
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed) { return NativeCall<float, float, float, float, float>(nullptr, "FMath.FInterpTo", Current, Target, DeltaTime, InterpSpeed); }
	static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate) { return NativeCall<float, float, float, float>(nullptr, "FMath.FixedTurn", InCurrent, InDesired, InDeltaRate); }
	static float PointDistToSegment(const FVector * Point, const FVector * StartPoint, const FVector * EndPoint) { return NativeCall<float, const FVector *, const FVector *, const FVector *>(nullptr, "FMath.PointDistToSegment", Point, StartPoint, EndPoint); }
	static bool PointsAreCoplanar(const TArray<FVector> * Points, const float Tolerance) { return NativeCall<bool, const TArray<FVector> *, const float>(nullptr, "FMath.PointsAreCoplanar", Points, Tolerance); }
	static FRotator * QInterpTo(FRotator * result, const FRotator * Current, const FRotator * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, const FRotator *, const FRotator *, float, float>(nullptr, "FMath.QInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * RInterpConstantTo(FRotator * result, const FRotator * Current, const FRotator * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, const FRotator *, const FRotator *, float, float>(nullptr, "FMath.RInterpConstantTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * RInterpConstantTo(FRotator * result, const FRotator * Current, const FRotator * Target, float DeltaTime, FRotator InterpSpeedPerAxis) { return NativeCall<FRotator *, FRotator *, const FRotator *, const FRotator *, float, FRotator>(nullptr, "FMath.RInterpConstantTo", result, Current, Target, DeltaTime, InterpSpeedPerAxis); }
	static FRotator * RInterpTo(FRotator * result, const FRotator * Current, const FRotator * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FRotator *, FRotator *, const FRotator *, const FRotator *, float, float>(nullptr, "FMath.RInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FRotator * RInterpTo(FRotator * result, const FRotator * Current, const FRotator * Target, float DeltaTime, FRotator InterpSpeedPerAxis) { return NativeCall<FRotator *, FRotator *, const FRotator *, const FRotator *, float, FRotator>(nullptr, "FMath.RInterpTo", result, Current, Target, DeltaTime, InterpSpeedPerAxis); }
	static FVector * RandPointInBox(FVector * result, const FBox * Box) { return NativeCall<FVector *, FVector *, const FBox *>(nullptr, "FMath.RandPointInBox", result, Box); }
	static void SegmentDistToSegment(FVector A1, FVector B1, FVector A2, FVector B2, FVector * OutP1, FVector * OutP2) { NativeCall<void, FVector, FVector, FVector, FVector, FVector *, FVector *>(nullptr, "FMath.SegmentDistToSegment", A1, B1, A2, B2, OutP1, OutP2); }
	static bool SegmentPlaneIntersection(const FVector * StartPoint, const FVector * EndPoint, const FPlane * Plane, FVector * out_IntersectPoint) { return NativeCall<bool, const FVector *, const FVector *, const FPlane *, FVector *>(nullptr, "FMath.SegmentPlaneIntersection", StartPoint, EndPoint, Plane, out_IntersectPoint); }
	static FVector * VInterpConstantTo(FVector * result, const FVector Current, const FVector * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FVector *, FVector *, const FVector, const FVector *, float, float>(nullptr, "FMath.VInterpConstantTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FVector * VInterpConstantTo_ClampDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float ClampDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpConstantTo_ClampDist", result, Current, Target, DeltaTime, InterpSpeed, ClampDist); }
	static FVector * VInterpConstantTo_SnapPastDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float SnapPastDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpConstantTo_SnapPastDist", result, Current, Target, DeltaTime, InterpSpeed, SnapPastDist); }
	static FVector * VInterpConstantTo_SnapWithinDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float SnapWithinDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpConstantTo_SnapWithinDist", result, Current, Target, DeltaTime, InterpSpeed, SnapWithinDist); }
	static FVector * VInterpNormalRotationTo(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float RotationSpeedDegrees) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float>(nullptr, "FMath.VInterpNormalRotationTo", result, Current, Target, DeltaTime, RotationSpeedDegrees); }
	static FVector * VInterpTo(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float>(nullptr, "FMath.VInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static FVector * VInterpTo_ClampDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float ClampDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpTo_ClampDist", result, Current, Target, DeltaTime, InterpSpeed, ClampDist); }
	static FVector * VInterpTo_SnapPastDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float SnapPastDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpTo_SnapPastDist", result, Current, Target, DeltaTime, InterpSpeed, SnapPastDist); }
	static FVector * VInterpTo_SnapWithinDist(FVector * result, const FVector * Current, const FVector * Target, float DeltaTime, float InterpSpeed, float SnapWithinDist) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float, float, float>(nullptr, "FMath.VInterpTo_SnapWithinDist", result, Current, Target, DeltaTime, InterpSpeed, SnapWithinDist); }
	static FVector * VRandCone(FVector * result, const FVector * Dir, float ConeHalfAngleRad) { return NativeCall<FVector *, FVector *, const FVector *, float>(nullptr, "FMath.VRandCone", result, Dir, ConeHalfAngleRad); }
	static FVector2D * Vector2DInterpTo(FVector2D * result, const FVector2D * Current, const FVector2D * Target, float DeltaTime, float InterpSpeed) { return NativeCall<FVector2D *, FVector2D *, const FVector2D *, const FVector2D *, float, float>(nullptr, "FMath.Vector2DInterpTo", result, Current, Target, DeltaTime, InterpSpeed); }
	static bool LineBoxIntersection(const FBox * Box, const FVector * Start, const FVector * End, const FVector * Direction, const FVector * OneOverDirection) { return NativeCall<bool, const FBox *, const FVector *, const FVector *, const FVector *, const FVector *>(nullptr, "FMath.LineBoxIntersection", Box, Start, End, Direction, OneOverDirection); }
};

