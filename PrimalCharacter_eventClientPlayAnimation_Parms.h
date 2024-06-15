#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventClientPlayAnimation_Parms
{
	char __padding[0x18L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventClientPlayAnimation_Parms.AnimMontage"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientPlayAnimation_Parms.PlayRate"); }
	FName& StartSectionNameField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventClientPlayAnimation_Parms.StartSectionName"); }
	bool& bPlayOnOwnerField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventClientPlayAnimation_Parms.bPlayOnOwner"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventClientPlayAnimation_Parms.bForceTickPoseAndServerUpdateMesh"); }
};

