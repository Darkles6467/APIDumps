#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnInitGame_Parms
{
	char __padding[0x38L];
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnInitGame_Parms.MapName"); }
	FString& OptionsField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnInitGame_Parms.Options"); }
	FString& ErrorMessageField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnInitGame_Parms.ErrorMessage"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnInitGame_Parms.ReturnValue"); }

	// Functions

};

