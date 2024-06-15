#pragma once

#include "BaseDeclarations.h"
struct FRepMovement
{
	char __padding[0x34L];
	FVector_NetQuantizeLow& LinearVelocityField() { return *GetNativePointerField<FVector_NetQuantizeLow*>(this, "FRepMovement.LinearVelocity"); }
	FVector_NetQuantize& AngularVelocityField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FRepMovement.AngularVelocity"); }
	FVector_NetQuantize& LocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FRepMovement.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FRepMovement.Rotation"); }

	// Functions

	void CopyTo(FRigidBodyState * RBState) { NativeCall<void, FRigidBodyState *>(this, "FRepMovement.CopyTo", RBState); }
	bool operator==(const FRepMovement * Other) { return NativeCall<bool, const FRepMovement *>(this, "FRepMovement.operator==", Other); }
	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FRepMovement.NetSerialize", Ar, Map, bOutSuccess); }
};

