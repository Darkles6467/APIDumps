#pragma once

#include "BaseDeclarations.h"
struct FGraphActionListBuilderBase
{
	char __padding[0x20L];
	UEdGraph * OwnerOfTemporariesField() { return GetNativePointerField<UEdGraph *>(this, "FGraphActionListBuilderBase.OwnerOfTemporaries"); }
};

