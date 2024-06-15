#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventCanBeStoredByExosuit_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructure_eventCanBeStoredByExosuit_Parms.ForPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventCanBeStoredByExosuit_Parms.ReturnValue"); }
};

