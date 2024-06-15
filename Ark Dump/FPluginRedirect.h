#pragma once

#include "BaseDeclarations.h"
struct FPluginRedirect
{
	char __padding[0x20L];
	FString& OldPluginNameField() { return *GetNativePointerField<FString*>(this, "FPluginRedirect.OldPluginName"); }
	FString& NewPluginNameField() { return *GetNativePointerField<FString*>(this, "FPluginRedirect.NewPluginName"); }

	// Functions

};

