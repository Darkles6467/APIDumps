#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddItemToArk_Parms
{
	char __padding[0x1c0L];
	FItemNetInfo& itemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ShooterPlayerController_eventClientAddItemToArk_Parms.itemInfo"); }
	bool& bFromLoadField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientAddItemToArk_Parms.bFromLoad"); }
};

