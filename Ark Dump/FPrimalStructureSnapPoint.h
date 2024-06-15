#pragma once

#include "BaseDeclarations.h"
struct FPrimalStructureSnapPoint
{
	char __padding[0xc8L];
	FName& SnapPointDescriptionField() { return *GetNativePointerField<FName*>(this, "FPrimalStructureSnapPoint.SnapPointDescription"); }
	FVector& PointLocOffsetField() { return *GetNativePointerField<FVector*>(this, "FPrimalStructureSnapPoint.PointLocOffset"); }
	FRotator& PointRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "FPrimalStructureSnapPoint.PointRotOffset"); }
	FRotator& PointComparisonExtraRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "FPrimalStructureSnapPoint.PointComparisonExtraRotOffset"); }
	int& ToPointSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSnapPoint.ToPointSnapTypeFlags"); }
	int& ToPointSnapTypeExcludeFlagsField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSnapPoint.ToPointSnapTypeExcludeFlags"); }
	int& SnapPointMatchGroupField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSnapPoint.SnapPointMatchGroup"); }
	FName& StaticMeshSnapSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalStructureSnapPoint.StaticMeshSnapSocketName"); }
	FPrimalStructureSnapTagSettings& SnapTagsField() { return *GetNativePointerField<FPrimalStructureSnapTagSettings*>(this, "FPrimalStructureSnapPoint.SnapTags"); }

	// Functions

	FPrimalStructureSnapPoint * operator=(const FPrimalStructureSnapPoint * __that) { return NativeCall<FPrimalStructureSnapPoint *, const FPrimalStructureSnapPoint *>(this, "FPrimalStructureSnapPoint.operator=", __that); }
};

