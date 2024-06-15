#pragma once

#include "BaseDeclarations.h"
struct FAOSampleData2
{
	char __padding[0x90L];
	TStaticArray<FVector4,9,16>& SampleDirectionsField() { return *GetNativePointerField<TStaticArray<FVector4,9,16>*>(this, "FAOSampleData2.SampleDirections"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FAOSampleData2.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FAOSampleData2::zzNextMemberIdSampleDirections __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FAOSampleData2::zzNextMemberIdSampleDirections>(nullptr, "FAOSampleData2.zzGetMembersBefore", result, __formal); }
};

