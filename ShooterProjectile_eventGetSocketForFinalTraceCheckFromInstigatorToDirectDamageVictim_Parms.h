#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventGetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Parms
{
	char __padding[0x8L];
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "ShooterProjectile_eventGetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Parms.ReturnValue"); }
};

