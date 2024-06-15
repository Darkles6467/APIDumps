#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UConsoleSettings : UObject
{
	char __padding[0x28L];
	int& MaxScrollbackSizeField() { return *GetNativePointerField<int*>(this, "UConsoleSettings.MaxScrollbackSize"); }
	TArray<FAutoCompleteCommand>& ManualAutoCompleteListField() { return *GetNativePointerField<TArray<FAutoCompleteCommand>*>(this, "UConsoleSettings.ManualAutoCompleteList"); }
	TArray<FString>& AutoCompleteMapPathsField() { return *GetNativePointerField<TArray<FString>*>(this, "UConsoleSettings.AutoCompleteMapPaths"); }

	// Functions

};

