#pragma once

#include "BaseDeclarations.h"
struct FParticleSpriteVertex
{
	char __padding[0x40L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FParticleSpriteVertex.Position"); }
	float& RelativeTimeField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertex.RelativeTime"); }
	FVector& OldPositionField() { return *GetNativePointerField<FVector*>(this, "FParticleSpriteVertex.OldPosition"); }
	float& ParticleIdField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertex.ParticleId"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FParticleSpriteVertex.Size"); }
	float& RotationField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertex.Rotation"); }
	float& SubImageIndexField() { return *GetNativePointerField<float*>(this, "FParticleSpriteVertex.SubImageIndex"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FParticleSpriteVertex.Color"); }
};

struct FParticleBeamTrailVertex : FParticleSpriteVertex
{
	char __padding[0x10L];
	float& Tex_UField() { return *GetNativePointerField<float*>(this, "FParticleBeamTrailVertex.Tex_U"); }
	float& Tex_VField() { return *GetNativePointerField<float*>(this, "FParticleBeamTrailVertex.Tex_V"); }
	float& Tex_U2Field() { return *GetNativePointerField<float*>(this, "FParticleBeamTrailVertex.Tex_U2"); }
	float& Tex_V2Field() { return *GetNativePointerField<float*>(this, "FParticleBeamTrailVertex.Tex_V2"); }
};

