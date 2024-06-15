#pragma once

#include "BaseDeclarations.h"
struct FTiledDeferredLightData2
{
	char __padding[0x8000L];
	TStaticArray<FVector4,1024,16>& LightDirectionAndSpotlightMaskAndMinRoughnessField() { return *GetNativePointerField<TStaticArray<FVector4,1024,16>*>(this, "FTiledDeferredLightData2.LightDirectionAndSpotlightMaskAndMinRoughness"); }
	TStaticArray<FVector4,1024,16>& SpotAnglesAndSourceRadiusAndSimpleLightingField() { return *GetNativePointerField<TStaticArray<FVector4,1024,16>*>(this, "FTiledDeferredLightData2.SpotAnglesAndSourceRadiusAndSimpleLighting"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FTiledDeferredLightData2.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FTiledDeferredLightData2::zzNextMemberIdLightDirectionAndSpotlightMaskAndMinRoughness __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FTiledDeferredLightData2::zzNextMemberIdLightDirectionAndSpotlightMaskAndMinRoughness>(nullptr, "FTiledDeferredLightData2.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FTiledDeferredLightData2::zzNextMemberIdSpotAnglesAndSourceRadiusAndSimpleLighting __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FTiledDeferredLightData2::zzNextMemberIdSpotAnglesAndSourceRadiusAndSimpleLighting>(nullptr, "FTiledDeferredLightData2.zzGetMembersBefore", result, __formal); }
};

