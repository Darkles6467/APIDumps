#pragma once

#include "BaseDeclarations.h"
struct FAPEXClothUniformShaderParameters
{
	char __padding[0x10000L];
	TStaticArray<FVector,2048,16>& PositionsField() { return *GetNativePointerField<TStaticArray<FVector,2048,16>*>(this, "FAPEXClothUniformShaderParameters.Positions"); }
	TStaticArray<FVector,2048,16>& NormalsField() { return *GetNativePointerField<TStaticArray<FVector,2048,16>*>(this, "FAPEXClothUniformShaderParameters.Normals"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FAPEXClothUniformShaderParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FAPEXClothUniformShaderParameters::zzNextMemberIdNormals __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FAPEXClothUniformShaderParameters::zzNextMemberIdNormals>(nullptr, "FAPEXClothUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FAPEXClothUniformShaderParameters::zzNextMemberIdPositions __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FAPEXClothUniformShaderParameters::zzNextMemberIdPositions>(nullptr, "FAPEXClothUniformShaderParameters.zzGetMembersBefore", result, __formal); }
};

