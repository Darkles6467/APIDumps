#pragma once

#include "BaseDeclarations.h"
#include "UBTCompositeNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTComposite_Selector : UBTCompositeNode
{

	// Functions

	int GetNextChildHandler(FBehaviorTreeSearchData * SearchData, int PrevChild, EBTNodeResult::Type LastResult) { return NativeCall<int, FBehaviorTreeSearchData *, int, EBTNodeResult::Type>(this, "UBTComposite_Selector.GetNextChildHandler", SearchData, PrevChild, LastResult); }
};

