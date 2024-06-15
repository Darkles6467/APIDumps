#pragma once

#include "BaseDeclarations.h"
struct FReflectionCaptureData
{
	char __padding[0xaa80L];
	TStaticArray<FVector4,341,16>& PositionAndRadiusField() { return *GetNativePointerField<TStaticArray<FVector4,341,16>*>(this, "FReflectionCaptureData.PositionAndRadius"); }
	TStaticArray<FVector4,341,16>& CapturePropertiesField() { return *GetNativePointerField<TStaticArray<FVector4,341,16>*>(this, "FReflectionCaptureData.CaptureProperties"); }
	TStaticArray<FMatrix,341,16>& BoxTransformField() { return *GetNativePointerField<TStaticArray<FMatrix,341,16>*>(this, "FReflectionCaptureData.BoxTransform"); }
	TStaticArray<FVector4,341,16>& BoxScalesField() { return *GetNativePointerField<TStaticArray<FVector4,341,16>*>(this, "FReflectionCaptureData.BoxScales"); }
	TStaticArray<FVector4,341,16>& FadeDistanceAndShadowIntensityField() { return *GetNativePointerField<TStaticArray<FVector4,341,16>*>(this, "FReflectionCaptureData.FadeDistanceAndShadowIntensity"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FReflectionCaptureData.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FReflectionCaptureData::zzNextMemberIdBoxScales __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FReflectionCaptureData::zzNextMemberIdBoxScales>(nullptr, "FReflectionCaptureData.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FReflectionCaptureData::zzNextMemberIdBoxTransform __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FReflectionCaptureData::zzNextMemberIdBoxTransform>(nullptr, "FReflectionCaptureData.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FReflectionCaptureData::zzNextMemberIdCaptureProperties __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FReflectionCaptureData::zzNextMemberIdCaptureProperties>(nullptr, "FReflectionCaptureData.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FReflectionCaptureData::zzNextMemberIdFadeDistanceAndShadowIntensity __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FReflectionCaptureData::zzNextMemberIdFadeDistanceAndShadowIntensity>(nullptr, "FReflectionCaptureData.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FReflectionCaptureData::zzNextMemberIdPositionAndRadius __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FReflectionCaptureData::zzNextMemberIdPositionAndRadius>(nullptr, "FReflectionCaptureData.zzGetMembersBefore", result, __formal); }
};

