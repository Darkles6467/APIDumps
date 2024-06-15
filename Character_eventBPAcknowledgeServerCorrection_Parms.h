#pragma once

#include "BaseDeclarations.h"
struct Character_eventBPAcknowledgeServerCorrection_Parms
{
	char __padding[0x38L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.TimeStamp"); }
	FVector& NewLocField() { return *GetNativePointerField<FVector*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.NewLoc"); }
	FVector& NewVelField() { return *GetNativePointerField<FVector*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.NewVel"); }
	FName& NewBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.NewBaseBoneName"); }
	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.bHasBase"); }
	bool& bBaseRelativePositionField() { return *GetNativePointerField<bool*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.bBaseRelativePosition"); }
	char& ServerMovementModeField() { return *GetNativePointerField<char*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.ServerMovementMode"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Character_eventBPAcknowledgeServerCorrection_Parms.ReturnValue"); }
};

