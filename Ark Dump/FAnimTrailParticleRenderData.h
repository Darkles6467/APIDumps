#pragma once

#include "BaseDeclarations.h"
struct FAnimTrailParticleRenderData
{
	char __padding[0x50L];
	const char * ParticleDataAddressField() { return GetNativePointerField<const char *>(this, "FAnimTrailParticleRenderData.ParticleDataAddress"); }
	const FBaseParticle * PrevPrevParticleField() { return GetNativePointerField<const FBaseParticle *>(this, "FAnimTrailParticleRenderData.PrevPrevParticle"); }
	const FAnimTrailTypeDataPayload * PrevPrevPayloadField() { return GetNativePointerField<const FAnimTrailTypeDataPayload *>(this, "FAnimTrailParticleRenderData.PrevPrevPayload"); }
	const FBaseParticle * PrevParticleField() { return GetNativePointerField<const FBaseParticle *>(this, "FAnimTrailParticleRenderData.PrevParticle"); }
	const FAnimTrailTypeDataPayload * PrevPayloadField() { return GetNativePointerField<const FAnimTrailTypeDataPayload *>(this, "FAnimTrailParticleRenderData.PrevPayload"); }
	const FBaseParticle * ParticleField() { return GetNativePointerField<const FBaseParticle *>(this, "FAnimTrailParticleRenderData.Particle"); }
	const FAnimTrailTypeDataPayload * PayloadField() { return GetNativePointerField<const FAnimTrailTypeDataPayload *>(this, "FAnimTrailParticleRenderData.Payload"); }
	const FBaseParticle * NextParticleField() { return GetNativePointerField<const FBaseParticle *>(this, "FAnimTrailParticleRenderData.NextParticle"); }
	const FAnimTrailTypeDataPayload * NextPayloadField() { return GetNativePointerField<const FAnimTrailTypeDataPayload *>(this, "FAnimTrailParticleRenderData.NextPayload"); }

	// Functions

	void CalcVertexData(float InterpFactor, FVector * OutLocation, FVector * OutFirst, FVector * OutSecond, float * OutTileU, float * OutSize, FLinearColor * OutColor, FVector4 * OutDynamicParameters) { NativeCall<void, float, FVector *, FVector *, FVector *, float *, float *, FLinearColor *, FVector4 *>(this, "FAnimTrailParticleRenderData.CalcVertexData", InterpFactor, OutLocation, OutFirst, OutSecond, OutTileU, OutSize, OutColor, OutDynamicParameters); }
};

