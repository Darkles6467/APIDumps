#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventClientRagdollUpdate_Parms
{
	char __padding[0x20L];
	TArray<FVector_NetQuantize>& BoneLocationsField() { return *GetNativePointerField<TArray<FVector_NetQuantize>*>(this, "PrimalCharacter_eventClientRagdollUpdate_Parms.BoneLocations"); }
	FRotator_NetQuantize& TargetRootRotationField() { return *GetNativePointerField<FRotator_NetQuantize*>(this, "PrimalCharacter_eventClientRagdollUpdate_Parms.TargetRootRotation"); }
};

