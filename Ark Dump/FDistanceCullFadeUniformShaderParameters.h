#pragma once

#include "BaseDeclarations.h"
struct FDistanceCullFadeUniformShaderParameters
{
	char __padding[0x10L];
	FVector2D& FadeTimeScaleBiasField() { return *GetNativePointerField<FVector2D*>(this, "FDistanceCullFadeUniformShaderParameters.FadeTimeScaleBias"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FDistanceCullFadeUniformShaderParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDistanceCullFadeUniformShaderParameters::zzNextMemberIdFadeTimeScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDistanceCullFadeUniformShaderParameters::zzNextMemberIdFadeTimeScaleBias>(nullptr, "FDistanceCullFadeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
};

