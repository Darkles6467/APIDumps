#pragma once

#include "BaseDeclarations.h"
struct FBloomDirtMaskParameters
{
	char __padding[0x20L];
	FVector4& TintField() { return *GetNativePointerField<FVector4*>(this, "FBloomDirtMaskParameters.Tint"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FBloomDirtMaskParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FBloomDirtMaskParameters::zzNextMemberIdMask __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FBloomDirtMaskParameters::zzNextMemberIdMask>(nullptr, "FBloomDirtMaskParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FBloomDirtMaskParameters::zzNextMemberIdMaskSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FBloomDirtMaskParameters::zzNextMemberIdMaskSampler>(nullptr, "FBloomDirtMaskParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FBloomDirtMaskParameters::zzNextMemberIdTint __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FBloomDirtMaskParameters::zzNextMemberIdTint>(nullptr, "FBloomDirtMaskParameters.zzGetMembersBefore", result, __formal); }
};

