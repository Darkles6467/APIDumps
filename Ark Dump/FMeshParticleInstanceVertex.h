#pragma once

#include "BaseDeclarations.h"
struct FMeshParticleInstanceVertex
{
	char __padding[0x60L];
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMeshParticleInstanceVertex.Color"); }
	FieldArray<FVector4[3], 43> TransformField() { return {this, "FMeshParticleInstanceVertex.Transform"}; }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FMeshParticleInstanceVertex.Velocity"); }
	FieldArray<__int16, 4> SubUVParamsField() { return {this, "FMeshParticleInstanceVertex.SubUVParams"}; }
	float& SubUVLerpField() { return *GetNativePointerField<float*>(this, "FMeshParticleInstanceVertex.SubUVLerp"); }
	float& RelativeTimeField() { return *GetNativePointerField<float*>(this, "FMeshParticleInstanceVertex.RelativeTime"); }
};

