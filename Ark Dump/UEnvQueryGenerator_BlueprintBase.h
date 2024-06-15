#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
	char __padding[0x50L];
	FEnvFloatParam& RadiusField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_BlueprintBase.Radius"); }
	FText& GeneratorsActionDescriptionField() { return *GetNativePointerField<FText*>(this, "UEnvQueryGenerator_BlueprintBase.GeneratorsActionDescription"); }
	TSubclassOf<UEnvQueryItemType>& GeneratedItemTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "UEnvQueryGenerator_BlueprintBase.GeneratedItemType"); }
	FEnvQueryInstance * CachedQueryInstanceField() { return GetNativePointerField<FEnvQueryInstance *>(this, "UEnvQueryGenerator_BlueprintBase.CachedQueryInstance"); }

	// Functions

	void AddGeneratedActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UEnvQueryGenerator_BlueprintBase.AddGeneratedActor", Actor); }
	void AddGeneratedVector(FVector Vector) { NativeCall<void, FVector>(this, "UEnvQueryGenerator_BlueprintBase.AddGeneratedVector", Vector); }
	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_BlueprintBase.GenerateItems", QueryInstance); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_BlueprintBase.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_BlueprintBase.GetDescriptionTitle", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UEnvQueryGenerator_BlueprintBase.GetWorld"); }
	void PostInitProperties() { NativeCall<void>(this, "UEnvQueryGenerator_BlueprintBase.PostInitProperties"); }
	void DoItemGeneration(const TArray<FVector> * ContextLocations) { NativeCall<void, const TArray<FVector> *>(this, "UEnvQueryGenerator_BlueprintBase.DoItemGeneration", ContextLocations); }
};

