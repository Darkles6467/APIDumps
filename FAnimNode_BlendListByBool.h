#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_BlendListBase.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
	char __padding[0x8L];
	bool& bActiveValueField() { return *GetNativePointerField<bool*>(this, "FAnimNode_BlendListByBool.bActiveValue"); }

	// Functions

	int GetActiveChildIndex() { return NativeCall<int>(this, "FAnimNode_BlendListByBool.GetActiveChildIndex"); }
	FString * GetNodeName(FString * result, FNodeDebugData * DebugData) { return NativeCall<FString *, FString *, FNodeDebugData *>(this, "FAnimNode_BlendListByBool.GetNodeName", result, DebugData); }
};

