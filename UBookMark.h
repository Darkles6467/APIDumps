#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBookMark : UObject
{
	char __padding[0x28L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "UBookMark.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "UBookMark.Rotation"); }
	TArray<FString>& HiddenLevelsField() { return *GetNativePointerField<TArray<FString>*>(this, "UBookMark.HiddenLevels"); }

	// Functions

};

