#pragma once

#include "BaseDeclarations.h"
struct FParticleBoundsParameters
{
	char __padding[0x10L];
	unsigned int& ChunksPerGroupField() { return *GetNativePointerField<unsigned int*>(this, "FParticleBoundsParameters.ChunksPerGroup"); }
	unsigned int& ExtraChunkCountField() { return *GetNativePointerField<unsigned int*>(this, "FParticleBoundsParameters.ExtraChunkCount"); }
	unsigned int& ParticleCountField() { return *GetNativePointerField<unsigned int*>(this, "FParticleBoundsParameters.ParticleCount"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleBoundsParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBoundsParameters::zzNextMemberIdChunksPerGroup __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBoundsParameters::zzNextMemberIdChunksPerGroup>(nullptr, "FParticleBoundsParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBoundsParameters::zzNextMemberIdExtraChunkCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBoundsParameters::zzNextMemberIdExtraChunkCount>(nullptr, "FParticleBoundsParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBoundsParameters::zzNextMemberIdParticleCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBoundsParameters::zzNextMemberIdParticleCount>(nullptr, "FParticleBoundsParameters.zzGetMembersBefore", result, __formal); }
};

