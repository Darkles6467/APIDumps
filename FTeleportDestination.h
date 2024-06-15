#pragma once

#include "BaseDeclarations.h"
struct FTeleportDestination
{
	char __padding[0x28L];
	FString& DestinationTitleField() { return *GetNativePointerField<FString*>(this, "FTeleportDestination.DestinationTitle"); }
	FVector& DestinationLocationField() { return *GetNativePointerField<FVector*>(this, "FTeleportDestination.DestinationLocation"); }
	FRotator& DestinationRotationField() { return *GetNativePointerField<FRotator*>(this, "FTeleportDestination.DestinationRotation"); }

	// Functions

	FTeleportDestination * operator=(const FTeleportDestination * __that) { return NativeCall<FTeleportDestination *, const FTeleportDestination *>(this, "FTeleportDestination.operator=", __that); }
};

