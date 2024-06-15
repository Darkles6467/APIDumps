#pragma once

#include "BaseDeclarations.h"
struct LevelScriptActor_eventWorldOriginLocationChanged_Parms
{
	char __padding[0x18L];
	FIntVector& OldOriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "LevelScriptActor_eventWorldOriginLocationChanged_Parms.OldOriginLocation"); }
	FIntVector& NewOriginLocationField() { return *GetNativePointerField<FIntVector*>(this, "LevelScriptActor_eventWorldOriginLocationChanged_Parms.NewOriginLocation"); }
};

