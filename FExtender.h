#pragma once

#include "BaseDeclarations.h"
struct FExtender
{
	char __padding[0x10L];

	// Functions

	void Apply(FName ExtensionHook, EExtensionHook::Position HookPosition, FMenuBuilder * MenuBuilder) { NativeCall<void, FName, EExtensionHook::Position, FMenuBuilder *>(this, "FExtender.Apply", ExtensionHook, HookPosition, MenuBuilder); }
};

