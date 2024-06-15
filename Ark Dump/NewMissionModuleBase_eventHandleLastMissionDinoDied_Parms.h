#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleLastMissionDinoDied_Parms
{
	char __padding[0x48L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "NewMissionModuleBase_eventHandleLastMissionDinoDied_Parms.Dino"); }
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventHandleLastMissionDinoDied_Parms.KillingDamage"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleLastMissionDinoDied_Parms.ReturnValue"); }
};

