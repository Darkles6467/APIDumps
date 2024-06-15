#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct ADestructibleActor : AActor
{
	char __padding[0x20L];
	TSubobjectPtr<UDestructibleComponent>& DestructibleComponentField() { return *GetNativePointerField<TSubobjectPtr<UDestructibleComponent>*>(this, "ADestructibleActor.DestructibleComponent"); }

	// Functions

	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADestructibleActor.Tick", DeltaSeconds); }
};

