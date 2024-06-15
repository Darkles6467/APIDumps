#pragma once

#include "BaseDeclarations.h"
struct FGPUSpriteEmitterInfo
{
	char __padding[0x280L];
	FGPUSpriteLocalVectorFieldInfo& LocalVectorFieldField() { return *GetNativePointerField<FGPUSpriteLocalVectorFieldInfo*>(this, "FGPUSpriteEmitterInfo.LocalVectorField"); }
	FFloatDistribution& VectorFieldScaleField() { return *GetNativePointerField<FFloatDistribution*>(this, "FGPUSpriteEmitterInfo.VectorFieldScale"); }
	FFloatDistribution& DragCoefficientField() { return *GetNativePointerField<FFloatDistribution*>(this, "FGPUSpriteEmitterInfo.DragCoefficient"); }
	FFloatDistribution& PointAttractorStrengthField() { return *GetNativePointerField<FFloatDistribution*>(this, "FGPUSpriteEmitterInfo.PointAttractorStrength"); }
	FFloatDistribution& ResilienceField() { return *GetNativePointerField<FFloatDistribution*>(this, "FGPUSpriteEmitterInfo.Resilience"); }
	FVector& ConstantAccelerationField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteEmitterInfo.ConstantAcceleration"); }
	FVector& PointAttractorPositionField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteEmitterInfo.PointAttractorPosition"); }
	float& PointAttractorRadiusSqField() { return *GetNativePointerField<float*>(this, "FGPUSpriteEmitterInfo.PointAttractorRadiusSq"); }
	FVector& OrbitOffsetBaseField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteEmitterInfo.OrbitOffsetBase"); }
	FVector& OrbitOffsetRangeField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteEmitterInfo.OrbitOffsetRange"); }
	FVector2D& InvMaxSizeField() { return *GetNativePointerField<FVector2D*>(this, "FGPUSpriteEmitterInfo.InvMaxSize"); }
	float& InvRotationRateScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteEmitterInfo.InvRotationRateScale"); }
	float& MaxLifetimeField() { return *GetNativePointerField<float*>(this, "FGPUSpriteEmitterInfo.MaxLifetime"); }
	int& MaxParticleCountField() { return *GetNativePointerField<int*>(this, "FGPUSpriteEmitterInfo.MaxParticleCount"); }
	TEnumAsByte<enum EParticleScreenAlignment>& ScreenAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EParticleScreenAlignment>*>(this, "FGPUSpriteEmitterInfo.ScreenAlignment"); }
	TEnumAsByte<enum EParticleAxisLock>& LockAxisFlagField() { return *GetNativePointerField<TEnumAsByte<enum EParticleAxisLock>*>(this, "FGPUSpriteEmitterInfo.LockAxisFlag"); }
	FGPUSpriteResources * ResourcesField() { return GetNativePointerField<FGPUSpriteResources *>(this, "FGPUSpriteEmitterInfo.Resources"); }

	// Functions

	FGPUSpriteEmitterInfo * operator=(const FGPUSpriteEmitterInfo * __that) { return NativeCall<FGPUSpriteEmitterInfo *, const FGPUSpriteEmitterInfo *>(this, "FGPUSpriteEmitterInfo.operator=", __that); }
};

