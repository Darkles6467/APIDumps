#pragma once

#include "BaseDeclarations.h"
struct BaseBoxTrigger_eventBPOnTriggerBeginOverlap_Parms
{
	char __padding[0xa0L];
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "BaseBoxTrigger_eventBPOnTriggerBeginOverlap_Parms.OtherBodyIndex"); }
	bool& bFromSweepField() { return *GetNativePointerField<bool*>(this, "BaseBoxTrigger_eventBPOnTriggerBeginOverlap_Parms.bFromSweep"); }
	FHitResult& SweepResultField() { return *GetNativePointerField<FHitResult*>(this, "BaseBoxTrigger_eventBPOnTriggerBeginOverlap_Parms.SweepResult"); }
};

