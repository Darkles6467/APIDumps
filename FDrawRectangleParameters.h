#pragma once

#include "BaseDeclarations.h"
struct FDrawRectangleParameters
{
	char __padding[0x30L];
	FVector4& PosScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FDrawRectangleParameters.PosScaleBias"); }
	FVector4& UVScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FDrawRectangleParameters.UVScaleBias"); }
	FVector4& InvTargetSizeAndTextureSizeField() { return *GetNativePointerField<FVector4*>(this, "FDrawRectangleParameters.InvTargetSizeAndTextureSize"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FDrawRectangleParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDrawRectangleParameters::zzNextMemberIdInvTargetSizeAndTextureSize __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDrawRectangleParameters::zzNextMemberIdInvTargetSizeAndTextureSize>(nullptr, "FDrawRectangleParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDrawRectangleParameters::zzNextMemberIdPosScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDrawRectangleParameters::zzNextMemberIdPosScaleBias>(nullptr, "FDrawRectangleParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FDrawRectangleParameters::zzNextMemberIdUVScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FDrawRectangleParameters::zzNextMemberIdUVScaleBias>(nullptr, "FDrawRectangleParameters.zzGetMembersBefore", result, __formal); }
};

