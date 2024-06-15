#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalStructureMovingContainer : APrimalStructureItemContainer
{
	char __padding[0x28L];
	FVector& FinalLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureMovingContainer.FinalLocation"); }
	FVector& ItemBalloonLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureMovingContainer.ItemBalloonLocation"); }
	unsigned __int16& ItemLatitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLatitude"); }
	unsigned __int16& ItemLongitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLongitude"); }
	float& LocationNameField() { return *GetNativePointerField<float*>(this, "APrimalStructureMovingContainer.LocationName"); }
	char& bHasSetLocationField() { return *GetNativePointerField<char*>(this, "APrimalStructureMovingContainer.bHasSetLocation"); }

	// Functions

	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureMovingContainer.Tick", DeltaSeconds); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureMovingContainer.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalStructureMovingContainer.NetExecCommand", CommandName, ExecParams); }
};

