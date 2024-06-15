#pragma once

#include "BaseDeclarations.h"
struct FLpvReadUniformBufferParameters
{
	char __padding[0x20L];
	FIntVector& mLpvGridOffsetField() { return *GetNativePointerField<FIntVector*>(this, "FLpvReadUniformBufferParameters.mLpvGridOffset"); }
	float& LpvScaleField() { return *GetNativePointerField<float*>(this, "FLpvReadUniformBufferParameters.LpvScale"); }
	float& OneOverLpvScaleField() { return *GetNativePointerField<float*>(this, "FLpvReadUniformBufferParameters.OneOverLpvScale"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FLpvReadUniformBufferParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLpvReadUniformBufferParameters::zzNextMemberIdLpvScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLpvReadUniformBufferParameters::zzNextMemberIdLpvScale>(nullptr, "FLpvReadUniformBufferParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLpvReadUniformBufferParameters::zzNextMemberIdOneOverLpvScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLpvReadUniformBufferParameters::zzNextMemberIdOneOverLpvScale>(nullptr, "FLpvReadUniformBufferParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLpvReadUniformBufferParameters::zzNextMemberIdmLpvGridOffset __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLpvReadUniformBufferParameters::zzNextMemberIdmLpvGridOffset>(nullptr, "FLpvReadUniformBufferParameters.zzGetMembersBefore", result, __formal); }
};

