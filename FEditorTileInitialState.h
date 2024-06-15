#pragma once

#include "BaseDeclarations.h"
struct FEditorTileInitialState
{
	char __padding[0x18L];
	FString& LevelNameField() { return *GetNativePointerField<FString*>(this, "FEditorTileInitialState.LevelName"); }
	bool& bWasInitiallyLoadedField() { return *GetNativePointerField<bool*>(this, "FEditorTileInitialState.bWasInitiallyLoaded"); }
	bool& bWasInitiallyVisibleField() { return *GetNativePointerField<bool*>(this, "FEditorTileInitialState.bWasInitiallyVisible"); }

	// Functions

};

