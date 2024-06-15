#pragma once

#include "BaseDeclarations.h"
struct FBufferedLine
{
	char __padding[0x20L];
	const FString& DataField() { return *GetNativePointerField<const FString*>(this, "FBufferedLine.Data"); }
	const ELogVerbosity::Type& VerbosityField() { return *GetNativePointerField<const ELogVerbosity::Type*>(this, "FBufferedLine.Verbosity"); }
	const FName& CategoryField() { return *GetNativePointerField<const FName*>(this, "FBufferedLine.Category"); }

	// Functions

};

