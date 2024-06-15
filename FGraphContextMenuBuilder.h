#pragma once

#include "BaseDeclarations.h"
#include "FGraphActionListBuilderBase.h"

struct FGraphActionMenuBuilder : FGraphActionListBuilderBase
{
	char __padding[0x8L];
	const UEdGraphPin * FromPinField() { return GetNativePointerField<const UEdGraphPin *>(this, "FGraphActionMenuBuilder.FromPin"); }
};

struct FGraphContextMenuBuilder : FGraphActionMenuBuilder
{
	char __padding[0x18L];
	const UEdGraph * CurrentGraphField() { return GetNativePointerField<const UEdGraph *>(this, "FGraphContextMenuBuilder.CurrentGraph"); }
};

