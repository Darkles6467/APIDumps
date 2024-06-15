#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_ForceSuccess : UBTDecorator
{

	// Functions

	void OnNodeProcessed(FFrame * Stack, void *const Result) { NativeCall<void, FFrame *, void *const>(this, "UBTDecorator_ForceSuccess.OnNodeProcessed", Stack, Result); }
};

