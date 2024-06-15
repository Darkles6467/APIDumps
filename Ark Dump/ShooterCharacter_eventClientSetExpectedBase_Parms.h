#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientSetExpectedBase_Parms
{
	char __padding[0x4L];
	unsigned int& BaseIDField() { return *GetNativePointerField<unsigned int*>(this, "ShooterCharacter_eventClientSetExpectedBase_Parms.BaseID"); }
};

