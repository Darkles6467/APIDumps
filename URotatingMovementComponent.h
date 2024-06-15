#pragma once

#include "BaseDeclarations.h"
#include "UMovementComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URotatingMovementComponent : UMovementComponent
{
	char __padding[0x20L];
	FRotator& RotationRateField() { return *GetNativePointerField<FRotator*>(this, "URotatingMovementComponent.RotationRate"); }
	FVector& PivotTranslationField() { return *GetNativePointerField<FVector*>(this, "URotatingMovementComponent.PivotTranslation"); }

	// Functions

};

