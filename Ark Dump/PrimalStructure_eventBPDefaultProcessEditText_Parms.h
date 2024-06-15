#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPDefaultProcessEditText_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructure_eventBPDefaultProcessEditText_Parms.ForPC"); }
	FString& TextToUseField() { return *GetNativePointerField<FString*>(this, "PrimalStructure_eventBPDefaultProcessEditText_Parms.TextToUse"); }
	bool& checkedBoxField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPDefaultProcessEditText_Parms.checkedBox"); }
};

