#pragma once

#include "BaseDeclarations.h"
#include "APawn.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADefaultPawn : APawn
{
	char __padding[0x28L];
	float& BaseTurnRateField() { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseTurnRate"); }
	float& BaseLookUpRateField() { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseLookUpRate"); }

	// Functions

	void UpdateNavigationRelevance() { NativeCall<void>(this, "ADefaultPawn.UpdateNavigationRelevance"); }
	void LookUp(float Val) { NativeCall<void, float>(this, "ADefaultPawn.LookUp", Val); }
	void LookUpAtRate(float Rate) { NativeCall<void, float>(this, "ADefaultPawn.LookUpAtRate", Rate); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveRight", Val); }
	void MoveUp_World(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveUp_World", Val); }
	void SetupPlayerInputComponent(UInputComponent * InputComponent) { NativeCall<void, UInputComponent *>(this, "ADefaultPawn.SetupPlayerInputComponent", InputComponent); }
	void Turn(float Val) { NativeCall<void, float>(this, "ADefaultPawn.Turn", Val); }
	void TurnAtRate(float Rate) { NativeCall<void, float>(this, "ADefaultPawn.TurnAtRate", Rate); }
};

struct ASpectatorPawn : ADefaultPawn
{

	// Functions

	void PossessedBy(AController * NewController) { NativeCall<void, AController *>(this, "ASpectatorPawn.PossessedBy", NewController); }
};

struct AShooterSpectatorPawn : ASpectatorPawn
{
	char __padding[0x50L];
	bool& bIsAutoCyclingField() { return *GetNativePointerField<bool*>(this, "AShooterSpectatorPawn.bIsAutoCycling"); }
	long double& LastAutoCycleTargetAliveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterSpectatorPawn.LastAutoCycleTargetAliveTime"); }
	FRotator& OrbitCamRotField() { return *GetNativePointerField<FRotator*>(this, "AShooterSpectatorPawn.OrbitCamRot"); }
	float& OrbitCamZoomField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.OrbitCamZoom"); }
	long double& LastOrbitCamTargetAliveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterSpectatorPawn.LastOrbitCamTargetAliveTime"); }
	float& DefaultBaseSpeedField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.DefaultBaseSpeed"); }
	float& DefaultBaseSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.DefaultBaseSpeedMultiplier"); }
	float& BaseSpeedField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseSpeed"); }
	float& BaseSpeedAccelField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseSpeedAccel"); }
	float& LastTeleportTimeField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.LastTeleportTime"); }
	float& LastOrbitCamOffField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.LastOrbitCamOff"); }

	// Functions

	void AutoCycle(float Duration) { NativeCall<void, float>(this, "AShooterSpectatorPawn.AutoCycle", Duration); }
	void DoAutoCycle() { NativeCall<void>(this, "AShooterSpectatorPawn.DoAutoCycle"); }
	float GetCurrentSpeed(float Val) { return NativeCall<float, float>(this, "AShooterSpectatorPawn.GetCurrentSpeed", Val); }
	float GetOcclusionAlpha() { return NativeCall<float>(this, "AShooterSpectatorPawn.GetOcclusionAlpha"); }
	void LoadSpectatorPos(int Index) { NativeCall<void, int>(this, "AShooterSpectatorPawn.LoadSpectatorPos", Index); }
	void LookInput(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.LookInput", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.LookUpAtRate", Val); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveRight", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveUp", Val); }
	void OrbitCamOff() { NativeCall<void>(this, "AShooterSpectatorPawn.OrbitCamOff"); }
	void OrbitCamOn(TWeakObjectPtr<AActor> OrbitTarget) { NativeCall<void, TWeakObjectPtr<AActor>>(this, "AShooterSpectatorPawn.OrbitCamOn", OrbitTarget); }
	void PawnClientRestart() { NativeCall<void>(this, "AShooterSpectatorPawn.PawnClientRestart"); }
	void SaveSpectatorPos(int Index) { NativeCall<void, int>(this, "AShooterSpectatorPawn.SaveSpectatorPos", Index); }
	void SetupPlayerInputComponent(UInputComponent * InputComponent) { NativeCall<void, UInputComponent *>(this, "AShooterSpectatorPawn.SetupPlayerInputComponent", InputComponent); }
	void SpectatorDecreaseBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeed"); }
	void SpectatorDecreaseBaseSpeedStart() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedStart"); }
	void SpectatorIncreaseBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeed"); }
	void SpectatorDecreaseBaseSpeedEnd() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedEnd"); }
	void SpectatorIncreaseBaseSpeedStart() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeedStart"); }
	void SpectatorNextPlayer() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorNextPlayer"); }
	void SpectatorPreviousPlayer() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorPreviousPlayer"); }
	void SpectatorResetBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorResetBaseSpeed"); }
	void TeleportSpectatorTo(FVector Location) { NativeCall<void, FVector>(this, "AShooterSpectatorPawn.TeleportSpectatorTo", Location); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterSpectatorPawn.Tick", DeltaSeconds); }
	void TryOrbitCamOnMousePosition() { NativeCall<void>(this, "AShooterSpectatorPawn.TryOrbitCamOnMousePosition"); }
	void TurnAtRate(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.TurnAtRate", Val); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.TurnInput", Val); }
	void ZoomIn() { NativeCall<void>(this, "AShooterSpectatorPawn.ZoomIn"); }
	void ZoomOut() { NativeCall<void>(this, "AShooterSpectatorPawn.ZoomOut"); }
};

