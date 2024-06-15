#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionDinoDamaged_Parms
{
	char __padding[0x48L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "NewMissionModuleBase_eventHandleMissionDinoDamaged_Parms.Dino"); }
	float& DamageField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventHandleMissionDinoDamaged_Parms.Damage"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionDinoDamaged_Parms.ReturnValue"); }

	// Functions

};

