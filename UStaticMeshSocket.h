#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStaticMeshSocket : UObject
{
	char __padding[0x40L];
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "UStaticMeshSocket.SocketName"); }
	FVector& RelativeLocationField() { return *GetNativePointerField<FVector*>(this, "UStaticMeshSocket.RelativeLocation"); }
	FRotator& RelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "UStaticMeshSocket.RelativeRotation"); }
	FVector& RelativeScaleField() { return *GetNativePointerField<FVector*>(this, "UStaticMeshSocket.RelativeScale"); }
	FString& TagField() { return *GetNativePointerField<FString*>(this, "UStaticMeshSocket.Tag"); }

	// Functions

	bool GetSocketTransform(FTransform * OutTransform, const UStaticMeshComponent * MeshComp) { return NativeCall<bool, FTransform *, const UStaticMeshComponent *>(this, "UStaticMeshSocket.GetSocketTransform", OutTransform, MeshComp); }
};

