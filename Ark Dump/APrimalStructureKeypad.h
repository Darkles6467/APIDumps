#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"

struct APrimalStructureKeypad : APrimalStructureItemContainer
{
	char __padding[0x10L];
	float& DoorActivationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureKeypad.DoorActivationRange"); }
	long double& LastPinToggleTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureKeypad.LastPinToggleTime"); }

	// Functions

	bool ActivateKeypad(AShooterPlayerController * ForPC, int PinCode, bool bEnable) { return NativeCall<bool, AShooterPlayerController *, int, bool>(this, "APrimalStructureKeypad.ActivateKeypad", ForPC, PinCode, bEnable); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureKeypad.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureKeypad.ClientMultiUse", ForPC, UseIndex); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureKeypad.GetMultiUseEntries", ForPC, MultiUseEntries); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureKeypad.TryMultiUse", ForPC, UseIndex); }
};

