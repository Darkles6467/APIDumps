#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"

struct APawn : AActor
{
	char __padding[0x90L];
	float& BaseEyeHeightField() { return *GetNativePointerField<float*>(this, "APawn.BaseEyeHeight"); }
	TEnumAsByte<enum EAutoReceiveInput::Type>& AutoPossessField() { return *GetNativePointerField<TEnumAsByte<enum EAutoReceiveInput::Type>*>(this, "APawn.AutoPossess"); }
	char& RemoteViewPitchField() { return *GetNativePointerField<char*>(this, "APawn.RemoteViewPitch"); }
	float& AllowedYawErrorField() { return *GetNativePointerField<float*>(this, "APawn.AllowedYawError"); }
	bool& bClearOnConsumeField() { return *GetNativePointerField<bool*>(this, "APawn.bClearOnConsume"); }
	float& TetherRadiusField() { return *GetNativePointerField<float*>(this, "APawn.TetherRadius"); }
	float& TetherHeightField() { return *GetNativePointerField<float*>(this, "APawn.TetherHeight"); }
	FVector& ControlInputVectorField() { return *GetNativePointerField<FVector*>(this, "APawn.ControlInputVector"); }
	FVector& LastControlInputVectorField() { return *GetNativePointerField<FVector*>(this, "APawn.LastControlInputVector"); }

	// Functions

