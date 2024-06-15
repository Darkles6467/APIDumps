#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISystemBase : UObject
{
	char __padding[0x18L];
	FStringClassReference& AISystemClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UAISystemBase.AISystemClassName"); }
	FName& AISystemModuleNameField() { return *GetNativePointerField<FName*>(this, "UAISystemBase.AISystemModuleName"); }

	// Functions

	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld * NewWorld) { NativeCall<void, bool, bool, UWorld *>(this, "UAISystemBase.CleanupWorld", bSessionEnded, bCleanupResources, NewWorld); }
	void InitializeActorsForPlay(bool bTimeGotReset) { NativeCall<void, bool>(this, "UAISystemBase.InitializeActorsForPlay", bTimeGotReset); }
	void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation) { NativeCall<void, FIntVector, FIntVector>(this, "UAISystemBase.WorldOriginLocationChanged", OldOriginLocation, NewOriginLocation); }
	static FStringClassReference * GetAISystemClassName(FStringClassReference * result) { return NativeCall<FStringClassReference *, FStringClassReference *>(nullptr, "UAISystemBase.GetAISystemClassName", result); }
	static FName * GetAISystemModuleName(FName * result) { return NativeCall<FName *, FName *>(nullptr, "UAISystemBase.GetAISystemModuleName", result); }
};

struct UAISystem : UAISystemBase
{
	char __padding[0x28L];
	UBehaviorTreeManager * BehaviorTreeManagerField() { return GetNativePointerField<UBehaviorTreeManager *>(this, "UAISystem.BehaviorTreeManager"); }
	UEnvQueryManager * EnvironmentQueryManagerField() { return GetNativePointerField<UEnvQueryManager *>(this, "UAISystem.EnvironmentQueryManager"); }
	UAIPerceptionSystem * PerceptionSystemField() { return GetNativePointerField<UAIPerceptionSystem *>(this, "UAISystem.PerceptionSystem"); }
	TArray<UAIAsyncTaskBlueprintProxy *>& AllProxyObjectsField() { return *GetNativePointerField<TArray<UAIAsyncTaskBlueprintProxy *>*>(this, "UAISystem.AllProxyObjects"); }

	// Functions

	void AIIgnorePlayers() { NativeCall<void>(this, "UAISystem.AIIgnorePlayers"); }
	void AILoggingVerbose() { NativeCall<void>(this, "UAISystem.AILoggingVerbose"); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UAISystem.GetWorld"); }
};

