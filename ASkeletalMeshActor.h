#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct ASkeletalMeshActor : AActor
{
	char __padding[0x40L];
	UPhysicsAsset * ReplicatedPhysAssetField() { return GetNativePointerField<UPhysicsAsset *>(this, "ASkeletalMeshActor.ReplicatedPhysAsset"); }
	EAnimationMode::Type& SavedAnimationModeField() { return *GetNativePointerField<EAnimationMode::Type*>(this, "ASkeletalMeshActor.SavedAnimationMode"); }

	// Functions

	void PreviewBeginAnimControl(UInterpGroup * InInterpGroup) { NativeCall<void, UInterpGroup *>(this, "ASkeletalMeshActor.PreviewBeginAnimControl", InInterpGroup); }
	void BeginPlay() { NativeCall<void>(this, "ASkeletalMeshActor.BeginPlay"); }
	void FinishAnimControl(UInterpGroup * InInterpGroup) { NativeCall<void, UInterpGroup *>(this, "ASkeletalMeshActor.FinishAnimControl", InInterpGroup); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "ASkeletalMeshActor.GetDetailedInfoInternal", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ASkeletalMeshActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnRep_ReplicatedMaterial0() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial0"); }
	void OnRep_ReplicatedMaterial1() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial1"); }
	void OnRep_ReplicatedMesh() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMesh"); }
	void OnRep_ReplicatedPhysAsset() { NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedPhysAsset"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASkeletalMeshActor.PostInitializeComponents"); }
	void PreviewFinishAnimControl(UInterpGroup * InInterpGroup) { NativeCall<void, UInterpGroup *>(this, "ASkeletalMeshActor.PreviewFinishAnimControl", InInterpGroup); }
	void PreviewSetAnimPosition(FName SlotName, int ChannelIndex, UAnimSequence * InAnimSequence, float InPosition, bool bLooping, bool bFireNotifies, float DeltaTime) { NativeCall<void, FName, int, UAnimSequence *, float, bool, bool, float>(this, "ASkeletalMeshActor.PreviewSetAnimPosition", SlotName, ChannelIndex, InAnimSequence, InPosition, bLooping, bFireNotifies, DeltaTime); }
	void SetAnimPosition(FName SlotName, int ChannelIndex, UAnimSequence * InAnimSequence, float InPosition, bool bFireNotifies, bool bLooping) { NativeCall<void, FName, int, UAnimSequence *, float, bool, bool>(this, "ASkeletalMeshActor.SetAnimPosition", SlotName, ChannelIndex, InAnimSequence, InPosition, bFireNotifies, bLooping); }
};

