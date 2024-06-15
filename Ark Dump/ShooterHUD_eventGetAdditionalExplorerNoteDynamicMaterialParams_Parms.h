#pragma once

#include "BaseDeclarations.h"
struct ShooterHUD_eventGetAdditionalExplorerNoteDynamicMaterialParams_Parms
{
	char __padding[0xb8L];
	FExplorerNoteEntry& ExplorerNoteField() { return *GetNativePointerField<FExplorerNoteEntry*>(this, "ShooterHUD_eventGetAdditionalExplorerNoteDynamicMaterialParams_Parms.ExplorerNote"); }
	TArray<FNameScalarPair>& ScalarMaterialParamsField() { return *GetNativePointerField<TArray<FNameScalarPair>*>(this, "ShooterHUD_eventGetAdditionalExplorerNoteDynamicMaterialParams_Parms.ScalarMaterialParams"); }
	TArray<FNameColorPair>& ColorMaterialParamsField() { return *GetNativePointerField<TArray<FNameColorPair>*>(this, "ShooterHUD_eventGetAdditionalExplorerNoteDynamicMaterialParams_Parms.ColorMaterialParams"); }
};

