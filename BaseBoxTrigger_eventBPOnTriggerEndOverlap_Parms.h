#pragma once

#include "BaseDeclarations.h"
struct BaseBoxTrigger_eventBPOnTriggerEndOverlap_Parms
{
	char __padding[0x18L];
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "BaseBoxTrigger_eventBPOnTriggerEndOverlap_Parms.OtherBodyIndex"); }
};

