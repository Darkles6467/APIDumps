#pragma once

#include "BaseDeclarations.h"
struct FGPUSpriteEmitterDynamicUniformParameters
{
	char __padding[0x40L];
	FVector2D& LocalToWorldScaleField() { return *GetNativePointerField<FVector2D*>(this, "FGPUSpriteEmitterDynamicUniformParameters.LocalToWorldScale"); }
	FVector4& AxisLockRightField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteEmitterDynamicUniformParameters.AxisLockRight"); }
	FVector4& AxisLockUpField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteEmitterDynamicUniformParameters.AxisLockUp"); }
	FVector4& DynamicColorField() { return *GetNativePointerField<FVector4*>(this, "FGPUSpriteEmitterDynamicUniformParameters.DynamicColor"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FGPUSpriteEmitterDynamicUniformParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdAxisLockRight __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdAxisLockRight>(nullptr, "FGPUSpriteEmitterDynamicUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdAxisLockUp __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdAxisLockUp>(nullptr, "FGPUSpriteEmitterDynamicUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdDynamicColor __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdDynamicColor>(nullptr, "FGPUSpriteEmitterDynamicUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdLocalToWorldScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FGPUSpriteEmitterDynamicUniformParameters::zzNextMemberIdLocalToWorldScale>(nullptr, "FGPUSpriteEmitterDynamicUniformParameters.zzGetMembersBefore", result, __formal); }
};

