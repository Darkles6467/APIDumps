#pragma once

#include "BaseDeclarations.h"
struct FPrimalDroppedItemOnPlatform
{
	char __padding[0x28L];
	FVector& ItemRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FPrimalDroppedItemOnPlatform.ItemRelativeLocation"); }
	FRotator& ItemRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "FPrimalDroppedItemOnPlatform.ItemRelativeRotation"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDroppedItemOnPlatform.BoneName"); }

	// Functions

};

