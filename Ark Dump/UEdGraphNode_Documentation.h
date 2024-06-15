#pragma once

#include "BaseDeclarations.h"
#include "UEdGraphNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEdGraphNode_Documentation : UEdGraphNode
{
	char __padding[0x20L];
	FString& LinkField() { return *GetNativePointerField<FString*>(this, "UEdGraphNode_Documentation.Link"); }
	FString& ExcerptField() { return *GetNativePointerField<FString*>(this, "UEdGraphNode_Documentation.Excerpt"); }

	// Functions

};

