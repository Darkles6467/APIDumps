#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerDinoOrderGroup_Clear_Parms
{
	char __padding[0x8L];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_Clear_Parms.groupIndex"); }
	bool& bClearClassesField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_Clear_Parms.bClearClasses"); }
	bool& bClearCharsField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_Clear_Parms.bClearChars"); }
};

