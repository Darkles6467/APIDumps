#pragma once

#include "BaseDeclarations.h"
struct FMeshParticleUniformParameters
{
	char __padding[0x20L];
	FVector4& SubImageSizeField() { return *GetNativePointerField<FVector4*>(this, "FMeshParticleUniformParameters.SubImageSize"); }
	unsigned int& TexCoordWeightAField() { return *GetNativePointerField<unsigned int*>(this, "FMeshParticleUniformParameters.TexCoordWeightA"); }
	unsigned int& TexCoordWeightBField() { return *GetNativePointerField<unsigned int*>(this, "FMeshParticleUniformParameters.TexCoordWeightB"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FMeshParticleUniformParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FMeshParticleUniformParameters::zzNextMemberIdSubImageSize __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FMeshParticleUniformParameters::zzNextMemberIdSubImageSize>(nullptr, "FMeshParticleUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FMeshParticleUniformParameters::zzNextMemberIdTexCoordWeightA __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FMeshParticleUniformParameters::zzNextMemberIdTexCoordWeightA>(nullptr, "FMeshParticleUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FMeshParticleUniformParameters::zzNextMemberIdTexCoordWeightB __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FMeshParticleUniformParameters::zzNextMemberIdTexCoordWeightB>(nullptr, "FMeshParticleUniformParameters.zzGetMembersBefore", result, __formal); }
};

