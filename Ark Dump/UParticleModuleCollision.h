#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleCollisionBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleCollision : UParticleModuleCollisionBase
{
	char __padding[0x150L];
	TEnumAsByte<enum EParticleCollisionComplete>& CollisionCompletionOptionField() { return *GetNativePointerField<TEnumAsByte<enum EParticleCollisionComplete>*>(this, "UParticleModuleCollision.CollisionCompletionOption"); }
	TArray<TEnumAsByte<enum EObjectTypeQuery>>& CollisionTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EObjectTypeQuery>>*>(this, "UParticleModuleCollision.CollisionTypes"); }
	FCollisionObjectQueryParams& ObjectParamsField() { return *GetNativePointerField<FCollisionObjectQueryParams*>(this, "UParticleModuleCollision.ObjectParams"); }
	float& DirScalarField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollision.DirScalar"); }
	float& VerticalFudgeFactorField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollision.VerticalFudgeFactor"); }
	float& MaxCollisionDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollision.MaxCollisionDistance"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleCollision.InitializeDefaults"); }
	bool PerformCollisionCheck(FParticleEmitterInstance * Owner, FBaseParticle * InParticle, FHitResult * Hit, AActor * SourceActor, const FVector * End, const FVector * Start, const FVector * Extent) { return NativeCall<bool, FParticleEmitterInstance *, FBaseParticle *, FHitResult *, AActor *, const FVector *, const FVector *, const FVector *>(this, "UParticleModuleCollision.PerformCollisionCheck", Owner, InParticle, Hit, SourceActor, End, Start, Extent); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleCollision.PostInitProperties"); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleCollision.PrepPerInstanceBlock", Owner, InstData); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleCollision.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleCollision.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleCollision.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleCollision.Update", Owner, Offset, DeltaTime); }
};

