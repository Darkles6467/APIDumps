#pragma once

#include "BaseDeclarations.h"
struct FParticleSpriteUniformParameters
{
	char __padding[0x90L];
	FVector4& AxisLockRightField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.AxisLockRight"); }
	FVector4& AxisLockUpField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.AxisLockUp"); }
	FVector4& TangentSelectorField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.TangentSelector"); }
	FVector4& NormalsSphereCenterField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.NormalsSphereCenter"); }
	FVector4& NormalsCylinderUnitDirectionField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.NormalsCylinderUnitDirection"); }
	FVector4& SubImageSizeField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.SubImageSize"); }
	FVector4& MacroUVParametersField() { return *GetNativePointerField<FVector4*>(this, "FParticleSpriteUniformParameters.MacroUVParameters"); }
	float& RotationScaleField() { return *GetNativePointerField<float*>(this, "FParticleSpriteUniformParameters.RotationScale"); }
	float& RotationBiasField() { return *GetNativePointerField<float*>(this, "FParticleSpriteUniformParameters.RotationBias"); }
	float& NormalsTypeField() { return *GetNativePointerField<float*>(this, "FParticleSpriteUniformParameters.NormalsType"); }
	float& InvDeltaSecondsField() { return *GetNativePointerField<float*>(this, "FParticleSpriteUniformParameters.InvDeltaSeconds"); }
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FParticleSpriteUniformParameters.PivotOffset"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleSpriteUniformParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdAxisLockRight __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdAxisLockRight>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdAxisLockUp __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdAxisLockUp>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdInvDeltaSeconds __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdInvDeltaSeconds>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdMacroUVParameters __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdMacroUVParameters>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdNormalsCylinderUnitDirection __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdNormalsCylinderUnitDirection>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdNormalsSphereCenter __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdNormalsSphereCenter>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdNormalsType __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdNormalsType>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdPivotOffset __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdPivotOffset>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdRotationBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdRotationBias>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdRotationScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdRotationScale>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdSubImageSize __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdSubImageSize>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSpriteUniformParameters::zzNextMemberIdTangentSelector __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSpriteUniformParameters::zzNextMemberIdTangentSelector>(nullptr, "FParticleSpriteUniformParameters.zzGetMembersBefore", result, __formal); }
};
