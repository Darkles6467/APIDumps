#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryContext.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryContext_BlueprintBase : UEnvQueryContext
{
	char __padding[0x8L];

	// Functions

	void ProvideContext(FEnvQueryInstance * QueryInstance, FEnvQueryContextData * ContextData) { NativeCall<void, FEnvQueryInstance *, FEnvQueryContextData *>(this, "UEnvQueryContext_BlueprintBase.ProvideContext", QueryInstance, ContextData); }
	void ProvideActorsSet(AActor * QuerierActor, TArray<AActor *> * ResultingActorsSet) { NativeCall<void, AActor *, TArray<AActor *> *>(this, "UEnvQueryContext_BlueprintBase.ProvideActorsSet", QuerierActor, ResultingActorsSet); }
	void ProvideLocationsSet(AActor * QuerierActor, TArray<FVector> * ResultingLocationSet) { NativeCall<void, AActor *, TArray<FVector> *>(this, "UEnvQueryContext_BlueprintBase.ProvideLocationsSet", QuerierActor, ResultingLocationSet); }
	void ProvideSingleActor(AActor * QuerierActor, AActor ** ResultingActor) { NativeCall<void, AActor *, AActor **>(this, "UEnvQueryContext_BlueprintBase.ProvideSingleActor", QuerierActor, ResultingActor); }
	void ProvideSingleLocation(AActor * QuerierActor, FVector * ResultingLocation) { NativeCall<void, AActor *, FVector *>(this, "UEnvQueryContext_BlueprintBase.ProvideSingleLocation", QuerierActor, ResultingLocation); }
};

