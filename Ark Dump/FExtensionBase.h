#pragma once

#include "BaseDeclarations.h"
struct FExtensionBase
{
	char __padding[0x28L];
	FName& HookField() { return *GetNativePointerField<FName*>(this, "FExtensionBase.Hook"); }
	EExtensionHook::Position& HookPositionField() { return *GetNativePointerField<EExtensionHook::Position*>(this, "FExtensionBase.HookPosition"); }

	// Functions

};

