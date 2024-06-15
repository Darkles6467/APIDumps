#pragma once

#include "BaseDeclarations.h"
struct FGBufferResourceStruct
{
	char __padding[0xa0L];

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FGBufferResourceStruct.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferATexture __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferATexture>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferATextureMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferATextureMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferATextureNonMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferATextureNonMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferATextureSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferATextureSampler>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferBTexture __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferBTexture>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureNonMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureNonMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferBTextureSampler>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferCTexture __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferCTexture>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureNonMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureNonMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferCTextureSampler>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferDTexture __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferDTexture>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureNonMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureNonMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferDTextureSampler>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferETexture __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferETexture>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferETextureMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferETextureMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferETextureNonMS __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferETextureNonMS>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGBufferResourceStruct::zzNextMemberIdGBufferETextureSampler __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGBufferResourceStruct::zzNextMemberIdGBufferETextureSampler>(nullptr, "FGBufferResourceStruct.zzGetMembersBefore", result, __formal); }
};

