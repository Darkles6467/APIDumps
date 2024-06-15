#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeSplinesComponent : UPrimitiveComponent
{
	char __padding[0x20L];
	FieldArray<_BYTE, 8> ControlPointsField() { return {this, "ULandscapeSplinesComponent.ControlPoints"}; }
	TArray<ULandscapeSplineSegment *>& SegmentsField() { return *GetNativePointerField<TArray<ULandscapeSplineSegment *>*>(this, "ULandscapeSplinesComponent.Segments"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "ULandscapeSplinesComponent.CalcBounds", result, LocalToWorld); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeSplinesComponent.PostLoad"); }
};

