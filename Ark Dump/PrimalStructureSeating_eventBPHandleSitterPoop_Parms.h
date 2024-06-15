#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPHandleSitterPoop_Parms
{
	char __padding[0x10L];
	AShooterCharacter * ForSitterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalStructureSeating_eventBPHandleSitterPoop_Parms.ForSitter"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureSeating_eventBPHandleSitterPoop_Parms.ReturnValue"); }

	// Functions

};

