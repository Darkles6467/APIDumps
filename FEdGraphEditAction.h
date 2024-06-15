#pragma once

#include "BaseDeclarations.h"
struct FEdGraphEditAction
{
	char __padding[0x18L];
	EEdGraphActionType& ActionField() { return *GetNativePointerField<EEdGraphActionType*>(this, "FEdGraphEditAction.Action"); }
	UEdGraph * GraphField() { return GetNativePointerField<UEdGraph *>(this, "FEdGraphEditAction.Graph"); }
};

