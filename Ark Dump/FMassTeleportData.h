#pragma once

#include "BaseDeclarations.h"
struct FMassTeleportData
{
	char __padding[0xd0L];
	FTeleportDestination& MyTeleportDestinationField() { return *GetNativePointerField<FTeleportDestination*>(this, "FMassTeleportData.MyTeleportDestination"); }
	long double& MyTeleportStartTimeField() { return *GetNativePointerField<long double*>(this, "FMassTeleportData.MyTeleportStartTime"); }
	float& MyTeleportDurationField() { return *GetNativePointerField<float*>(this, "FMassTeleportData.MyTeleportDuration"); }
	float& MyTeleportRadiusField() { return *GetNativePointerField<float*>(this, "FMassTeleportData.MyTeleportRadius"); }
	FTransform& InitiatedAtTransformField() { return *GetNativePointerField<FTransform*>(this, "FMassTeleportData.InitiatedAtTransform"); }
	TArray<FTransform>& MyTeleportingActorTransformOffsetsField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FMassTeleportData.MyTeleportingActorTransformOffsets"); }
	TArray<float>& MyTeleportingDelaysField() { return *GetNativePointerField<TArray<float>*>(this, "FMassTeleportData.MyTeleportingDelays"); }
	TArray<int>& MyTeleportationAttemptMapField() { return *GetNativePointerField<TArray<int>*>(this, "FMassTeleportData.MyTeleportationAttemptMap"); }

	// Functions

	FMassTeleportData * operator=(const FMassTeleportData * __that) { return NativeCall<FMassTeleportData *, const FMassTeleportData *>(this, "FMassTeleportData.operator=", __that); }
};

