#pragma once

#include "BaseDeclarations.h"
struct FFoliageComponentHashInfo
{
	char __padding[0x78L];
	FVector& CachedLocationField() { return *GetNativePointerField<FVector*>(this, "FFoliageComponentHashInfo.CachedLocation"); }
	FRotator& CachedRotationField() { return *GetNativePointerField<FRotator*>(this, "FFoliageComponentHashInfo.CachedRotation"); }
	FVector& CachedDrawScaleField() { return *GetNativePointerField<FVector*>(this, "FFoliageComponentHashInfo.CachedDrawScale"); }

	// Functions

};

