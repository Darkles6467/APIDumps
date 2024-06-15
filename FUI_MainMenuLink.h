#pragma once

#include "BaseDeclarations.h"
struct FUI_MainMenuLink
{
	char __padding[0x18L];
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "FUI_MainMenuLink.MapName"); }
	TSubclassOf<UUI_MainMenu>& ClassField() { return *GetNativePointerField<TSubclassOf<UUI_MainMenu>*>(this, "FUI_MainMenuLink.Class"); }

	// Functions

	FUI_MainMenuLink * operator=(const FUI_MainMenuLink * __that) { return NativeCall<FUI_MainMenuLink *, const FUI_MainMenuLink *>(this, "FUI_MainMenuLink.operator=", __that); }
};

