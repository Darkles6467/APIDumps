#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPrepareMapChange_Parms
{
	char __padding[0xcL];
	FName& LevelNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientPrepareMapChange_Parms.LevelName"); }
	bool& bFirstField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPrepareMapChange_Parms.bFirst"); }
	bool& bLastField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPrepareMapChange_Parms.bLast"); }
};

