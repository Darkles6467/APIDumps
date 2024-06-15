#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventPlayLinkedCompanionReactionsByExplorerNoteIndex_Parms
{
	char __padding[0x4L];
	int& indexField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Companion_eventPlayLinkedCompanionReactionsByExplorerNoteIndex_Parms.index"); }
};

