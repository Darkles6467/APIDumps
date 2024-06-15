#pragma once

#include "BaseDeclarations.h"
struct FSeparatingAxisPointCheck
{
	char __padding[0x40L];
	FVector& HitNormalField() { return *GetNativePointerField<FVector*>(this, "FSeparatingAxisPointCheck.HitNormal"); }
	float& BestDistField() { return *GetNativePointerField<float*>(this, "FSeparatingAxisPointCheck.BestDist"); }
	bool& bHitField() { return *GetNativePointerField<bool*>(this, "FSeparatingAxisPointCheck.bHit"); }
	const TArray<FVector> * PolyVerticesField() { return GetNativePointerField<const TArray<FVector> *>(this, "FSeparatingAxisPointCheck.PolyVertices"); }
	FVector& BoxCenterField() { return *GetNativePointerField<FVector*>(this, "FSeparatingAxisPointCheck.BoxCenter"); }
	FVector& BoxExtentField() { return *GetNativePointerField<FVector*>(this, "FSeparatingAxisPointCheck.BoxExtent"); }
	bool& bCalcLeastPenetrationField() { return *GetNativePointerField<bool*>(this, "FSeparatingAxisPointCheck.bCalcLeastPenetration"); }
};

