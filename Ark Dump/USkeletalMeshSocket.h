#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USkeletalMeshSocket : UObject
{
	char __padding[0x38L];
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMeshSocket.SocketName"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMeshSocket.BoneName"); }
	FVector& RelativeLocationField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshSocket.RelativeLocation"); }
	FRotator& RelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "USkeletalMeshSocket.RelativeRotation"); }
	FVector& RelativeScaleField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshSocket.RelativeScale"); }

	// Functions

	FTransform * GetSocketLocalTransform(FTransform * result, const FVector * InverseScale) { return NativeCall<FTransform *, FTransform *, const FVector *>(this, "USkeletalMeshSocket.GetSocketLocalTransform", result, InverseScale); }
	FVector * GetSocketLocation(FVector * result, const USkeletalMeshComponent * SkelComp) { return NativeCall<FVector *, FVector *, const USkeletalMeshComponent *>(this, "USkeletalMeshSocket.GetSocketLocation", result, SkelComp); }
	bool GetSocketMatrix(FMatrix * OutMatrix, const USkeletalMeshComponent * SkelComp) { return NativeCall<bool, FMatrix *, const USkeletalMeshComponent *>(this, "USkeletalMeshSocket.GetSocketMatrix", OutMatrix, SkelComp); }
	bool GetSocketMatrixWithOffset(FMatrix * OutMatrix, USkeletalMeshComponent * SkelComp, const FVector * InOffset, const FRotator * InRotation) { return NativeCall<bool, FMatrix *, USkeletalMeshComponent *, const FVector *, const FRotator *>(this, "USkeletalMeshSocket.GetSocketMatrixWithOffset", OutMatrix, SkelComp, InOffset, InRotation); }
	void InitializeSocketFromLocation(const USkeletalMeshComponent * SkelComp, FVector WorldLocation, FVector WorldNormal) { NativeCall<void, const USkeletalMeshComponent *, FVector, FVector>(this, "USkeletalMeshSocket.InitializeSocketFromLocation", SkelComp, WorldLocation, WorldNormal); }
};

