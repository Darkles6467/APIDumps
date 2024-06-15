#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FDeferRegisterComponents : FGCObject
{
	char __padding[0x50L];

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FDeferRegisterComponents.AddReferencedObjects", Collector); }
	void DeferComponentRegistration(AActor * Actor, USceneComponent * Component, EComponentMobility::Type OriginalMobility) { NativeCall<void, AActor *, USceneComponent *, EComponentMobility::Type>(this, "FDeferRegisterComponents.DeferComponentRegistration", Actor, Component, OriginalMobility); }
	static FDeferRegisterComponents * Get() { return NativeCall<FDeferRegisterComponents *>(nullptr, "FDeferRegisterComponents.Get"); }
	void RegisterComponents(AActor * Actor) { NativeCall<void, AActor *>(this, "FDeferRegisterComponents.RegisterComponents", Actor); }
};

