#pragma once

#include "BaseDeclarations.h"
#include "FStaticMeshSceneProxy.h"
#include "FPrimitiveSceneProxy.h"

struct FInteractiveFoliageSceneProxy : FStaticMeshSceneProxy
{
	char __padding[0x20L];
	FieldArray<_BYTE, 4> FoliageImpluseDirectionField() { return {this, "FInteractiveFoliageSceneProxy.FoliageImpluseDirection"}; }
	FVector4& FoliageNormalizedRotationAxisAndAngleField() { return *GetNativePointerField<FVector4*>(this, "FInteractiveFoliageSceneProxy.FoliageNormalizedRotationAxisAndAngle"); }

	// Functions

	void GetFoliageParameters(FVector * OutFoliageImpluseDirection, FVector4 * OutFoliageNormalizedRotationAxisAndAngle) { NativeCall<void, FVector *, FVector4 *>(this, "FInteractiveFoliageSceneProxy.GetFoliageParameters", OutFoliageImpluseDirection, OutFoliageNormalizedRotationAxisAndAngle); }
};

