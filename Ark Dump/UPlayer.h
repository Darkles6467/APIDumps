#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UPlayer : UObject
{
	char __padding[0x28L];
	int& CurrentNetSpeedField() { return *GetNativePointerField<int*>(this, "UPlayer.CurrentNetSpeed"); }
	int& ConfiguredInternetSpeedField() { return *GetNativePointerField<int*>(this, "UPlayer.ConfiguredInternetSpeed"); }
	int& ConfiguredLanSpeedField() { return *GetNativePointerField<int*>(this, "UPlayer.ConfiguredLanSpeed"); }
	unsigned __int64& TransferringPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UPlayer.TransferringPlayerDataId"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UPlayer.Exec", InWorld, Cmd, Ar); }
	void SwitchController(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "UPlayer.SwitchController", PC); }
};

