#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureExplosive.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureTripwire : APrimalStructureExplosive
{
	char __padding[0x60L];
	TSubobjectPtr<UBoxComponent>& TriggerComponentField() { return *GetNativePointerField<TSubobjectPtr<UBoxComponent>*>(this, "APrimalStructureTripwire.TriggerComponent"); }
	FRotator& CableRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTripwire.CableRotOffset"); }
	float& MaximumCableLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTripwire.MaximumCableLength"); }
	FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTripwire.BoxName"); }
	int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureTripwire.OwnerTargetingTeam"); }
	long double& LastToggleAlliesTripTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastToggleAlliesTripTime"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastSignNamingTime"); }

	// Functions

	bool IsDoingWireCheck() { return NativeCall<bool>(this, "APrimalStructureTripwire.IsDoingWireCheck"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTripwire.BeginPlay"); }
	bool CanDetonateMe(AShooterCharacter * Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter *, bool>(this, "APrimalStructureTripwire.CanDetonateMe", Character, bUsingRemote); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTripwire.ClientMultiUse", ForPC, UseIndex); }
	void DisconnectMe_Implementation() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe_Implementation"); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureTripwire.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureTripwire.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureTripwire.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void HideWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.HideWireComponent"); }
	void NetUpdateBoxName_Implementation(const FString * NewName) { NativeCall<void, const FString *>(this, "APrimalStructureTripwire.NetUpdateBoxName_Implementation", NewName); }
	void OnRep_ConnectedTo() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_ConnectedTo"); }
	void OnRep_UnwiredTrap() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_UnwiredTrap"); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureTripwire.PlacedStructure", PC); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureTripwire.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructureTripwire.ProcessEditText", ForPC, TextToUse, __formal); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureTripwire.SetStaticMobility"); }
	void SetUnwiredTrap(bool bUnwire) { NativeCall<void, bool>(this, "APrimalStructureTripwire.SetUnwiredTrap", bUnwire); }
	void ShowWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.ShowWireComponent"); }
	void TriggerTouched(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "APrimalStructureTripwire.TriggerTouched", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void Tripped() { NativeCall<void>(this, "APrimalStructureTripwire.Tripped"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureTripwire.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTripwire.Unstasis"); }
	void WireCheck() { NativeCall<void>(this, "APrimalStructureTripwire.WireCheck"); }
	void DisconnectMe() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe"); }
	void NetUpdateBoxName(const FString * NewName) { NativeCall<void, const FString *>(this, "APrimalStructureTripwire.NetUpdateBoxName", NewName); }
};

