#pragma once

#include "BaseDeclarations.h"
#include "UPawnAction.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnAction_Repeat : UPawnAction
{
	char __padding[0x18L];
	TEnumAsByte<enum EPawnActionFailHandling::Type>& ChildFailureHandlingModeField() { return *GetNativePointerField<TEnumAsByte<enum EPawnActionFailHandling::Type>*>(this, "UPawnAction_Repeat.ChildFailureHandlingMode"); }
	int& RepeatsLeftField() { return *GetNativePointerField<int*>(this, "UPawnAction_Repeat.RepeatsLeft"); }

	// Functions

	void OnChildFinished(UPawnAction * Action, EPawnActionResult::Type WithResult) { NativeCall<void, UPawnAction *, EPawnActionResult::Type>(this, "UPawnAction_Repeat.OnChildFinished", Action, WithResult); }
	bool PushActionCopy() { return NativeCall<bool>(this, "UPawnAction_Repeat.PushActionCopy"); }
	bool Resume() { return NativeCall<bool>(this, "UPawnAction_Repeat.Resume"); }
	bool Start() { return NativeCall<bool>(this, "UPawnAction_Repeat.Start"); }
};

