#pragma once

#include "BaseDeclarations.h"
struct VTriangle
{
	char __padding[0x80L];
	FieldArray<unsigned int, 3> WedgeIndexField() { return {this, "VTriangle.WedgeIndex"}; }
	char& MatIndexField() { return *GetNativePointerField<char*>(this, "VTriangle.MatIndex"); }
	char& AuxMatIndexField() { return *GetNativePointerField<char*>(this, "VTriangle.AuxMatIndex"); }
	unsigned int& SmoothingGroupsField() { return *GetNativePointerField<unsigned int*>(this, "VTriangle.SmoothingGroups"); }
	FieldArray<FVector, 3> TangentXField() { return {this, "VTriangle.TangentX"}; }
	FieldArray<FVector, 3> TangentYField() { return {this, "VTriangle.TangentY"}; }
	FieldArray<FVector, 3> TangentZField() { return {this, "VTriangle.TangentZ"}; }
};

