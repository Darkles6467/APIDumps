#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URig : UObject
{
	char __padding[0x20L];
	TArray<FTransformBase>& TransformBasesField() { return *GetNativePointerField<TArray<FTransformBase>*>(this, "URig.TransformBases"); }
	TArray<FNode>& NodesField() { return *GetNativePointerField<TArray<FNode>*>(this, "URig.Nodes"); }

	// Functions

};

