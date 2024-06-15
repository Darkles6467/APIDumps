#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPAllowSeating_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructureSeating_eventBPAllowSeating_Parms.ForPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureSeating_eventBPAllowSeating_Parms.ReturnValue"); }
};

