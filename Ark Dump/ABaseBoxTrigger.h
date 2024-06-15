#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct ABaseBoxTrigger : AActor
{
	char __padding[0x18L];
	TSubobjectPtr<UBoxComponent>& TriggerBoxField() { return *GetNativePointerField<TSubobjectPtr<UBoxComponent>*>(this, "ABaseBoxTrigger.TriggerBox"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ABaseBoxTrigger.BeginPlay"); }
	void GetAllCharactersTouchingTrigger(TArray<APrimalCharacter *> * OutCharacters) { NativeCall<void, TArray<APrimalCharacter *> *>(this, "ABaseBoxTrigger.GetAllCharactersTouchingTrigger", OutCharacters); }
	bool IsCharacterTouchingTrigger(APrimalCharacter * Character) { return NativeCall<bool, APrimalCharacter *>(this, "ABaseBoxTrigger.IsCharacterTouchingTrigger", Character); }
	void OnTriggerBeginOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "ABaseBoxTrigger.OnTriggerBeginOverlap", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "ABaseBoxTrigger.OnTriggerEndOverlap", OtherActor, OtherComp, OtherBodyIndex); }
	void BPOnTriggerBeginOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "ABaseBoxTrigger.BPOnTriggerBeginOverlap", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void BPOnTriggerEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "ABaseBoxTrigger.BPOnTriggerEndOverlap", OtherActor, OtherComp, OtherBodyIndex); }
};

