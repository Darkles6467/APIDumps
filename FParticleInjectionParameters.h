#pragma once

#include "BaseDeclarations.h"
struct FParticleInjectionParameters
{
	char __padding[0x10L];
	FVector2D& PixelScaleField() { return *GetNativePointerField<FVector2D*>(this, "FParticleInjectionParameters.PixelScale"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleInjectionParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleInjectionParameters::zzNextMemberIdPixelScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleInjectionParameters::zzNextMemberIdPixelScale>(nullptr, "FParticleInjectionParameters.zzGetMembersBefore", result, __formal); }
};

