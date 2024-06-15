#pragma once

#include "BaseDeclarations.h"
struct FBasedMovementInfo
{
	char __padding[0x30L];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBasedMovementInfo.BoneName"); }
	FVector_NetQuantize100& LocationField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FBasedMovementInfo.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FBasedMovementInfo.Rotation"); }
	bool& bServerHasBaseComponentField() { return *GetNativePointerField<bool*>(this, "FBasedMovementInfo.bServerHasBaseComponent"); }
	bool& bRelativeRotationField() { return *GetNativePointerField<bool*>(this, "FBasedMovementInfo.bRelativeRotation"); }
	bool& bServerHasVelocityField() { return *GetNativePointerField<bool*>(this, "FBasedMovementInfo.bServerHasVelocity"); }

	// Functions

};

