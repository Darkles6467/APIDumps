#pragma once

#include "BaseDeclarations.h"
struct FSoftSkinVertex
{
	char __padding[0x4cL];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FSoftSkinVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FSoftSkinVertex.TangentX"); }
	FPackedNormal& TangentYField() { return *GetNativePointerField<FPackedNormal*>(this, "FSoftSkinVertex.TangentY"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FSoftSkinVertex.TangentZ"); }
	FieldArray<FVector2D[4], 24> UVsField() { return {this, "FSoftSkinVertex.UVs"}; }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FSoftSkinVertex.Color"); }
	FieldArray<char, 8> InfluenceBonesField() { return {this, "FSoftSkinVertex.InfluenceBones"}; }
	FieldArray<char, 8> InfluenceWeightsField() { return {this, "FSoftSkinVertex.InfluenceWeights"}; }
};

