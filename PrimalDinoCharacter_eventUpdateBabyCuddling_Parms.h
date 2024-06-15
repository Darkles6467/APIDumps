#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventUpdateBabyCuddling_Parms
{
	char __padding[0x18L];
	long double& NewBabyNextCuddleTimeField() { return *GetNativePointerField<long double*>(this, "PrimalDinoCharacter_eventUpdateBabyCuddling_Parms.NewBabyNextCuddleTime"); }
	char& NewBabyCuddleTypeField() { return *GetNativePointerField<char*>(this, "PrimalDinoCharacter_eventUpdateBabyCuddling_Parms.NewBabyCuddleType"); }
};

