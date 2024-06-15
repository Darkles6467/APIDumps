#pragma once

#include "BaseDeclarations.h"
struct FMoveCursor
{
	char __padding[0x18L];
	ECursorMoveGranularity& GranularityField() { return *GetNativePointerField<ECursorMoveGranularity*>(this, "FMoveCursor.Granularity"); }
	ECursorMoveMethod& MethodField() { return *GetNativePointerField<ECursorMoveMethod*>(this, "FMoveCursor.Method"); }
	FVector2D& DirectionOrPositionField() { return *GetNativePointerField<FVector2D*>(this, "FMoveCursor.DirectionOrPosition"); }
	ECursorAction& ActionField() { return *GetNativePointerField<ECursorAction*>(this, "FMoveCursor.Action"); }
	float& GeometryScaleField() { return *GetNativePointerField<float*>(this, "FMoveCursor.GeometryScale"); }

	// Functions

	static FMoveCursor * Cardinal(FMoveCursor * result, ECursorMoveGranularity Granularity, FIntPoint Direction, ECursorAction Action) { return NativeCall<FMoveCursor *, FMoveCursor *, ECursorMoveGranularity, FIntPoint, ECursorAction>(nullptr, "FMoveCursor.Cardinal", result, Granularity, Direction, Action); }
	FIntPoint * GetMoveDirection(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FMoveCursor.GetMoveDirection", result); }
	bool IsHorizontalMovement() { return NativeCall<bool>(this, "FMoveCursor.IsHorizontalMovement"); }
	static FMoveCursor * ViaScreenPointer(FMoveCursor * result, FVector2D LocalPosition, float GeometryScale, ECursorAction Action) { return NativeCall<FMoveCursor *, FMoveCursor *, FVector2D, float, ECursorAction>(nullptr, "FMoveCursor.ViaScreenPointer", result, LocalPosition, GeometryScale, Action); }
};

