#pragma once

#include "BaseDeclarations.h"
struct FRigidSkinVertex
{
	char __padding[0x40L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FRigidSkinVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FRigidSkinVertex.TangentX"); }
	FPackedNormal& TangentYField() { return *GetNativePointerField<FPackedNormal*>(this, "FRigidSkinVertex.TangentY"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FRigidSkinVertex.TangentZ"); }
	FieldArray<FVector2D[4], 24> UVsField() { return {this, "FRigidSkinVertex.UVs"}; }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FRigidSkinVertex.Color"); }
	char& BoneField() { return *GetNativePointerField<char*>(this, "FRigidSkinVertex.Bone"); }
};

