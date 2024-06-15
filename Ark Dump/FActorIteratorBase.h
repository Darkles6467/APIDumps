#pragma once

#include "BaseDeclarations.h"
struct FActorIteratorBase
{
	char __padding[0x50L];
	UWorld * CurrentWorldField() { return GetNativePointerField<UWorld *>(this, "FActorIteratorBase.CurrentWorld"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FActorIteratorBase.Index"); }
	bool& ReachedEndField() { return *GetNativePointerField<bool*>(this, "FActorIteratorBase.ReachedEnd"); }
	int& ConsideredCountField() { return *GetNativePointerField<int*>(this, "FActorIteratorBase.ConsideredCount"); }

	// Functions

	void OnActorSpawned(AActor * InActor) { NativeCall<void, AActor *>(this, "FActorIteratorBase.OnActorSpawned", InActor); }
};

