#pragma once

#include "BaseDeclarations.h"
struct FParticleCurveInjectionParameters
{
	char __padding[0x10L];
	FVector2D& PixelScaleField() { return *GetNativePointerField<FVector2D*>(this, "FParticleCurveInjectionParameters.PixelScale"); }
	FVector2D& CurveOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FParticleCurveInjectionParameters.CurveOffset"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FParticleCurveInjectionParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleCurveInjectionParameters::zzNextMemberIdCurveOffset __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleCurveInjectionParameters::zzNextMemberIdCurveOffset>(nullptr, "FParticleCurveInjectionParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FParticleCurveInjectionParameters::zzNextMemberIdPixelScale __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FParticleCurveInjectionParameters::zzNextMemberIdPixelScale>(nullptr, "FParticleCurveInjectionParameters.zzGetMembersBefore", result, __formal); }
};

