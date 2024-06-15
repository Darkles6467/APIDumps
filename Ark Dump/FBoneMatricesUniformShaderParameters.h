#pragma once

#include "BaseDeclarations.h"
struct FBoneMatricesUniformShaderParameters
{
	char __padding[0xe10L];
	TStaticArray<FSkinMatrix3x4,75,16>& BoneMatricesField() { return *GetNativePointerField<TStaticArray<FSkinMatrix3x4,75,16>*>(this, "FBoneMatricesUniformShaderParameters.BoneMatrices"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FBoneMatricesUniformShaderParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FBoneMatricesUniformShaderParameters::zzNextMemberIdBoneMatrices __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FBoneMatricesUniformShaderParameters::zzNextMemberIdBoneMatrices>(nullptr, "FBoneMatricesUniformShaderParameters.zzGetMembersBefore", result, __formal); }
};

