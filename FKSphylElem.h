#pragma once

#include "BaseDeclarations.h"
struct FKSphylElem
{
	char __padding[0x70L];
	FMatrix& TM_DEPRECATEDField() { return *GetNativePointerField<FMatrix*>(this, "FKSphylElem.TM_DEPRECATED"); }
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FKSphylElem.Center"); }
	FQuat& OrientationField() { return *GetNativePointerField<FQuat*>(this, "FKSphylElem.Orientation"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FKSphylElem.Radius"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "FKSphylElem.Length"); }

	// Functions

	FBox * CalcAABB(FBox * result, const FTransform * BoneTM, float Scale) { return NativeCall<FBox *, FBox *, const FTransform *, float>(this, "FKSphylElem.CalcAABB", result, BoneTM, Scale); }
	void DrawElemSolid(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, float Scale, const FMaterialRenderProxy * MaterialRenderProxy) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, float, const FMaterialRenderProxy *>(this, "FKSphylElem.DrawElemSolid", PDI, ElemTM, Scale, MaterialRenderProxy); }
	void DrawElemWire(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, float Scale, const FColor Color) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, float, const FColor>(this, "FKSphylElem.DrawElemWire", PDI, ElemTM, Scale, Color); }
	void GetElemSolid(const FTransform * ElemTM, float Scale, const FMaterialRenderProxy * MaterialRenderProxy, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FTransform *, float, const FMaterialRenderProxy *, int, FMeshElementCollector *>(this, "FKSphylElem.GetElemSolid", ElemTM, Scale, MaterialRenderProxy, ViewIndex, Collector); }
};

