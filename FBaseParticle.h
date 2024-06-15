#pragma once

#include "BaseDeclarations.h"
struct FBaseParticle
{
	char __padding[0x80L];
	FVector& OldLocationField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.OldLocation"); }
	float& RelativeTimeField() { return *GetNativePointerField<float*>(this, "FBaseParticle.RelativeTime"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.Location"); }
	float& OneOverMaxLifetimeField() { return *GetNativePointerField<float*>(this, "FBaseParticle.OneOverMaxLifetime"); }
	FVector& BaseVelocityField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.BaseVelocity"); }
	float& RotationField() { return *GetNativePointerField<float*>(this, "FBaseParticle.Rotation"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.Velocity"); }
	float& BaseRotationRateField() { return *GetNativePointerField<float*>(this, "FBaseParticle.BaseRotationRate"); }
	FVector& BaseSizeField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.BaseSize"); }
	float& RotationRateField() { return *GetNativePointerField<float*>(this, "FBaseParticle.RotationRate"); }
	FVector& SizeField() { return *GetNativePointerField<FVector*>(this, "FBaseParticle.Size"); }
	int& FlagsField() { return *GetNativePointerField<int*>(this, "FBaseParticle.Flags"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBaseParticle.Color"); }
	FLinearColor& BaseColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBaseParticle.BaseColor"); }
};

