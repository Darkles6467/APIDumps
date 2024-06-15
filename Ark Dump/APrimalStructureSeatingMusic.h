#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureSeating.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalStructureSeatingMusic : APrimalStructureSeating
{
	char __padding[0x58L];
	FName& StickMeshAttachPoint1Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint1"); }
	FName& StickMeshAttachPoint2Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint2"); }
	TArray<UAnimMontage *>& InstrumentPawnAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "APrimalStructureSeatingMusic.InstrumentPawnAnimations"); }
	float& MinimumTimeBetweenPlaysField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeatingMusic.MinimumTimeBetweenPlays"); }
	TArray<float>& LastPlayInstrumentTimeField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureSeatingMusic.LastPlayInstrumentTime"); }

	// Functions

	void Control(AShooterCharacter * ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter *, int, bool>(this, "APrimalStructureSeatingMusic.Control", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void LocalSeatingStructureAction(char ActionNumber) { NativeCall<void, char>(this, "APrimalStructureSeatingMusic.LocalSeatingStructureAction", ActionNumber); }
	void OnAltFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnAltFire"); }
	void OnPrimaryFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnPrimaryFire"); }
	void OnUseKey(int Index) { NativeCall<void, int>(this, "APrimalStructureSeatingMusic.OnUseKey", Index); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeatingMusic.PostInitializeComponents"); }
	void Release(AShooterCharacter * ShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalStructureSeatingMusic.Release", ShooterCharacter); }
	void ServerSeatingStructureAction(char ActionNumber) { NativeCall<void, char>(this, "APrimalStructureSeatingMusic.ServerSeatingStructureAction", ActionNumber); }
};

