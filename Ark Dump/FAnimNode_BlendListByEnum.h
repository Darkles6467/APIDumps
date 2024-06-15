#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_BlendListBase.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
	char __padding[0x18L];
	TArray<int>& EnumToPoseIndexField() { return *GetNativePointerField<TArray<int>*>(this, "FAnimNode_BlendListByEnum.EnumToPoseIndex"); }
	char& ActiveEnumValueField() { return *GetNativePointerField<char*>(this, "FAnimNode_BlendListByEnum.ActiveEnumValue"); }

	// Functions

	int GetActiveChildIndex() { return NativeCall<int>(this, "FAnimNode_BlendListByEnum.GetActiveChildIndex"); }
	FString * GetNodeName(FString * result, FNodeDebugData * DebugData) { return NativeCall<FString *, FString *, FNodeDebugData *>(this, "FAnimNode_BlendListByEnum.GetNodeName", result, DebugData); }
};

