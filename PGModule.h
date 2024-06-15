#pragma once

#include "BaseDeclarations.h"
struct PGModule
{
	char __padding[0x18L];

	// Functions

	void SetModule(int Index, PGModule * Module) { NativeCall<void, int, PGModule *>(this, "PGModule.SetModule", Index, Module); }
};

