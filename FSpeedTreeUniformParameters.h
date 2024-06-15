#pragma once

#include "BaseDeclarations.h"
struct FSpeedTreeUniformParameters
{
	char __padding[0x130L];
	FVector4& WindVectorField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindVector"); }
	FVector4& WindGlobalField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindGlobal"); }
	FVector4& WindBranchField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindBranch"); }
	FVector4& WindBranchTwitchField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindBranchTwitch"); }
	FVector4& WindBranchWhipField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindBranchWhip"); }
	FVector4& WindBranchAnchorField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindBranchAnchor"); }
	FVector4& WindBranchAdherencesField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindBranchAdherences"); }
	FVector4& WindTurbulencesField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindTurbulences"); }
	FVector4& WindLeaf1RippleField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf1Ripple"); }
	FVector4& WindLeaf1TumbleField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf1Tumble"); }
	FVector4& WindLeaf1TwitchField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf1Twitch"); }
	FVector4& WindLeaf2RippleField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf2Ripple"); }
	FVector4& WindLeaf2TumbleField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf2Tumble"); }
	FVector4& WindLeaf2TwitchField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindLeaf2Twitch"); }
	FVector4& WindFrondRippleField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindFrondRipple"); }
	FVector4& WindRollingBranchField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindRollingBranch"); }
	FVector4& WindRollingLeafAndDirectionField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindRollingLeafAndDirection"); }
	FVector4& WindRollingNoiseField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindRollingNoise"); }
	FVector4& WindAnimationField() { return *GetNativePointerField<FVector4*>(this, "FSpeedTreeUniformParameters.WindAnimation"); }

	// Functions

	static TArray<FUniformBufferStruct::FMember> * zzGetMembers(TArray<FUniformBufferStruct::FMember> * result) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *>(nullptr, "FSpeedTreeUniformParameters.zzGetMembers", result); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindAnimation __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindAnimation>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindBranch __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindBranch>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchAdherences __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchAdherences>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchAnchor __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchAnchor>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchTwitch __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchTwitch>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchWhip __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindBranchWhip>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindFrondRipple __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindFrondRipple>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindGlobal __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindGlobal>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Ripple __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Ripple>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Tumble __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Tumble>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Twitch __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf1Twitch>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Ripple __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Ripple>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Tumble __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Tumble>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Twitch __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindLeaf2Twitch>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingBranch __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingBranch>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingLeafAndDirection __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingLeafAndDirection>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingNoise __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindRollingNoise>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindTurbulences __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindTurbulences>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
	static TArray<FUniformBufferStruct::FMember> * zzGetMembersBefore(TArray<FUniformBufferStruct::FMember> * result, FSpeedTreeUniformParameters::zzNextMemberIdWindVector __formal) { return NativeCall<TArray<FUniformBufferStruct::FMember> *, TArray<FUniformBufferStruct::FMember> *, FSpeedTreeUniformParameters::zzNextMemberIdWindVector>(nullptr, "FSpeedTreeUniformParameters.zzGetMembersBefore", result, __formal); }
};

