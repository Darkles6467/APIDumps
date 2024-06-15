#pragma once

#include "BaseDeclarations.h"
struct FBTNodeExecutionInfo
{
	char __padding[0x20L];
	FBTNodeIndex& SearchStartField() { return *GetNativePointerField<FBTNodeIndex*>(this, "FBTNodeExecutionInfo.SearchStart"); }
	unsigned __int16& ExecuteInstanceIdxField() { return *GetNativePointerField<unsigned __int16*>(this, "FBTNodeExecutionInfo.ExecuteInstanceIdx"); }
	TEnumAsByte<enum EBTNodeResult::Type>& ContinueWithResultField() { return *GetNativePointerField<TEnumAsByte<enum EBTNodeResult::Type>*>(this, "FBTNodeExecutionInfo.ContinueWithResult"); }
};

