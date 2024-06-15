#pragma once

#include "BaseDeclarations.h"
struct FParticleSpriteVertexNonInstanced
{
	char __padding[0x48L];
	FVector2D& UVField() { return *GetNativePointerField<FVector2D*>(this, "FParticleSpriteVertexNonInstanced.UV"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FParticleSpriteVertexNonInstanced.Position"); }
	float& RelativeTimeField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertexNonInstanced.RelativeTime"); }
	FVector& OldPositionField() { return *GetNativePointerField<FVector*>(this, "FParticleSpriteVertexNonInstanced.OldPosition"); }
	float& ParticleIdField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertexNonInstanced.ParticleId"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FParticleSpriteVertexNonInstanced.Size"); }
	float& RotationField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertexNonInstanced.Rotation"); }
	float& SubImageIndexField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertexNonInstanced.SubImageIndex"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FParticleSpriteVertexNonInstanced.Color"); }
};

