#pragma once

#include "BaseDeclarations.h"
struct FStateMachineDebugData
{
	char __padding[0xb0L];
	TWeakObjectPtr<UAnimGraphNode_StateMachineBase>& MachineInstanceNodeField() { return *GetNativePointerField<TWeakObjectPtr<UAnimGraphNode_StateMachineBase>*>(this, "FStateMachineDebugData.MachineInstanceNode"); }
	int& MachineIndexField() { return *GetNativePointerField<int*>(this, "FStateMachineDebugData.MachineIndex"); }

	// Functions

};

