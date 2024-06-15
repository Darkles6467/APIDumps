#pragma once

#include "BaseDeclarations.h"
#include "UPrimalItem.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalItem_Radio : UPrimalItem
{
	char __padding[0x8L];

	// Functions

	float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem_Radio.GetMiscInfoFontScale"); }
	FString * GetMiscInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalItem_Radio.GetMiscInfoString", result); }
	void InitializeItem(bool bForceReinit, UWorld * OptionalInitWorld) { NativeCall<void, bool, UWorld *>(this, "UPrimalItem_Radio.InitializeItem", bForceReinit, OptionalInitWorld); }
	bool IsRadioActive() { return NativeCall<bool>(this, "UPrimalItem_Radio.IsRadioActive"); }
	void LocalUse(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController *>(this, "UPrimalItem_Radio.LocalUse", ForPC); }
	bool ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool checkedBox) { return NativeCall<bool, AShooterPlayerController *, const FString *, bool>(this, "UPrimalItem_Radio.ProcessEditText", ForPC, TextToUse, checkedBox); }
};

