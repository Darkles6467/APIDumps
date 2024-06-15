#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialBillboardComponent : UPrimitiveComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> ElementsField() { return {this, "UMaterialBillboardComponent.Elements"}; }

	// Functions

	void AddElement(UMaterialInterface * Material, UCurveFloat * DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat * DistanceToSizeCurve) { NativeCall<void, UMaterialInterface *, UCurveFloat *, bool, float, float, UCurveFloat *>(this, "UMaterialBillboardComponent.AddElement", Material, DistanceToOpacityCurve, bSizeIsInScreenSpace, BaseSizeX, BaseSizeY, DistanceToSizeCurve); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UMaterialBillboardComponent.CalcBounds", result, LocalToWorld); }
};

