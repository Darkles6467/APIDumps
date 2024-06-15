#pragma once

#include "BaseDeclarations.h"
struct FTiledDeferredLightData
{
	char __padding[0x8000L];
	TStaticArray<FVector4,1024,16>& LightPositionAndInvRadiusField() { return *GetNativePointerField<TStaticArray<FVector4,1024,16>*>(this, "FTiledDeferredLightData.LightPositionAndInvRadius"); }
	TStaticArray<FVector4,1024,16>& LightColorAndFalloffExponentField() { return *GetNativePointerField<TStaticArray<FVector4,1024,16>*>(this, "FTiledDeferredLightData.LightColorAndFalloffExponent"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FTiledDeferredLightData.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FTiledDeferredLightData::zzNextMemberIdLightColorAndFalloffExponent __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FTiledDeferredLightData::zzNextMemberIdLightColorAndFalloffExponent>(nullptr, "FTiledDeferredLightData.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FTiledDeferredLightData::zzNextMemberIdLightPositionAndInvRadius __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FTiledDeferredLightData::zzNextMemberIdLightPositionAndInvRadius>(nullptr, "FTiledDeferredLightData.zzGetMembersBefore", result, __formal); }
};

