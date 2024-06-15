#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USlateBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Functions

	void GetLocalSize(const FVector2D * InScale) { NativeCall<void, const FVector2D *>(this, "USlateBlueprintLibrary.GetLocalSize", InScale); }
	static FVector2D * AbsoluteToLocal(FVector2D * result, const FGeometry * Geometry, FVector2D AbsoluteCoordinate) { return NativeCall<FVector2D *, FVector2D *, const FGeometry *, FVector2D>(nullptr, "USlateBlueprintLibrary.AbsoluteToLocal", result, Geometry, AbsoluteCoordinate); }
	static bool IsUnderLocation(const FGeometry * Geometry, const FVector2D * AbsoluteCoordinate) { return NativeCall<bool, const FGeometry *, const FVector2D *>(nullptr, "USlateBlueprintLibrary.IsUnderLocation", Geometry, AbsoluteCoordinate); }
	static FVector2D * LocalToAbsolute(FVector2D * result, const FGeometry * Geometry, FVector2D LocalCoordinate) { return NativeCall<FVector2D *, FVector2D *, const FGeometry *, FVector2D>(nullptr, "USlateBlueprintLibrary.LocalToAbsolute", result, Geometry, LocalCoordinate); }
};

