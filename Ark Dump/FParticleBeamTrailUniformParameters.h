#pragma once

#include "BaseDeclarations.h"
struct FParticleBeamTrailUniformParameters
{
	char __padding[0x30L];
	FVector4& CameraRightField() { return *GetNativePointerField<FVector4*>(this, "FParticleBeamTrailUniformParameters.CameraRight"); }
	FVector4& CameraUpField() { return *GetNativePointerField<FVector4*>(this, "FParticleBeamTrailUniformParameters.CameraUp"); }
	FVector4& ScreenAlignmentField() { return *GetNativePointerField<FVector4*>(this, "FParticleBeamTrailUniformParameters.ScreenAlignment"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleBeamTrailUniformParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBeamTrailUniformParameters::zzNextMemberIdCameraRight __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBeamTrailUniformParameters::zzNextMemberIdCameraRight>(nullptr, "FParticleBeamTrailUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBeamTrailUniformParameters::zzNextMemberIdCameraUp __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBeamTrailUniformParameters::zzNextMemberIdCameraUp>(nullptr, "FParticleBeamTrailUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleBeamTrailUniformParameters::zzNextMemberIdScreenAlignment __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleBeamTrailUniformParameters::zzNextMemberIdScreenAlignment>(nullptr, "FParticleBeamTrailUniformParameters.zzGetMembersBefore", result, __formal); }
};

