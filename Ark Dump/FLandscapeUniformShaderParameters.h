#pragma once

#include "BaseDeclarations.h"
struct FLandscapeUniformShaderParameters
{
	char __padding[0xa0L];
	FVector4& HeightmapUVScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.HeightmapUVScaleBias"); }
	FVector4& WeightmapUVScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.WeightmapUVScaleBias"); }
	FVector4& LandscapeLightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.LandscapeLightmapScaleBias"); }
	FVector4& SubsectionSizeVertsLayerUVPanField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.SubsectionSizeVertsLayerUVPan"); }
	FVector4& SubsectionOffsetParamsField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.SubsectionOffsetParams"); }
	FVector4& LightmapSubsectionOffsetParamsField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeUniformShaderParameters.LightmapSubsectionOffsetParams"); }
	FMatrix& LocalToWorldNoScalingField() { return *GetNativePointerField<FMatrix*>(this, "FLandscapeUniformShaderParameters.LocalToWorldNoScaling"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdHeightmapUVScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdHeightmapUVScaleBias>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdLandscapeLightmapScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdLandscapeLightmapScaleBias>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdLightmapSubsectionOffsetParams __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdLightmapSubsectionOffsetParams>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdLocalToWorldNoScaling __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdLocalToWorldNoScaling>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdSubsectionOffsetParams __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdSubsectionOffsetParams>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdSubsectionSizeVertsLayerUVPan __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdSubsectionSizeVertsLayerUVPan>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FLandscapeUniformShaderParameters::zzNextMemberIdWeightmapUVScaleBias __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FLandscapeUniformShaderParameters::zzNextMemberIdWeightmapUVScaleBias>(nullptr, "FLandscapeUniformShaderParameters.zzGetMembersBefore", result, __formal); }
};

