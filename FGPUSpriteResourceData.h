#pragma once

#include "BaseDeclarations.h"
struct FGPUSpriteResourceData
{
	char __padding[0x150L];
	TArray<FColor>& QuantizedColorSamplesField() { return *GetNativePointerField<TArray<FColor>*>(this, "FGPUSpriteResourceData.QuantizedColorSamples"); }
	TArray<FColor>& QuantizedMiscSamplesField() { return *GetNativePointerField<TArray<FColor>*>(this, "FGPUSpriteResourceData.QuantizedMiscSamples"); }
	TArray<FColor>& QuantizedSimulationAttrSamplesField() { return *GetNativePointerField<TArray<FColor>*>(this, "FGPUSpriteResourceData.QuantizedSimulationAttrSamples"); }
	FVector4& ColorScaleField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.ColorScale"); }
	FVector4& ColorBiasField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.ColorBias"); }
	FVector4& MiscScaleField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.MiscScale"); }
	FVector4& MiscBiasField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.MiscBias"); }
	FVector4& SimulationAttrCurveScaleField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.SimulationAttrCurveScale"); }
	FVector4& SimulationAttrCurveBiasField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.SimulationAttrCurveBias"); }
	FVector4& SubImageSizeField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.SubImageSize"); }
	FVector4& SizeBySpeedField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteResourceData.SizeBySpeed"); }
	FVector& ConstantAccelerationField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.ConstantAcceleration"); }
	FVector& OrbitOffsetBaseField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitOffsetBase"); }
	FVector& OrbitOffsetRangeField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitOffsetRange"); }
	FVector& OrbitFrequencyBaseField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitFrequencyBase"); }
	FVector& OrbitFrequencyRangeField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitFrequencyRange"); }
	FVector& OrbitPhaseBaseField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitPhaseBase"); }
	FVector& OrbitPhaseRangeField() { return *GetNativePointerField<FVector*>(this, "FGPUSpriteResourceData.OrbitPhaseRange"); }
	float& GlobalVectorFieldScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.GlobalVectorFieldScale"); }
	float& GlobalVectorFieldTightnessField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.GlobalVectorFieldTightness"); }
	float& PerParticleVectorFieldScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.PerParticleVectorFieldScale"); }
	float& PerParticleVectorFieldBiasField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.PerParticleVectorFieldBias"); }
	float& DragCoefficientScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.DragCoefficientScale"); }
	float& DragCoefficientBiasField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.DragCoefficientBias"); }
	float& ResilienceScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.ResilienceScale"); }
	float& ResilienceBiasField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.ResilienceBias"); }
	float& CollisionRadiusScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.CollisionRadiusScale"); }
	float& CollisionRadiusBiasField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.CollisionRadiusBias"); }
	float& CollisionTimeBiasField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.CollisionTimeBias"); }
	float& OneMinusFrictionField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.OneMinusFriction"); }
	float& RotationRateScaleField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.RotationRateScale"); }
	float& CameraMotionBlurAmountField() { return *GetNativePointerField<float*>(this, "FGPUSpriteResourceData.CameraMotionBlurAmount"); }
	TEnumAsByte<enum EParticleScreenAlignment>& ScreenAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EParticleScreenAlignment>*>(this, "FGPUSpriteResourceData.ScreenAlignment"); }
	TEnumAsByte<enum EParticleAxisLock>& LockAxisFlagField() { return *GetNativePointerField<TEnumAsByte<enum EParticleAxisLock>*>(this, "FGPUSpriteResourceData.LockAxisFlag"); }
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FGPUSpriteResourceData.PivotOffset"); }

	// Functions

	FGPUSpriteResourceData * operator=(const FGPUSpriteResourceData * __that) { return NativeCall<FGPUSpriteResourceData *, const FGPUSpriteResourceData *>(this, "FGPUSpriteResourceData.operator=", __that); }
};

