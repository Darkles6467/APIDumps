#pragma once

#include "BaseDeclarations.h"
struct Pawn_eventInterceptInputEvent_Parms
{
	char __padding[0x10L];
	FString& InputNameField() { return *GetNativePointerField<FString*>(this, "Pawn_eventInterceptInputEvent_Parms.InputName"); }
};

