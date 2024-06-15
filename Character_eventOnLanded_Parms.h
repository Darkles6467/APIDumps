#pragma once

#include "BaseDeclarations.h"
struct Character_eventOnLanded_Parms
{
	char __padding[0x88L];
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "Character_eventOnLanded_Parms.Hit"); }
};

