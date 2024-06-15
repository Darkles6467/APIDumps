#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOnAnimPlayedNotify_Parms
{
	char __padding[0x18L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.AnimMontage"); }
	float& InPlayRateField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.InPlayRate"); }
	FName& StartSectionNameField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.StartSectionName"); }
	bool& bReplicateField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.bReplicate"); }
	bool& bReplicateToOwnerField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.bReplicateToOwner"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.bForceTickPoseAndServerUpdateMesh"); }
	bool& bForceTickPoseOnServerField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnAnimPlayedNotify_Parms.bForceTickPoseOnServer"); }
};

