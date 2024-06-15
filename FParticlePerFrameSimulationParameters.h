#pragma once

#include "BaseDeclarations.h"
struct FParticlePerFrameSimulationParameters
{
	char __padding[0x30L];
	FVector4& PointAttractorField() { return *GetNativePointerField<FVector4*>(this, "FParticlePerFrameSimulationParameters.PointAttractor"); }
	FVector4& PositionOffsetAndAttractorStrengthField() { return *GetNativePointerField<FVector4*>(this, "FParticlePerFrameSimulationParameters.PositionOffsetAndAttractorStrength"); }
	FVector2D& LocalToWorldScaleField() { return *GetNativePointerField<FVector2D*>(this, "FParticlePerFrameSimulationParameters.LocalToWorldScale"); }
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "FParticlePerFrameSimulationParameters.DeltaSeconds"); }
};

