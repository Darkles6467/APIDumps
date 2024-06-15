#pragma once

#include "BaseDeclarations.h"
struct UI_Subtitles_eventProcessDynamicMaterialForDialogueIconDelegate_Parms
{
	char __padding[0x10L];
	FName& MaterialFNameField() { return *GetNativePointerField<FName*>(this, "UI_Subtitles_eventProcessDynamicMaterialForDialogueIconDelegate_Parms.MaterialFName"); }
};

