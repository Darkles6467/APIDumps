#pragma once

#include "BaseDeclarations.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCustomMeshTriangle.h"

struct UCustomMeshComponent : UMeshComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> CustomMeshTrisField() { return {this, "UCustomMeshComponent.CustomMeshTris"}; }

	// Functions

	unsigned int GetNumMaterials() { return NativeCall<unsigned int>(this, "UCustomMeshComponent.GetNumMaterials"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UCustomMeshComponent.CalcBounds", result, LocalToWorld); }
	bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle> * Triangles) { return NativeCall<bool, const TArray<FCustomMeshTriangle> *>(this, "UCustomMeshComponent.SetCustomMeshTriangles", Triangles); }
};

