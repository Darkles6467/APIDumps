#pragma once

#include "BaseDeclarations.h"
struct FRadixSortParameters
{
	char __padding[0x20L];
	unsigned int& RadixShiftField() { return *GetNativePointerField<unsigned int*>(this, "FRadixSortParameters.RadixShift"); }
	unsigned int& TilesPerGroupField() { return *GetNativePointerField<unsigned int*>(this, "FRadixSortParameters.TilesPerGroup"); }
	unsigned int& ExtraTileCountField() { return *GetNativePointerField<unsigned int*>(this, "FRadixSortParameters.ExtraTileCount"); }
	unsigned int& ExtraKeyCountField() { return *GetNativePointerField<unsigned int*>(this, "FRadixSortParameters.ExtraKeyCount"); }
	unsigned int& GroupCountField() { return *GetNativePointerField<unsigned int*>(this, "FRadixSortParameters.GroupCount"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FRadixSortParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FRadixSortParameters::zzNextMemberIdExtraKeyCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FRadixSortParameters::zzNextMemberIdExtraKeyCount>(nullptr, "FRadixSortParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FRadixSortParameters::zzNextMemberIdExtraTileCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FRadixSortParameters::zzNextMemberIdExtraTileCount>(nullptr, "FRadixSortParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FRadixSortParameters::zzNextMemberIdGroupCount __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FRadixSortParameters::zzNextMemberIdGroupCount>(nullptr, "FRadixSortParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FRadixSortParameters::zzNextMemberIdRadixShift __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FRadixSortParameters::zzNextMemberIdRadixShift>(nullptr, "FRadixSortParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FRadixSortParameters::zzNextMemberIdTilesPerGroup __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FRadixSortParameters::zzNextMemberIdTilesPerGroup>(nullptr, "FRadixSortParameters.zzGetMembersBefore", result, __formal); }
};

