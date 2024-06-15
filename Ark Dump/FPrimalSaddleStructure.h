#pragma once

#include "BaseDeclarations.h"
struct FPrimalSaddleStructure
{
	char __padding[0x28L];
	FVector& DinoRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FPrimalSaddleStructure.DinoRelativeLocation"); }
	FRotator& DinoRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "FPrimalSaddleStructure.DinoRelativeRotation"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FPrimalSaddleStructure.BoneName"); }

	// Functions

};

