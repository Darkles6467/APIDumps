#pragma once

#include "BaseDeclarations.h"
struct FNetViewer
{
	char __padding[0x28L];
	FVector& ViewLocationField() { return *GetNativePointerField<FVector*>(this, "FNetViewer.ViewLocation"); }
	FVector& ViewDirField() { return *GetNativePointerField<FVector*>(this, "FNetViewer.ViewDir"); }

	// Functions

};

