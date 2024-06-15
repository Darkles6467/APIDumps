#pragma once

#include "BaseDeclarations.h"
struct FKBoxElem
{
	char __padding[0x70L];
	FMatrix& TM_DEPRECATEDField() { return *GetNativePointerField<FMatrix*>(this, "FKBoxElem.TM_DEPRECATED"); }
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FKBoxElem.Center"); }
	FQuat& OrientationField() { return *GetNativePointerField<FQuat*>(this, "FKBoxElem.Orientation"); }
	float& XField() { return *GetNativePointerField<float*>(this, "FKBoxElem.X"); }
	float& YField() { return *GetNativePointerField<float*>(this, "FKBoxElem.Y"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FKBoxElem.Z"); }

	// Functions

	FBox * CalcAABB(FBox * result, const FTransform * BoneTM, float Scale) { return NativeCall<FBox *, FBox *, const FTransform *, float>(this, "FKBoxElem.CalcAABB", result, BoneTM, Scale); }
	void DrawElemSolid(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, float Scale, const FMaterialRenderProxy * MaterialRenderProxy) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, float, const FMaterialRenderProxy *>(this, "FKBoxElem.DrawElemSolid", PDI, ElemTM, Scale, MaterialRenderProxy); }
	void DrawElemWire(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, const FVector * Scale3D, const FColor Color) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, const FVector *, const FColor>(this, "FKBoxElem.DrawElemWire", PDI, ElemTM, Scale3D, Color); }
	void GetElemSolid(const FTransform * ElemTM, float Scale, const FMaterialRenderProxy * MaterialRenderProxy, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FTransform *, float, const FMaterialRenderProxy *, int, FMeshElementCollector *>(this, "FKBoxElem.GetElemSolid", ElemTM, Scale, MaterialRenderProxy, ViewIndex, Collector); }
};

