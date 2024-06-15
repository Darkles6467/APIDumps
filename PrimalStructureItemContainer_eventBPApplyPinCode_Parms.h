#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPApplyPinCode_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructureItemContainer_eventBPApplyPinCode_Parms.ForPC"); }
	int& appledPinCodeField() { return *GetNativePointerField<int*>(this, "PrimalStructureItemContainer_eventBPApplyPinCode_Parms.appledPinCode"); }
	bool& bIsSettingField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPApplyPinCode_Parms.bIsSetting"); }
	int& TheCustomIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructureItemContainer_eventBPApplyPinCode_Parms.TheCustomIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPApplyPinCode_Parms.ReturnValue"); }

	// Functions

};

