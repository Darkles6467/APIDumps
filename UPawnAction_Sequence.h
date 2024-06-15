#pragma once

#include "BaseDeclarations.h"
#include "UPawnAction.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnAction_Sequence : UPawnAction
{
	char __padding[0x28L];
	TEnumAsByte<enum EPawnActionFailHandling::Type>& ChildFailureHandlingModeField() { return *GetNativePointerField<TEnumAsByte<enum EPawnActionFailHandling::Type>*>(this, "UPawnAction_Sequence.ChildFailureHandlingMode"); }
	unsigned int& CurrentActionIndexField() { return *GetNativePointerField<unsigned int*>(this, "UPawnAction_Sequence.CurrentActionIndex"); }

	// Functions

	void OnChildFinished(UPawnAction * Action, EPawnActionResult::Type WithResult) { NativeCall<void, UPawnAction *, EPawnActionResult::Type>(this, "UPawnAction_Sequence.OnChildFinished", Action, WithResult); }
	bool PushNextActionCopy() { return NativeCall<bool>(this, "UPawnAction_Sequence.PushNextActionCopy"); }
	bool Resume() { return NativeCall<bool>(this, "UPawnAction_Sequence.Resume"); }
	bool Start() { return NativeCall<bool>(this, "UPawnAction_Sequence.Start"); }
};

