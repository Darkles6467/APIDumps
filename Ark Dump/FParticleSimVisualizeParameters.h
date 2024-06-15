#pragma once

#include "BaseDeclarations.h"
struct FParticleSimVisualizeParameters
{
	char __padding[0x10L];
	FVector4& ScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FParticleSimVisualizeParameters.ScaleBias"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleSimVisualizeParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleSimVisualizeParameters::zzNextMemberIdScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleSimVisualizeParameters::zzNextMemberIdScaleBias>(nullptr, "FParticleSimVisualizeParameters.zzGetMembersBefore", result, __formal); }
};

