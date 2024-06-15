#pragma once

#include "BaseDeclarations.h"
struct FSoundClassEditorData
{
	char __padding[0x8L];
	int& NodePosXField() { return *GetNativePointerField<int*>(this, "FSoundClassEditorData.NodePosX"); }
	int& NodePosYField() { return *GetNativePointerField<int*>(this, "FSoundClassEditorData.NodePosY"); }

	// Functions

};

