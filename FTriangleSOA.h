#pragma once

#include "BaseDeclarations.h"
struct FTriangleSOA
{
	char __padding[0xe0L];
	FieldArray<FVector3SOA[3], 33> PositionsField() { return {this, "FTriangleSOA.Positions"}; }
	FVector4SOA& NormalsField() { return *GetNativePointerField<FVector4SOA*>(this, "FTriangleSOA.Normals"); }
	FieldArray<unsigned int, 4> PayloadField() { return {this, "FTriangleSOA.Payload"}; }
};

