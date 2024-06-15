#pragma once

#include "BaseDeclarations.h"
#include "USkinnedMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDestructibleComponent : USkinnedMeshComponent
{
	char __padding[0xc0L];
	TArray<FFractureEffect>& FractureEffectsField() { return *GetNativePointerField<TArray<FFractureEffect>*>(this, "UDestructibleComponent.FractureEffects"); }
	bool& bEnableHardSleepingField() { return *GetNativePointerField<bool*>(this, "UDestructibleComponent.bEnableHardSleeping"); }
	float& LargeChunkThresholdField() { return *GetNativePointerField<float*>(this, "UDestructibleComponent.LargeChunkThreshold"); }
	TIndirectArray<FDestructibleChunkInfo>& ChunkInfosField() { return *GetNativePointerField<TIndirectArray<FDestructibleChunkInfo>*>(this, "UDestructibleComponent.ChunkInfos"); }
	FCollisionResponse& LargeChunkCollisionResponseField() { return *GetNativePointerField<FCollisionResponse*>(this, "UDestructibleComponent.LargeChunkCollisionResponse"); }
	FCollisionResponse& SmallChunkCollisionResponseField() { return *GetNativePointerField<FCollisionResponse*>(this, "UDestructibleComponent.SmallChunkCollisionResponse"); }
	FPhysxUserData& PhysxUserDataField() { return *GetNativePointerField<FPhysxUserData*>(this, "UDestructibleComponent.PhysxUserData"); }
	TIndirectArray<FPhysxUserData>& PhysxChunkUserDataField() { return *GetNativePointerField<TIndirectArray<FPhysxUserData>*>(this, "UDestructibleComponent.PhysxChunkUserData"); }

	// Functions

	void Activate(bool bReset) { NativeCall<void, bool>(this, "UDestructibleComponent.Activate", bReset); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UDestructibleComponent.CalcBounds", result, LocalToWorld); }
	void CreatePhysicsState() { NativeCall<void>(this, "UDestructibleComponent.CreatePhysicsState"); }
	void Deactivate() { NativeCall<void>(this, "UDestructibleComponent.Deactivate"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UDestructibleComponent.DestroyPhysicsState"); }
	FBodyInstance * GetBodyInstance(FName BoneName, bool __formal) { return NativeCall<FBodyInstance *, FName, bool>(this, "UDestructibleComponent.GetBodyInstance", BoneName, __formal); }
	UDestructibleMesh * GetDestructibleMesh() { return NativeCall<UDestructibleMesh *>(this, "UDestructibleComponent.GetDestructibleMesh"); }
	FTransform * GetSocketTransform(FTransform * result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<FTransform *, FTransform *, FName, ERelativeTransformSpace>(this, "UDestructibleComponent.GetSocketTransform", result, InSocketName, TransformSpace); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>(this, "UDestructibleComponent.IsAnySimulatingPhysics"); }
	void OnUpdateTransform(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "UDestructibleComponent.OnUpdateTransform", bSkipPhysicsMove); }
	void ReceiveComponentDamage(float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "UDestructibleComponent.ReceiveComponentDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDestructibleComponent.Serialize", Ar); }
	void SetCollisionProfileName(FName InCollisionProfileName) { NativeCall<void, FName>(this, "UDestructibleComponent.SetCollisionProfileName", InCollisionProfileName); }
	void SetDestructibleMesh(UDestructibleMesh * NewMesh) { NativeCall<void, UDestructibleMesh *>(this, "UDestructibleComponent.SetDestructibleMesh", NewMesh); }
	void SetSkeletalMesh(USkeletalMesh * InSkelMesh) { NativeCall<void, USkeletalMesh *>(this, "UDestructibleComponent.SetSkeletalMesh", InSkelMesh); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UDestructibleComponent.ShouldCreatePhysicsState"); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "UDestructibleComponent.WakeAllRigidBodies"); }
};

