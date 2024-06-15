#pragma once

#include "BaseDeclarations.h"
struct FParticleSimulationParameters
{
	char __padding[0x100L];
	FVector4& AttributeCurveField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.AttributeCurve"); }
	FVector4& AttributeCurveScaleField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.AttributeCurveScale"); }
	FVector4& AttributeCurveBiasField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.AttributeCurveBias"); }
	FVector4& AttributeScaleField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.AttributeScale"); }
	FVector4& AttributeBiasField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.AttributeBias"); }
	FVector4& MiscCurveField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.MiscCurve"); }
	FVector4& MiscScaleField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.MiscScale"); }
	FVector4& MiscBiasField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimulationParameters.MiscBias"); }
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.Acceleration"); }
	FVector& OrbitOffsetBaseField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitOffsetBase"); }
	FVector& OrbitOffsetRangeField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitOffsetRange"); }
	FVector& OrbitFrequencyBaseField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitFrequencyBase"); }
	FVector& OrbitFrequencyRangeField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitFrequencyRange"); }
	FVector& OrbitPhaseBaseField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitPhaseBase"); }
	FVector& OrbitPhaseRangeField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationParameters.OrbitPhaseRange"); }
	float& CollisionRadiusScaleField() { return *GetNativePointerField<float*>(this, "FParticleSimulationParameters.CollisionRadiusScale"); }
	float& CollisionRadiusBiasField() { return *GetNativePointerField<float*>(this, "FParticleSimulationParameters.CollisionRadiusBias"); }
	float& CollisionTimeBiasField() { return *GetNativePointerField<float*>(this, "FParticleSimulationParameters.CollisionTimeBias"); }
	float& OneMinusFrictionField() { return *GetNativePointerField<float*>(this, "FParticleSimulationParameters.OneMinusFriction"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleSimulationParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAcceleration __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAcceleration>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAttributeBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAttributeBias>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAttributeCurve __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAttributeCurve>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAttributeCurveBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAttributeCurveBias>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAttributeCurveScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAttributeCurveScale>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdAttributeScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdAttributeScale>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdCollisionRadiusBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdCollisionRadiusBias>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdCollisionRadiusScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdCollisionRadiusScale>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdCollisionTimeBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdCollisionTimeBias>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdMiscBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdMiscBias>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdMiscCurve __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdMiscCurve>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdMiscScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdMiscScale>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOneMinusFriction __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOneMinusFriction>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitFrequencyBase __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitFrequencyBase>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitFrequencyRange __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitFrequencyRange>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitOffsetBase __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitOffsetBase>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitOffsetRange __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitOffsetRange>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitPhaseBase __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitPhaseBase>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimulationParameters::zzNextMemberIdOrbitPhaseRange __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimulationParameters::zzNextMemberIdOrbitPhaseRange>(nullptr, "FParticleSimulationParameters.zzGetMembersBefore", result, __formal); }
};

