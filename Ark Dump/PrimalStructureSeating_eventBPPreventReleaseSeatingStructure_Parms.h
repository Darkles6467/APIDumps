#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPPreventReleaseSeatingStructure_Parms
{
	char __padding[0x10L];
	AShooterCharacter * ForSitterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalStructureSeating_eventBPPreventReleaseSeatingStructure_Parms.ForSitter"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureSeating_eventBPPreventReleaseSeatingStructure_Parms.ReturnValue"); }
};

