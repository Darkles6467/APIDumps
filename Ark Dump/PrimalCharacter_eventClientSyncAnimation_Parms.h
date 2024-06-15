#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventClientSyncAnimation_Parms
{
	char __padding[0x20L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.AnimMontage"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.PlayRate"); }
	float& ServerCurrentMontageTimeField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.ServerCurrentMontageTime"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.bForceTickPoseAndServerUpdateMesh"); }
	float& BlendInTimeField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.BlendInTime"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientSyncAnimation_Parms.BlendOutTime"); }
};

