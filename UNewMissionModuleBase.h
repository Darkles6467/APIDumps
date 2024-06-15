#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMissionPhaseRequirement.h"
#include "FMissionWorldIndicator.h"
#include "FDamageEvent.h"

struct UNewMissionModuleBase : UObject
{
	char __padding[0x80L];
	float& ModuleTimeLimitField() { return *GetNativePointerField<float*>(this, "UNewMissionModuleBase.ModuleTimeLimit"); }
	FStruct_MissionModule_Travel& TravelStructField() { return *GetNativePointerField<FStruct_MissionModule_Travel*>(this, "UNewMissionModuleBase.TravelStruct"); }
	TArray<TSubclassOf<UNewMissionModuleBase>>& SubmodulesToRunAtStartField() { return *GetNativePointerField<TArray<TSubclassOf<UNewMissionModuleBase>>*>(this, "UNewMissionModuleBase.SubmodulesToRunAtStart"); }
	TArray<TSubclassOf<UNewMissionModuleBase>>& SubmodulesToRunOnCompleteField() { return *GetNativePointerField<TArray<TSubclassOf<UNewMissionModuleBase>>*>(this, "UNewMissionModuleBase.SubmodulesToRunOnComplete"); }
	TArray<AMissionServerSidePoint *>& ModuleNavPointsField() { return *GetNativePointerField<TArray<AMissionServerSidePoint *>*>(this, "UNewMissionModuleBase.ModuleNavPoints"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UNewMissionModuleBase.BeginDestroy"); }
	TArray<FMissionPhaseRequirement> * GetModuleRequirementsMessage_Implementation(TArray<FMissionPhaseRequirement> * result) { return NativeCall<TArray<FMissionPhaseRequirement> *, TArray<FMissionPhaseRequirement> *>(this, "UNewMissionModuleBase.GetModuleRequirementsMessage_Implementation", result); }
	FString * GetModuleRequirementsTitle_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UNewMissionModuleBase.GetModuleRequirementsTitle_Implementation", result); }
	TArray<FMissionWorldIndicator> * HandleMissionGetPerPlayerIndicators_Implementation(TArray<FMissionWorldIndicator> * result, AShooterCharacter * Character) { return NativeCall<TArray<FMissionWorldIndicator> *, TArray<FMissionWorldIndicator> *, AShooterCharacter *>(this, "UNewMissionModuleBase.HandleMissionGetPerPlayerIndicators_Implementation", result, Character); }
	int HandleMissionModuleBegin_Implementation() { return NativeCall<int>(this, "UNewMissionModuleBase.HandleMissionModuleBegin_Implementation"); }
	int HandleMissionModuleEnd_Implementation() { return NativeCall<int>(this, "UNewMissionModuleBase.HandleMissionModuleEnd_Implementation"); }
	void OnOuterDestroyed_Implementation() { NativeCall<void>(this, "UNewMissionModuleBase.OnOuterDestroyed_Implementation"); }
	void RunSubModulesAtStart_Implementation() { NativeCall<void>(this, "UNewMissionModuleBase.RunSubModulesAtStart_Implementation"); }
	void RunSubModulesOnComplete_Implementation() { NativeCall<void>(this, "UNewMissionModuleBase.RunSubModulesOnComplete_Implementation"); }
	int SetOuter_Implementation(AMissionType_ModularMissionBase * NewOuter) { return NativeCall<int, AMissionType_ModularMissionBase *>(this, "UNewMissionModuleBase.SetOuter_Implementation", NewOuter); }
	void TriggerHandleMissionModuleBegin_Implementation() { NativeCall<void>(this, "UNewMissionModuleBase.TriggerHandleMissionModuleBegin_Implementation"); }
	float BPGetTargetingDesire(APrimalDinoCharacter * MissionDino, AActor * ForTarget, float ForTargetingDesireValue) { return NativeCall<float, APrimalDinoCharacter *, AActor *, float>(this, "UNewMissionModuleBase.BPGetTargetingDesire", MissionDino, ForTarget, ForTargetingDesireValue); }
	TArray<FMissionPhaseRequirement> * GetModuleRequirementsMessage(TArray<FMissionPhaseRequirement> * result) { return NativeCall<TArray<FMissionPhaseRequirement> *, TArray<FMissionPhaseRequirement> *>(this, "UNewMissionModuleBase.GetModuleRequirementsMessage", result); }
	FString * GetModuleRequirementsTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UNewMissionModuleBase.GetModuleRequirementsTitle", result); }
	int HandleLastMissionDinoDied(APrimalDinoCharacter * Dino, float KillingDamage, FDamageEvent DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<int, APrimalDinoCharacter *, float, FDamageEvent, AController *, AActor *>(this, "UNewMissionModuleBase.HandleLastMissionDinoDied", Dino, KillingDamage, DamageEvent, Killer, DamageCauser); }
	int HandleLastMissionProjectileExploded(AShooterProjectile * Projectile) { return NativeCall<int, AShooterProjectile *>(this, "UNewMissionModuleBase.HandleLastMissionProjectileExploded", Projectile); }
	int HandleLastMissionStructureDestroyed(APrimalStructure * Structure, float KillingDamage, FDamageEvent DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<int, APrimalStructure *, float, FDamageEvent, AController *, AActor *>(this, "UNewMissionModuleBase.HandleLastMissionStructureDestroyed", Structure, KillingDamage, DamageEvent, Killer, DamageCauser); }
	int HandleMissionDinoDamaged(APrimalDinoCharacter * Dino, float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<int, APrimalDinoCharacter *, float, const FDamageEvent *, AController *, AActor *>(this, "UNewMissionModuleBase.HandleMissionDinoDamaged", Dino, Damage, DamageEvent, EventInstigator, DamageCauser); }
	int HandleMissionDinoDied(APrimalDinoCharacter * Dino, float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<int, APrimalDinoCharacter *, float, const FDamageEvent *, AController *, AActor *>(this, "UNewMissionModuleBase.HandleMissionDinoDied", Dino, KillingDamage, DamageEvent, Killer, DamageCauser); }
	int HandleMissionDroppedItemPickedUp(ADroppedItemMission * DroppedItem, APlayerController * PC, UPrimalItem * Item) { return NativeCall<int, ADroppedItemMission *, APlayerController *, UPrimalItem *>(this, "UNewMissionModuleBase.HandleMissionDroppedItemPickedUp", DroppedItem, PC, Item); }
	TArray<FMissionWorldIndicator> * HandleMissionGetPerPlayerIndicators(TArray<FMissionWorldIndicator> * result, AShooterCharacter * Character) { return NativeCall<TArray<FMissionWorldIndicator> *, TArray<FMissionWorldIndicator> *, AShooterCharacter *>(this, "UNewMissionModuleBase.HandleMissionGetPerPlayerIndicators", result, Character); }
	int HandleMissionModuleBegin() { return NativeCall<int>(this, "UNewMissionModuleBase.HandleMissionModuleBegin"); }
	int HandleMissionPlayerAddedInventoryItem(AShooterCharacter * Player, UPrimalInventoryComponent * Inventory, UPrimalItem * Item, int AmountAdded, bool bEquippedItem) { return NativeCall<int, AShooterCharacter *, UPrimalInventoryComponent *, UPrimalItem *, int, bool>(this, "UNewMissionModuleBase.HandleMissionPlayerAddedInventoryItem", Player, Inventory, Item, AmountAdded, bEquippedItem); }
	int HandleMissionPlayerRemovedInventoryItem(AShooterCharacter * Player, UPrimalInventoryComponent * Inventory, UPrimalItem * Item, int AmountRemoved) { return NativeCall<int, AShooterCharacter *, UPrimalInventoryComponent *, UPrimalItem *, int>(this, "UNewMissionModuleBase.HandleMissionPlayerRemovedInventoryItem", Player, Inventory, Item, AmountRemoved); }
	int HandleMissionProjectileExploded(AShooterProjectile * Projectile) { return NativeCall<int, AShooterProjectile *>(this, "UNewMissionModuleBase.HandleMissionProjectileExploded", Projectile); }
	int HandleMissionStructureDamaged(APrimalStructure * Structure, float KillingDamage, FDamageEvent DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<int, APrimalStructure *, float, FDamageEvent, AController *, AActor *>(this, "UNewMissionModuleBase.HandleMissionStructureDamaged", Structure, KillingDamage, DamageEvent, Killer, DamageCauser); }
	int HandleMissionStructureDestroyed(APrimalStructure * Structure, float KillingDamage, FDamageEvent DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<int, APrimalStructure *, float, FDamageEvent, AController *, AActor *>(this, "UNewMissionModuleBase.HandleMissionStructureDestroyed", Structure, KillingDamage, DamageEvent, Killer, DamageCauser); }
	int HandleMissionTriggerOverlapBegin(AMissionTrigger * Trigger, AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { return NativeCall<int, AMissionTrigger *, AActor *, UPrimitiveComponent *, int>(this, "UNewMissionModuleBase.HandleMissionTriggerOverlapBegin", Trigger, OtherActor, OtherComp, OtherBodyIndex); }
	int HandleMissionTriggerOverlapEnd(AMissionTrigger * Trigger, AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { return NativeCall<int, AMissionTrigger *, AActor *, UPrimitiveComponent *, int>(this, "UNewMissionModuleBase.HandleMissionTriggerOverlapEnd", Trigger, OtherActor, OtherComp, OtherBodyIndex); }
	void OnOuterDestroyed() { NativeCall<void>(this, "UNewMissionModuleBase.OnOuterDestroyed"); }
	void RunSubModulesAtStart() { NativeCall<void>(this, "UNewMissionModuleBase.RunSubModulesAtStart"); }
	void RunSubModulesOnComplete() { NativeCall<void>(this, "UNewMissionModuleBase.RunSubModulesOnComplete"); }
	int SetOuter(AMissionType_ModularMissionBase * NewOuter) { return NativeCall<int, AMissionType_ModularMissionBase *>(this, "UNewMissionModuleBase.SetOuter", NewOuter); }
	void TriggerHandleMissionModuleBegin() { NativeCall<void>(this, "UNewMissionModuleBase.TriggerHandleMissionModuleBegin"); }
};

