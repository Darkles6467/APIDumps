#pragma once

#include "BaseDeclarations.h"
#include "UEdGraphNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEdGraphNode_Comment : UEdGraphNode
{
	char __padding[0x18L];
	FLinearColor& CommentColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEdGraphNode_Comment.CommentColor"); }
	TEnumAsByte<enum ECommentBoxMode::Type>& MoveModeField() { return *GetNativePointerField<TEnumAsByte<enum ECommentBoxMode::Type>*>(this, "UEdGraphNode_Comment.MoveMode"); }

	// Functions

};

