#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalDinoEntry : UObject
{
	char __padding[0x58L];
	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoEntry.DinoNameTag"); }
	FString& DinoDescriptiveNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoEntry.DinoDescriptiveName"); }
	bool& bRequiresKillField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoEntry.bRequiresKill"); }

	// Functions

	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalDinoEntry.GetEntryString", result); }
};

