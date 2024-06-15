#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FEnvQueryInstance.h"

struct UEnvQueryManager : UObject
{
	char __padding[0x30L];
	TArray<TSharedPtr<FEnvQueryInstance,0>>& RunningQueriesField() { return *GetNativePointerField<TArray<TSharedPtr<FEnvQueryInstance,0>>*>(this, "UEnvQueryManager.RunningQueries"); }
	TArray<FEnvQueryInstanceCache>& InstanceCacheField() { return *GetNativePointerField<TArray<FEnvQueryInstanceCache>*>(this, "UEnvQueryManager.InstanceCache"); }
	int& NextQueryIDField() { return *GetNativePointerField<int*>(this, "UEnvQueryManager.NextQueryID"); }

	// Functions

	bool AbortQuery(int RequestID) { return NativeCall<bool, int>(this, "UEnvQueryManager.AbortQuery", RequestID); }
	void CreateOptionInstance(UEnvQueryOption * OptionTemplate, const TArray<UEnvQueryTest *> * SortedTests, FEnvQueryInstance * Instance) { NativeCall<void, UEnvQueryOption *, const TArray<UEnvQueryTest *> *, FEnvQueryInstance *>(this, "UEnvQueryManager.CreateOptionInstance", OptionTemplate, SortedTests, Instance); }
	TSharedPtr<FEnvQueryInstance,0> * CreateQueryInstance(TSharedPtr<FEnvQueryInstance,0> * result, const UEnvQuery * Template, EEnvQueryRunMode::Type RunMode) { return NativeCall<TSharedPtr<FEnvQueryInstance,0> *, TSharedPtr<FEnvQueryInstance,0> *, const UEnvQuery *, EEnvQueryRunMode::Type>(this, "UEnvQueryManager.CreateQueryInstance", result, Template, RunMode); }
	void FinishDestroy() { NativeCall<void>(this, "UEnvQueryManager.FinishDestroy"); }
	bool IsTickable() { return NativeCall<bool>(this, "UEnvQueryManager.IsTickable"); }
	void OnPreLoadMap() { NativeCall<void>(this, "UEnvQueryManager.OnPreLoadMap"); }
	TSharedPtr<FEnvQueryInstance,0> * PrepareQueryInstance(TSharedPtr<FEnvQueryInstance,0> * result, const FEnvQueryRequest * Request, EEnvQueryRunMode::Type RunMode) { return NativeCall<TSharedPtr<FEnvQueryInstance,0> *, TSharedPtr<FEnvQueryInstance,0> *, const FEnvQueryRequest *, EEnvQueryRunMode::Type>(this, "UEnvQueryManager.PrepareQueryInstance", result, Request, RunMode); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "UEnvQueryManager.Tick", DeltaTime); }
};

