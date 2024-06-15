#pragma once

#include "BaseDeclarations.h"
struct FNativeFunctionRegistrar
{

	// Functions

	static void RegisterFunction(UClass * Class, const char * InName, void (__fastcall *)(UObject *this, FFrame *, void *const) void) { NativeCall<void, UClass *, const char *, void (__fastcall *)(UObject *this, FFrame *, void *const)>(nullptr, "FNativeFunctionRegistrar.RegisterFunction", Class, InName, void); }
};

