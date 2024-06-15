#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"

struct AController : AActor
{
	char __padding[0x58L];
	FRotator& ControlRotationField() { return *GetNativePointerField<FRotator*>(this, "AController.ControlRotation"); }
	FName& StateNameField() { return *GetNativePointerField<FName*>(this, "AController.StateName"); }

	// Functions

	void AddPawnTickDependency(APawn * NewPawn) { NativeCall<void, APawn *>(this, "AController.AddPawnTickDependency", NewPawn); }
	void AttachToPawn(APawn * InPawn) { NativeCall<void, APawn *>(this, "AController.AttachToPawn", InPawn); }
	void ChangeState(FName NewState) { NativeCall<void, FName>(this, "AController.ChangeState", NewState); }
	void CleanupPlayerState() { NativeCall<void>(this, "AController.CleanupPlayerState"); }
	void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation) { NativeCall<void, FVector, FRotator>(this, "AController.ClientSetLocation_Implementation", NewLocation, NewRotation); }
	void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera) { NativeCall<void, FRotator, bool>(this, "AController.ClientSetRotation_Implementation", NewRotation, bResetCamera); }
	void Destroyed() { NativeCall<void>(this, "AController.Destroyed"); }
	void DetachFromPawn() { NativeCall<void>(this, "AController.DetachFromPawn"); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "AController.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void FailedToSpawnPawn() { NativeCall<void>(this, "AController.FailedToSpawnPawn"); }
	void GetActorEyesViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "AController.GetActorEyesViewPoint", out_Location, out_Rotation); }
	FRotator * GetControlRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "AController.GetControlRotation", result); }
	FRotator * GetDesiredRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "AController.GetDesiredRotation", result); }
	FString * GetHumanReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "AController.GetHumanReadableName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AController.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMoveGoalReachTest(AActor * MovingActor, const FVector * MoveOffset, FVector * GoalOffset, float * GoalRadius, float * GoalHalfHeight) { NativeCall<void, AActor *, const FVector *, FVector *, float *, float *>(this, "AController.GetMoveGoalReachTest", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	FVector * GetNavAgentLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AController.GetNavAgentLocation", result); }
	FName * GetStateName(FName * result) { return NativeCall<FName *, FName *>(this, "AController.GetStateName", result); }
	void InitPlayerState() { NativeCall<void>(this, "AController.InitPlayerState"); }
	void InstigatedAnyDamage(float Damage, const UDamageType * DamageType, AActor * DamagedActor, AActor * DamageCauser) { NativeCall<void, float, const UDamageType *, AActor *, AActor *>(this, "AController.InstigatedAnyDamage", Damage, DamageType, DamagedActor, DamageCauser); }
	bool IsInState(FName InStateName) { return NativeCall<bool, FName>(this, "AController.IsInState", InStateName); }
	bool IsLocalController() { return NativeCall<bool>(this, "AController.IsLocalController"); }
	bool LineOfSightTo(AActor * Other, FVector ViewPoint, bool bAlternateChecks) { return NativeCall<bool, AActor *, FVector, bool>(this, "AController.LineOfSightTo", Other, ViewPoint, bAlternateChecks); }
	void OnRep_Pawn() { NativeCall<void>(this, "AController.OnRep_Pawn"); }
	void OnRep_PlayerState() { NativeCall<void>(this, "AController.OnRep_PlayerState"); }
	void PawnPendingDestroy(APawn * inPawn) { NativeCall<void, APawn *>(this, "AController.PawnPendingDestroy", inPawn); }
	void Possess(APawn * InPawn) { NativeCall<void, APawn *>(this, "AController.Possess", InPawn); }
	void PostInitializeComponents() { NativeCall<void>(this, "AController.PostInitializeComponents"); }
	void RemovePawnTickDependency(APawn * InOldPawn) { NativeCall<void, APawn *>(this, "AController.RemovePawnTickDependency", InOldPawn); }
	void Reset() { NativeCall<void>(this, "AController.Reset"); }
	void SetControlRotation(const FRotator * NewRotation) { NativeCall<void, const FRotator *>(this, "AController.SetControlRotation", NewRotation); }
	void SetInitialLocationAndRotation(const FVector * NewLocation, const FRotator * NewRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "AController.SetInitialLocationAndRotation", NewLocation, NewRotation); }
	void SetPawn(APawn * InPawn) { NativeCall<void, APawn *>(this, "AController.SetPawn", InPawn); }
	void SetPawnFromRep(APawn * InPawn) { NativeCall<void, APawn *>(this, "AController.SetPawnFromRep", InPawn); }
	bool ShouldPostponePathUpdates() { return NativeCall<bool>(this, "AController.ShouldPostponePathUpdates"); }
	void UnPossess() { NativeCall<void>(this, "AController.UnPossess"); }
	void UpdateNavigationComponents() { NativeCall<void>(this, "AController.UpdateNavigationComponents"); }
	void ClientSetRotation(FRotator NewRotation, bool bResetCamera) { NativeCall<void, FRotator, bool>(this, "AController.ClientSetRotation", NewRotation, bResetCamera); }
	void ReceiveInstigatedAnyDamage(float Damage, const UDamageType * DamageType, AActor * DamagedActor, AActor * DamageCauser) { NativeCall<void, float, const UDamageType *, AActor *, AActor *>(this, "AController.ReceiveInstigatedAnyDamage", Damage, DamageType, DamagedActor, DamageCauser); }
};

