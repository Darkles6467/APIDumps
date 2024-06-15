#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEdGraph : UObject
{
	char __padding[0x40L];
	TSubclassOf<UEdGraphSchema>& SchemaField() { return *GetNativePointerField<TSubclassOf<UEdGraphSchema>*>(this, "UEdGraph.Schema"); }

	// Functions

};

