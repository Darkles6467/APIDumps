#pragma once

#include "BaseDeclarations.h"
struct FParticleEmitterBuildInfo
{
	char __padding[0x410L];
	FComposableVectorDistribution& OrbitOffsetField() { return *GetNativePointerField<FComposableVectorDistribution*>(this, "FParticleEmitterBuildInfo.OrbitOffset"); }
	FComposableVectorDistribution& OrbitInitialRotationField() { return *GetNativePointerField<FComposableVectorDistribution*>(this, "FParticleEmitterBuildInfo.OrbitInitialRotation"); }
	FComposableVectorDistribution& OrbitRotationRateField() { return *GetNativePointerField<FComposableVectorDistribution*>(this, "FParticleEmitterBuildInfo.OrbitRotationRate"); }
	FComposableVectorDistribution& ColorScaleField() { return *GetNativePointerField<FComposableVectorDistribution*>(this, "FParticleEmitterBuildInfo.ColorScale"); }
	FComposableFloatDistribution& AlphaScaleField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.AlphaScale"); }
	FComposableVectorDistribution& SizeScaleField() { return *GetNativePointerField<FComposableVectorDistribution*>(this, "FParticleEmitterBuildInfo.SizeScale"); }
	FVector2D& MaxSizeField() { return *GetNativePointerField<FVector2D*>(this, "FParticleEmitterBuildInfo.MaxSize"); }
	FVector2D& SizeScaleBySpeedField() { return *GetNativePointerField<FVector2D*>(this, "FParticleEmitterBuildInfo.SizeScaleBySpeed"); }
	FVector2D& MaxSizeScaleBySpeedField() { return *GetNativePointerField<FVector2D*>(this, "FParticleEmitterBuildInfo.MaxSizeScaleBySpeed"); }
	FComposableFloatDistribution& SubImageIndexField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.SubImageIndex"); }
	FComposableFloatDistribution& DragCoefficientField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.DragCoefficient"); }
	FComposableFloatDistribution& DragScaleField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.DragScale"); }
	bool& bEnableCollisionField() { return *GetNativePointerField<bool*>(this, "FParticleEmitterBuildInfo.bEnableCollision"); }
	char& CollisionResponseField() { return *GetNativePointerField<char*>(this, "FParticleEmitterBuildInfo.CollisionResponse"); }
	float& CollisionRadiusScaleField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.CollisionRadiusScale"); }
	float& CollisionRadiusBiasField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.CollisionRadiusBias"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.Friction"); }
	FComposableFloatDistribution& ResilienceField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.Resilience"); }
	FComposableFloatDistribution& ResilienceScaleOverLifeField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.ResilienceScaleOverLife"); }
	FVector& PointAttractorPositionField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterBuildInfo.PointAttractorPosition"); }
	float& PointAttractorRadiusField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.PointAttractorRadius"); }
	FComposableFloatDistribution& PointAttractorStrengthField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.PointAttractorStrength"); }
	FComposableFloatDistribution& VectorFieldScaleField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.VectorFieldScale"); }
	FComposableFloatDistribution& VectorFieldScaleOverLifeField() { return *GetNativePointerField<FComposableFloatDistribution*>(this, "FParticleEmitterBuildInfo.VectorFieldScaleOverLife"); }
	float& GlobalVectorFieldScaleField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.GlobalVectorFieldScale"); }
	float& GlobalVectorFieldTightnessField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.GlobalVectorFieldTightness"); }
	UVectorField * LocalVectorFieldField() { return GetNativePointerField<UVectorField *>(this, "FParticleEmitterBuildInfo.LocalVectorField"); }
	FTransform& LocalVectorFieldTransformField() { return *GetNativePointerField<FTransform*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldTransform"); }
	float& LocalVectorFieldIntensityField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldIntensity"); }
	float& LocalVectorFieldTightnessField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldTightness"); }
	FVector& LocalVectorFieldMinInitialRotationField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldMinInitialRotation"); }
	FVector& LocalVectorFieldMaxInitialRotationField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldMaxInitialRotation"); }
	FVector& LocalVectorFieldRotationRateField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterBuildInfo.LocalVectorFieldRotationRate"); }
	FVector& ConstantAccelerationField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterBuildInfo.ConstantAcceleration"); }
	float& MaxLifetimeField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.MaxLifetime"); }
	float& MaxRotationRateField() { return *GetNativePointerField<float*>(this, "FParticleEmitterBuildInfo.MaxRotationRate"); }
	int& EstimatedMaxActiveParticleCountField() { return *GetNativePointerField<int*>(this, "FParticleEmitterBuildInfo.EstimatedMaxActiveParticleCount"); }
	int& ScreenAlignmentField() { return *GetNativePointerField<int*>(this, "FParticleEmitterBuildInfo.ScreenAlignment"); }
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FParticleEmitterBuildInfo.PivotOffset"); }

	// Functions

};

