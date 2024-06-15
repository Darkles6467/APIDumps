#pragma once

#include "BaseDeclarations.h"
struct FQuat
{
	char __padding[0x10L];
	float& XField() { return *GetNativePointerField<float*>(this, "FQuat.X"); }
	float& YField() { return *GetNativePointerField<float*>(this, "FQuat.Y"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FQuat.Z"); }
	float& WField() { return *GetNativePointerField<float*>(this, "FQuat.W"); }

	// Functions

	FVector * Euler(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FQuat.Euler", result); }
	static FQuat * FindBetween(FQuat * result, const FVector * vec1, const FVector * vec2) { return NativeCall<FQuat *, FQuat *, const FVector *, const FVector *>(nullptr, "FQuat.FindBetween", result, vec1, vec2); }
	static FQuat * MakeFromEuler(FQuat * result, const FVector * Euler) { return NativeCall<FQuat *, FQuat *, const FVector *>(nullptr, "FQuat.MakeFromEuler", result, Euler); }
	bool NetSerialize(FArchive * Ar, UPackageMap * __formal, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FQuat.NetSerialize", Ar, __formal, bOutSuccess); }
	FRotator * Rotator(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "FQuat.Rotator", result); }
	static FQuat * Slerp(FQuat * result, const FQuat * Quat1, const FQuat * Quat2, float Slerp) { return NativeCall<FQuat *, FQuat *, const FQuat *, const FQuat *, float>(nullptr, "FQuat.Slerp", result, Quat1, Quat2, Slerp); }
	static FQuat * SlerpFullPath(FQuat * result, const FQuat * quat1, const FQuat * quat2, float Alpha) { return NativeCall<FQuat *, FQuat *, const FQuat *, const FQuat *, float>(nullptr, "FQuat.SlerpFullPath", result, quat1, quat2, Alpha); }
};

