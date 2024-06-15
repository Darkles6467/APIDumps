#pragma once

#include "BaseDeclarations.h"
struct FKAggregateGeom
{
	char __padding[0x48L];
	TArray<FKSphereElem>& SphereElemsField() { return *GetNativePointerField<TArray<FKSphereElem>*>(this, "FKAggregateGeom.SphereElems"); }
	TArray<FKBoxElem>& BoxElemsField() { return *GetNativePointerField<TArray<FKBoxElem>*>(this, "FKAggregateGeom.BoxElems"); }
	TArray<FKSphylElem>& SphylElemsField() { return *GetNativePointerField<TArray<FKSphylElem>*>(this, "FKAggregateGeom.SphylElems"); }
	TArray<FKConvexElem>& ConvexElemsField() { return *GetNativePointerField<TArray<FKConvexElem>*>(this, "FKAggregateGeom.ConvexElems"); }
	FKConvexGeomRenderInfo * RenderInfoField() { return GetNativePointerField<FKConvexGeomRenderInfo *>(this, "FKAggregateGeom.RenderInfo"); }

	// Functions

	FBox * CalcAABB(FBox * result, const FTransform * Transform) { return NativeCall<FBox *, FBox *, const FTransform *>(this, "FKAggregateGeom.CalcAABB", result, Transform); }
	void CalcBoxSphereBounds(FBoxSphereBounds * Output, const FTransform * LocalToWorld) { NativeCall<void, FBoxSphereBounds *, const FTransform *>(this, "FKAggregateGeom.CalcBoxSphereBounds", Output, LocalToWorld); }
	void DrawAggGeom(FPrimitiveDrawInterface * PDI, const FTransform * Transform, const FColor Color, const FMaterialRenderProxy * MatInst, bool bPerHullColor, bool bDrawSolid, bool bUseEditorDepthTest) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, const FColor, const FMaterialRenderProxy *, bool, bool, bool>(this, "FKAggregateGeom.DrawAggGeom", PDI, Transform, Color, MatInst, bPerHullColor, bDrawSolid, bUseEditorDepthTest); }
	void FreeRenderInfo() { NativeCall<void>(this, "FKAggregateGeom.FreeRenderInfo"); }
	void GetAggGeom(const FTransform * Transform, const FColor Color, const FMaterialRenderProxy * MatInst, bool bPerHullColor, bool bDrawSolid, bool bUseEditorDepthTest, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FTransform *, const FColor, const FMaterialRenderProxy *, bool, bool, bool, int, FMeshElementCollector *>(this, "FKAggregateGeom.GetAggGeom", Transform, Color, MatInst, bPerHullColor, bDrawSolid, bUseEditorDepthTest, ViewIndex, Collector); }
	float GetVolume(const FVector * Scale) { return NativeCall<float, const FVector *>(this, "FKAggregateGeom.GetVolume", Scale); }
	void Serialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FKAggregateGeom.Serialize", Ar); }
};

