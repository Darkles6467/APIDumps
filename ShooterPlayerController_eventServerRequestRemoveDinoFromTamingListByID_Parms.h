#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestRemoveDinoFromTamingListByID_Parms
{
	char __padding[0x8L];
	int& InID1Field() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestRemoveDinoFromTamingListByID_Parms.InID1"); }
	int& InID2Field() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestRemoveDinoFromTamingListByID_Parms.InID2"); }
};

