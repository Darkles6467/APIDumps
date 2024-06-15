#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms
{
	char __padding[0x20L];
	char& AttackinfoIndexField() { return *GetNativePointerField<char*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.AttackinfoIndex"); }
	char& animationIndexField() { return *GetNativePointerField<char*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.animationIndex"); }
	float& InPlayRateField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.InPlayRate"); }
	FName& StartSectionNameField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.StartSectionName"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.bForceTickPoseAndServerUpdateMesh"); }
	bool& bForceTickPoseOnServerField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventServerToClientsPlayAttackAnimation_Parms.bForceTickPoseOnServer"); }
};

