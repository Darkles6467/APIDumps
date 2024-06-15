#pragma once

#include "BaseDeclarations.h"
struct FDeferredLightUniformStruct
{
	char __padding[0x60L];
	FVector& LightPositionField() { return *GetNativePointerField<FVector*>(this, "FDeferredLightUniformStruct.LightPosition"); }
	float& LightInvRadiusField() { return *GetNativePointerField<float*>(this, "FDeferredLightUniformStruct.LightInvRadius"); }
	FVector& LightColorField() { return *GetNativePointerField<FVector*>(this, "FDeferredLightUniformStruct.LightColor"); }
	float& LightFalloffExponentField() { return *GetNativePointerField<float*>(this, "FDeferredLightUniformStruct.LightFalloffExponent"); }
	FVector& NormalizedLightDirectionField() { return *GetNativePointerField<FVector*>(this, "FDeferredLightUniformStruct.NormalizedLightDirection"); }
	FVector2D& SpotAnglesField() { return *GetNativePointerField<FVector2D*>(this, "FDeferredLightUniformStruct.SpotAngles"); }
	float& SourceRadiusField() { return *GetNativePointerField<float*>(this, "FDeferredLightUniformStruct.SourceRadius"); }
	float& SourceLengthField() { return *GetNativePointerField<float*>(this, "FDeferredLightUniformStruct.SourceLength"); }
	float& MinRoughnessField() { return *GetNativePointerField<float*>(this, "FDeferredLightUniformStruct.MinRoughness"); }
	FVector2D& DistanceFadeMADField() { return *GetNativePointerField<FVector2D*>(this, "FDeferredLightUniformStruct.DistanceFadeMAD"); }
	unsigned int& bShadowedField() { return *GetNativePointerField<unsigned int*>(this, "FDeferredLightUniformStruct.bShadowed"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FDeferredLightUniformStruct.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdDistanceFadeMAD __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdDistanceFadeMAD>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdLightColor __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdLightColor>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdLightFalloffExponent __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdLightFalloffExponent>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdLightInvRadius __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdLightInvRadius>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdLightPosition __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdLightPosition>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdMinRoughness __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdMinRoughness>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdNormalizedLightDirection __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdNormalizedLightDirection>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdSourceLength __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdSourceLength>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdSourceRadius __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdSourceRadius>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdSpotAngles __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdSpotAngles>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDeferredLightUniformStruct::zzNextMemberIdbShadowed __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDeferredLightUniformStruct::zzNextMemberIdbShadowed>(nullptr, "FDeferredLightUniformStruct.zzGetMembersBefore", result, __formal); }
};

