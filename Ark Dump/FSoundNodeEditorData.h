#pragma once

#include "BaseDeclarations.h"
struct FSoundNodeEditorData
{
	char __padding[0x8L];
	int& NodePosXField() { return *GetNativePointerField<int*>(this, "FSoundNodeEditorData.NodePosX"); }
	int& NodePosYField() { return *GetNativePointerField<int*>(this, "FSoundNodeEditorData.NodePosY"); }

	// Functions

};

