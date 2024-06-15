#pragma once

#include "BaseDeclarations.h"
struct FGraphNodeContextMenuBuilder
{
	char __padding[0x30L];
	const UEdGraph * GraphField() { return GetNativePointerField<const UEdGraph *>(this, "FGraphNodeContextMenuBuilder.Graph"); }
	const UEdGraphPin * PinField() { return GetNativePointerField<const UEdGraphPin *>(this, "FGraphNodeContextMenuBuilder.Pin"); }
	FMenuBuilder * MenuBuilderField() { return GetNativePointerField<FMenuBuilder *>(this, "FGraphNodeContextMenuBuilder.MenuBuilder"); }
	bool& bIsDebuggingField() { return *GetNativePointerField<bool*>(this, "FGraphNodeContextMenuBuilder.bIsDebugging"); }
};

