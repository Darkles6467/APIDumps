#pragma once

#include "BaseDeclarations.h"
struct FParticleKeyGenParameters
{
	char __padding[0x30L];
	FVector4& ViewOriginField() { return *GetNativePointerField<FVector4*>(this, "FParticleKeyGenParameters.ViewOrigin"); }
	unsigned int& ChunksPerGroupField() { return *GetNativePointerField<unsigned int*>(this, "FParticleKeyGenParameters.ChunksPerGroup"); }
	unsigned int& ExtraChunkCountField() { return *GetNativePointerField<unsigned int*>(this, "FParticleKeyGenParameters.ExtraChunkCount"); }
	unsigned int& OutputOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FParticleKeyGenParameters.OutputOffset"); }
	unsigned int& EmitterKeyField() { return *GetNativePointerField<unsigned int*>(this, "FParticleKeyGenParameters.EmitterKey"); }
	unsigned int& KeyCountField() { return *GetNativePointerField<unsigned int*>(this, "FParticleKeyGenParameters.KeyCount"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleKeyGenParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdChunksPerGroup __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdChunksPerGroup>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdEmitterKey __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdEmitterKey>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdExtraChunkCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdExtraChunkCount>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdKeyCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdKeyCount>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdOutputOffset __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdOutputOffset>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleKeyGenParameters::zzNextMemberIdViewOrigin __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleKeyGenParameters::zzNextMemberIdViewOrigin>(nullptr, "FParticleKeyGenParameters.zzGetMembersBefore", result, __formal); }
};

