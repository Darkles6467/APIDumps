#pragma once

#include "BaseDeclarations.h"
struct FNewParticle
{
	char __padding[0x48L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FNewParticle.Position"); }
	float& RelativeTimeField() { return *GetNativePointerField<float*>(this, "FNewParticle.RelativeTime"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FNewParticle.Velocity"); }
	float& TimeScaleField() { return *GetNativePointerField<float*>(this, "FNewParticle.TimeScale"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FNewParticle.Size"); }
	float& RotationField() { return *GetNativePointerField<float*>(this, "FNewParticle.Rotation"); }
	float& RelativeRotationRateField() { return *GetNativePointerField<float*>(this, "FNewParticle.RelativeRotationRate"); }
	float& DragCoefficientField() { return *GetNativePointerField<float*>(this, "FNewParticle.DragCoefficient"); }
	float& VectorFieldScaleField() { return *GetNativePointerField<float*>(this, "FNewParticle.VectorFieldScale"); }
	FNewParticle::<unnamed_type_ResilienceAndTileIndex>& ResilienceAndTileIndexField() { return *GetNativePointerField<FNewParticle::<unnamed_type_ResilienceAndTileIndex>*>(this, "FNewParticle.ResilienceAndTileIndex"); }
	float& RandomOrbitField() { return *GetNativePointerField<float*>(this, "FNewParticle.RandomOrbit"); }
	FVector2D& OffsetField() { return *GetNativePointerField<FVector2D*>(this, "FNewParticle.Offset"); }
};

