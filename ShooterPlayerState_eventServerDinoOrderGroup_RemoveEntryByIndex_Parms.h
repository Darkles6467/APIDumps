#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerDinoOrderGroup_RemoveEntryByIndex_Parms
{
	char __padding[0xcL];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_RemoveEntryByIndex_Parms.groupIndex"); }
	bool& bIsClassField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_RemoveEntryByIndex_Parms.bIsClass"); }
	int& entryIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_RemoveEntryByIndex_Parms.entryIndex"); }
};

