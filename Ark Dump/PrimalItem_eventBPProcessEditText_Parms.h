#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPProcessEditText_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPProcessEditText_Parms.ForPC"); }
	FString& TextToUseField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPProcessEditText_Parms.TextToUse"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPProcessEditText_Parms.ReturnValue"); }
};

