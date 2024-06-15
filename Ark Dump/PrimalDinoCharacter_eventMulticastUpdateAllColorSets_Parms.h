#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms
{
	char __padding[0x18L];
	int& Color0Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color0"); }
	int& Color1Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color1"); }
	int& Color2Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color2"); }
	int& Color3Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color3"); }
	int& Color4Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color4"); }
	int& Color5Field() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventMulticastUpdateAllColorSets_Parms.Color5"); }
};

