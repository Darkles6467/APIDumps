#pragma once

#include "BaseDeclarations.h"
struct FMeshFace
{
	char __padding[0x80L];
	FieldArray<unsigned int, 3> iWedgeField() { return {this, "FMeshFace.iWedge"}; }
	unsigned __int16& MeshMaterialIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FMeshFace.MeshMaterialIndex"); }
	FieldArray<FVector, 3> TangentXField() { return {this, "FMeshFace.TangentX"}; }
	FieldArray<FVector, 3> TangentYField() { return {this, "FMeshFace.TangentY"}; }
	FieldArray<FVector, 3> TangentZField() { return {this, "FMeshFace.TangentZ"}; }
	unsigned int& SmoothingGroupsField() { return *GetNativePointerField<unsigned int*>(this, "FMeshFace.SmoothingGroups"); }
};

