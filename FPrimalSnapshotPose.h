#pragma once

#include "BaseDeclarations.h"
struct FPrimalSnapshotPose
{
	char __padding[0x40L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FPrimalSnapshotPose.Name"); }
	UAnimSequence * SequenceField() { return GetNativePointerField<UAnimSequence *>(this, "FPrimalSnapshotPose.Sequence"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FPrimalSnapshotPose.Time"); }
	bool& PedestalField() { return *GetNativePointerField<bool*>(this, "FPrimalSnapshotPose.Pedestal"); }
	FString& PedestalBoneField() { return *GetNativePointerField<FString*>(this, "FPrimalSnapshotPose.PedestalBone"); }
	FVector& RootOffsetField() { return *GetNativePointerField<FVector*>(this, "FPrimalSnapshotPose.RootOffset"); }

	// Functions

	FPrimalSnapshotPose * operator=(const FPrimalSnapshotPose * __that) { return NativeCall<FPrimalSnapshotPose *, const FPrimalSnapshotPose *>(this, "FPrimalSnapshotPose.operator=", __that); }
};