	FVector * GetNavAgentLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APawn.GetNavAgentLocation", result); }
	void AddControllerPitchInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerPitchInput", Val); }
	void AddControllerRollInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerRollInput", Val); }
	void AddControllerYawInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerYawInput", Val); }
	void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce) { NativeCall<void, FVector, float, bool>(this, "APawn.AddMovementInput", WorldDirection, ScaleValue, bForce); }
	void BecomeViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APawn.BecomeViewTarget", PC); }
	bool CanBeBaseForCharacter(APawn * APawn) { return NativeCall<bool, APawn *>(this, "APawn.CanBeBaseForCharacter", APawn); }
	void ClearMovementTether() { NativeCall<void>(this, "APawn.ClearMovementTether"); }
	void ClientSetRotation(FRotator NewRotation) { NativeCall<void, FRotator>(this, "APawn.ClientSetRotation", NewRotation); }
	FVector * ConsumeMovementInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APawn.ConsumeMovementInputVector", result); }
	UInputComponent * CreatePlayerInputComponent() { return NativeCall<UInputComponent *>(this, "APawn.CreatePlayerInputComponent"); }
	void DestroyPlayerInputComponent() { NativeCall<void>(this, "APawn.DestroyPlayerInputComponent"); }
	void Destroyed() { NativeCall<void>(this, "APawn.Destroyed"); }
	void DetachFromControllerPendingDestroy() { NativeCall<void>(this, "APawn.DetachFromControllerPendingDestroy"); }
	void DisableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "APawn.DisableInput", PlayerController); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "APawn.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void EnableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "APawn.EnableInput", PlayerController); }
	void FaceRotation(FRotator NewControlRotation, float DeltaTime, bool bFromController) { NativeCall<void, FRotator, float, bool>(this, "APawn.FaceRotation", NewControlRotation, DeltaTime, bFromController); }
	void GetActorEyesViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "APawn.GetActorEyesViewPoint", out_Location, out_Rotation); }
	FRotator * GetBaseAimRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APawn.GetBaseAimRotation", result); }
	FVector * GetLastMovementInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APawn.GetLastMovementInputVector", result); }
	FRotator * GetControlRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APawn.GetControlRotation", result); }
	float GetDefaultHalfHeight() { return NativeCall<float>(this, "APawn.GetDefaultHalfHeight"); }
	FString * GetHumanReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "APawn.GetHumanReadableName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APawn.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetNetPriority(const FVector * ViewPos, const FVector * ViewDir, APlayerController * Viewer, UActorChannel * InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const FVector *, const FVector *, APlayerController *, UActorChannel *, float, bool>(this, "APawn.GetNetPriority", ViewPos, ViewDir, Viewer, InChannel, Time, bLowBandwidth); }
	UPawnNoiseEmitterComponent * GetPawnNoiseEmitterComponent() { return NativeCall<UPawnNoiseEmitterComponent *>(this, "APawn.GetPawnNoiseEmitterComponent"); }
	FVector * GetPawnViewLocation(FVector * result, bool bAllTransforms) { return NativeCall<FVector *, FVector *, bool>(this, "APawn.GetPawnViewLocation", result, bAllTransforms); }
	FVector * GetTetheredDestination(FVector * result, const FVector * Destination, float AdditionalRadius) { return NativeCall<FVector *, FVector *, const FVector *, float>(this, "APawn.GetTetheredDestination", result, Destination, AdditionalRadius); }
	FVector * GetTetheredVelocity(FVector * result, const FVector * RequestedVelocity, float DeltaSeconds) { return NativeCall<FVector *, FVector *, const FVector *, float>(this, "APawn.GetTetheredVelocity", result, RequestedVelocity, DeltaSeconds); }
	FVector * GetVelocity(FVector * result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>(this, "APawn.GetVelocity", result, bIsForRagdoll); }
	FRotator * GetViewRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APawn.GetViewRotation", result); }
	bool HasNetOwner() { return NativeCall<bool>(this, "APawn.HasNetOwner"); }
	bool InFreeCam() { return NativeCall<bool>(this, "APawn.InFreeCam"); }
	void Internal_AddMovementInput(FVector WorldAccel, bool bForce) { NativeCall<void, FVector, bool>(this, "APawn.Internal_AddMovementInput", WorldAccel, bForce); }
	FVector * Internal_ConsumeMovementInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APawn.Internal_ConsumeMovementInputVector", result); }
	bool IsBasedOnActor(AActor * Other) { return NativeCall<bool, AActor *>(this, "APawn.IsBasedOnActor", Other); }
	bool IsControlled() { return NativeCall<bool>(this, "APawn.IsControlled"); }
	bool IsCrouched() { return NativeCall<bool>(this, "APawn.IsCrouched"); }
	bool IsFalling() { return NativeCall<bool>(this, "APawn.IsFalling"); }
	bool IsLocallyControlled() { return NativeCall<bool>(this, "APawn.IsLocallyControlled"); }
	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "APawn.IsLocallyControlledByPlayer"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "APawn.IsMoveInputIgnored"); }
	bool IsMovementTethered() { return NativeCall<bool>(this, "APawn.IsMovementTethered"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, const FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, const FVector *>(this, "APawn.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsTargetWithinTether(const FVector * Destination, float AdditionalRadius) { return NativeCall<bool, const FVector *, float>(this, "APawn.IsTargetWithinTether", Destination, AdditionalRadius); }
	bool IsWalking() { return NativeCall<bool>(this, "APawn.IsWalking"); }
	bool IsWithinTether() { return NativeCall<bool>(this, "APawn.IsWithinTether"); }
	FVector * K2_GetMovementInputVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APawn.K2_GetMovementInputVector", result); }
	void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) { NativeCall<void, FVector, bool, bool>(this, "APawn.LaunchPawn", LaunchVelocity, bXYOverride, bZOverride); }
	void OnRep_Controller() { NativeCall<void>(this, "APawn.OnRep_Controller"); }
	void OutsideWorldBounds() { NativeCall<void>(this, "APawn.OutsideWorldBounds"); }
	void PawnClientRestart() { NativeCall<void>(this, "APawn.PawnClientRestart"); }
	void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor * NoiseMaker) { NativeCall<void, float, FVector, bool, AActor *>(this, "APawn.PawnMakeNoise", Loudness, NoiseLocation, bUseNoiseMakerLocation, NoiseMaker); }
	void PossessedBy(AController * NewController) { NativeCall<void, AController *>(this, "APawn.PossessedBy", NewController); }
	void PostInitializeComponents() { NativeCall<void>(this, "APawn.PostInitializeComponents"); }
	void PostInputProcessed() { NativeCall<void>(this, "APawn.PostInputProcessed"); }
	void PostLoad() { NativeCall<void>(this, "APawn.PostLoad"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APawn.PostNetReceiveLocationAndRotation"); }
	void PostNetReceiveVelocity(const FVector * NewVelocity) { NativeCall<void, const FVector *>(this, "APawn.PostNetReceiveVelocity", NewVelocity); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "APawn.PostRegisterAllComponents"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APawn.PreInitializeComponents"); }
	bool ReachedDesiredRotation() { return NativeCall<bool>(this, "APawn.ReachedDesiredRotation"); }
	void RecalculateBaseEyeHeight() { NativeCall<void>(this, "APawn.RecalculateBaseEyeHeight"); }
	void Reset() { NativeCall<void>(this, "APawn.Reset"); }
	void Restart() { NativeCall<void>(this, "APawn.Restart"); }
	void SetCanAffectNavigationGeneration(bool bNewValue) { NativeCall<void, bool>(this, "APawn.SetCanAffectNavigationGeneration", bNewValue); }
	void SetMovementTether(AActor * InTetherActor, float Radius, float Height) { NativeCall<void, AActor *, float, float>(this, "APawn.SetMovementTether", InTetherActor, Radius, Height); }
	bool ShouldTakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APawn.ShouldTakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APawn.ShouldTickIfViewportsOnly"); }
	void SpawnDefaultController() { NativeCall<void>(this, "APawn.SpawnDefaultController"); }
	float TakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "APawn.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APawn.Tick", DeltaSeconds); }
	void TurnOff() { NativeCall<void>(this, "APawn.TurnOff"); }
	void UnPossessed() { NativeCall<void>(this, "APawn.UnPossessed"); }
	void InterceptInputEvent(const FString * InputName) { NativeCall<void, const FString *>(this, "APawn.InterceptInputEvent", InputName); }
	void ReceivePossessed(AController * NewController) { NativeCall<void, AController *>(this, "APawn.ReceivePossessed", NewController); }
	void ReceiveUnpossessed(AController * OldController) { NativeCall<void, AController *>(this, "APawn.ReceiveUnpossessed", OldController); }
};

