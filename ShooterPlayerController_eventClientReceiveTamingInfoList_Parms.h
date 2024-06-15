#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveTamingInfoList_Parms
{
	char __padding[0x10L];
	TArray<FTamingDinoInfo>& InfoListField() { return *GetNativePointerField<TArray<FTamingDinoInfo>*>(this, "ShooterPlayerController_eventClientReceiveTamingInfoList_Parms.InfoList"); }
};

