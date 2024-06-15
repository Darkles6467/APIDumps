#pragma once

#include "BaseDeclarations.h"
struct FKSphereElem
{
	char __padding[0x50L];
	FMatrix& TM_DEPRECATEDField() { return *GetNativePointerField<FMatrix*>(this, "FKSphereElem.TM_DEPRECATED"); }
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FKSphereElem.Center"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FKSphereElem.Radius"); }

	// Functions

	FBox * CalcAABB(FBox * result, const FTransform * BoneTM, float Scale) { return NativeCall<FBox *, FBox *, const FTransform *, float>(this, "FKSphereElem.CalcAABB", result, BoneTM, Scale); }
	void DrawElemWire(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, float Scale, const FColor Color) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, float, const FColor>(this, "FKSphereElem.DrawElemWire", PDI, ElemTM, Scale, Color); }
};

