#pragma once

#include "BaseDeclarations.h"
#include "FGraphActionListBuilderBase.h"

struct FCategorizedGraphActionListBuilder : FGraphActionListBuilderBase
{
	char __padding[0x10L];
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FCategorizedGraphActionListBuilder.Category"); }
};

