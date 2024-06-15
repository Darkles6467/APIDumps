#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANavigationObjectBase : AActor
{
	char __padding[0x28L];
	TSubobjectPtr<UCapsuleComponent>& CapsuleComponentField() { return *GetNativePointerField<TSubobjectPtr<UCapsuleComponent>*>(this, "ANavigationObjectBase.CapsuleComponent"); }
	TSubobjectPtr<UBillboardComponent>& GoodSpriteField() { return *GetNativePointerField<TSubobjectPtr<UBillboardComponent>*>(this, "ANavigationObjectBase.GoodSprite"); }
	TSubobjectPtr<UBillboardComponent>& BadSpriteField() { return *GetNativePointerField<TSubobjectPtr<UBillboardComponent>*>(this, "ANavigationObjectBase.BadSprite"); }

	// Functions

	void FindBase() { NativeCall<void>(this, "ANavigationObjectBase.FindBase"); }
	void GetSimpleCollisionCylinder(float * CollisionRadius, float * CollisionHalfHeight) { NativeCall<void, float *, float *>(this, "ANavigationObjectBase.GetSimpleCollisionCylinder", CollisionRadius, CollisionHalfHeight); }
	bool ShouldBeBased() { return NativeCall<bool>(this, "ANavigationObjectBase.ShouldBeBased"); }
	void Validate() { NativeCall<void>(this, "ANavigationObjectBase.Validate"); }
	void GetMoveGoalReachTest(AActor * MovingActor, const FVector * MoveOffset, FVector * GoalOffset, float * GoalRadius, float * GoalHalfHeight) { NativeCall<void, AActor *, const FVector *, FVector *, float *, float *>(this, "ANavigationObjectBase.GetMoveGoalReachTest", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
};

struct APlayerStart : ANavigationObjectBase
{
	char __padding[0x10L];
	FName& PlayerStartTagField() { return *GetNativePointerField<FName*>(this, "APlayerStart.PlayerStartTag"); }
	int& SpawnPointRegionField() { return *GetNativePointerField<int*>(this, "APlayerStart.SpawnPointRegion"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APlayerStart.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "APlayerStart.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APlayerStart.EndPlay", EndPlayReason); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerStart.PostInitializeComponents"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "APlayerStart.PostUnregisterAllComponents"); }
};

struct APlayerStartPIE : APlayerStart
{

	// Functions

};

