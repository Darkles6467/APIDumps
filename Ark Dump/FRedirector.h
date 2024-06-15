#pragma once

#include "BaseDeclarations.h"
struct FRedirector
{
	char __padding[0x10L];
	FName& OldNameField() { return *GetNativePointerField<FName*>(this, "FRedirector.OldName"); }
	FName& NewNameField() { return *GetNativePointerField<FName*>(this, "FRedirector.NewName"); }

	// Functions

};

