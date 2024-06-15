#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryTest.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryTest_Trace : UEnvQueryTest
{
	char __padding[0x58L];
	FEnvTraceData& TraceDataField() { return *GetNativePointerField<FEnvTraceData*>(this, "UEnvQueryTest_Trace.TraceData"); }
	FEnvBoolParam& TraceToItemField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryTest_Trace.TraceToItem"); }
	FEnvFloatParam& ItemOffsetZField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest_Trace.ItemOffsetZ"); }
	FEnvFloatParam& ContextOffsetZField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest_Trace.ContextOffsetZ"); }

	// Functions

	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryTest_Trace.GetDescriptionDetails", result); }
	FString * GetDescriptionTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UEnvQueryTest_Trace.GetDescriptionTitle", result); }
	bool RunBoxTraceFrom(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunBoxTraceFrom", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunBoxTraceTo(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunBoxTraceTo", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunCapsuleTraceFrom(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunCapsuleTraceFrom", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunCapsuleTraceTo(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunCapsuleTraceTo", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunLineTraceFrom(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunLineTraceFrom", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunLineTraceTo(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunLineTraceTo", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunSphereTraceFrom(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunSphereTraceFrom", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	bool RunSphereTraceTo(const FVector * ItemPos, const FVector * ContextPos, AActor * ItemActor, UWorld * World, ECollisionChannel Channel, const FCollisionQueryParams * Params, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, AActor *, UWorld *, ECollisionChannel, const FCollisionQueryParams *, const FVector *>(this, "UEnvQueryTest_Trace.RunSphereTraceTo", ItemPos, ContextPos, ItemActor, World, Channel, Params, Extent); }
	void RunTest(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryTest_Trace.RunTest", QueryInstance); }
};

