#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleLastMissionStructureDestroyed_Parms
{
	char __padding[0x48L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventHandleLastMissionStructureDestroyed_Parms.KillingDamage"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleLastMissionStructureDestroyed_Parms.ReturnValue"); }
};

