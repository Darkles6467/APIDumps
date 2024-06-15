#pragma once

#include "BaseDeclarations.h"
struct FActiveEventMainMenuOverride
{
	char __padding[0x20L];
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventMainMenuOverride.ActiveEvent"); }
	FString& MusicFilenameField() { return *GetNativePointerField<FString*>(this, "FActiveEventMainMenuOverride.MusicFilename"); }

	// Functions

	FActiveEventMainMenuOverride * operator=(const FActiveEventMainMenuOverride * __that) { return NativeCall<FActiveEventMainMenuOverride *, const FActiveEventMainMenuOverride *>(this, "FActiveEventMainMenuOverride.operator=", __that); }
};

