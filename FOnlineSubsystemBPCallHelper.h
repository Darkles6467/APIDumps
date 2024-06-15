#pragma once

#include "BaseDeclarations.h"
struct FOnlineSubsystemBPCallHelper
{
	char __padding[0x20L];
	const wchar_t * FunctionContextField() { return GetNativePointerField<const wchar_t *>(this, "FOnlineSubsystemBPCallHelper.FunctionContext"); }

	// Functions

	void QueryIDFromPlayerController(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "FOnlineSubsystemBPCallHelper.QueryIDFromPlayerController", PlayerController); }
};

