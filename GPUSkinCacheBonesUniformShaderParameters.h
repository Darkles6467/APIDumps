#pragma once

#include "BaseDeclarations.h"
struct GPUSkinCacheBonesUniformShaderParameters
{
	char __padding[0x3000L];
	TStaticArray<FVector4,768,16>& BoneVectorsField() { return *GetNativePointerField<TStaticArray<FVector4,768,16>*>(this, "GPUSkinCacheBonesUniformShaderParameters.BoneVectors"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "GPUSkinCacheBonesUniformShaderParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, GPUSkinCacheBonesUniformShaderParameters::zzNextMemberIdBoneVectors __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, GPUSkinCacheBonesUniformShaderParameters::zzNextMemberIdBoneVectors>(nullptr, "GPUSkinCacheBonesUniformShaderParameters.zzGetMembersBefore", result, __formal); }
};

