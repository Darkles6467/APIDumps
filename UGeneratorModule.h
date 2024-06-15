#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGeneratorModule : UObject
{
	char __padding[0x20L];
	TArray<UGeneratorModule *>& LinkedModulesField() { return *GetNativePointerField<TArray<UGeneratorModule *>*>(this, "UGeneratorModule.LinkedModules"); }

	// Functions

	void SetSourceModule(int Index, UGeneratorModule * Module) { NativeCall<void, int, UGeneratorModule *>(this, "UGeneratorModule.SetSourceModule", Index, Module); }
};

