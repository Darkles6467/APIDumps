#pragma once

#include "BaseDeclarations.h"
struct FPorthole
{
	char __padding[0x20L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FPorthole.Location"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FPorthole.Index"); }
	FName& DisplayNameField() { return *GetNativePointerField<FName*>(this, "FPorthole.DisplayName"); }
	UBoxComponent * CollisionCompField() { return GetNativePointerField<UBoxComponent *>(this, "FPorthole.CollisionComp"); }

	// Functions

};

