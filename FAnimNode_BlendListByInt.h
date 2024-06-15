#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_BlendListBase.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
	char __padding[0x8L];
	int& ActiveChildIndexField() { return *GetNativePointerField<int*>(this, "FAnimNode_BlendListByInt.ActiveChildIndex"); }

	// Functions

	int GetActiveChildIndex() { return NativeCall<int>(this, "FAnimNode_BlendListByInt.GetActiveChildIndex"); }
	FString * GetNodeName(FString * result, FNodeDebugData * DebugData) { return NativeCall<FString *, FString *, FNodeDebugData *>(this, "FAnimNode_BlendListByInt.GetNodeName", result, DebugData); }
};

