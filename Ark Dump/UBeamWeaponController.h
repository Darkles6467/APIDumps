#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBeamWeaponController : UActorComponent
{
	char __padding[0x30L];
	TArray<FComponentReference>& BeamWeaponsField() { return *GetNativePointerField<TArray<FComponentReference>*>(this, "UBeamWeaponController.BeamWeapons"); }

	// Functions

	bool FireBeam_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.FireBeam_Implementation"); }
	bool FireBeams_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.FireBeams_Implementation"); }
	TArray<UBeamWeaponComponent *> * GetBeamWeaponComponents(TArray<UBeamWeaponComponent *> * result) { return NativeCall<TArray<UBeamWeaponComponent *> *, TArray<UBeamWeaponComponent *> *>(this, "UBeamWeaponController.GetBeamWeaponComponents", result); }
	void InitializeComponent() { NativeCall<void>(this, "UBeamWeaponController.InitializeComponent"); }
	void OnBeamStoppedFiringHandler(UBeamWeaponComponent * BeamWeaponComp) { NativeCall<void, UBeamWeaponComponent *>(this, "UBeamWeaponController.OnBeamStoppedFiringHandler", BeamWeaponComp); }
	bool StartChargingBeam_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.StartChargingBeam_Implementation"); }
	bool StartChargingBeams_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.StartChargingBeams_Implementation"); }
	void StopFiringBeams_Implementation() { NativeCall<void>(this, "UBeamWeaponController.StopFiringBeams_Implementation"); }
};

