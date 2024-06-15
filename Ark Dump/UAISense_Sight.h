#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Sight : UAISense
{
	char __padding[0x78L];
	TArray<FAISightQuery>& SightQueryQueueField() { return *GetNativePointerField<TArray<FAISightQuery>*>(this, "UAISense_Sight.SightQueryQueue"); }
	int& MaxTracesPerTickField() { return *GetNativePointerField<int*>(this, "UAISense_Sight.MaxTracesPerTick"); }
	float& HighImportanceQueryDistanceThresholdField() { return *GetNativePointerField<float*>(this, "UAISense_Sight.HighImportanceQueryDistanceThreshold"); }
	float& HighImportanceDistanceSquareField() { return *GetNativePointerField<float*>(this, "UAISense_Sight.HighImportanceDistanceSquare"); }
	float& MaxQueryImportanceField() { return *GetNativePointerField<float*>(this, "UAISense_Sight.MaxQueryImportance"); }
	float& SightLimitQueryImportanceField() { return *GetNativePointerField<float*>(this, "UAISense_Sight.SightLimitQueryImportance"); }

	// Functions

	void OnListenerRemovedImpl(const FPerceptionListener * UpdatedListener) { NativeCall<void, const FPerceptionListener *>(this, "UAISense_Sight.OnListenerRemovedImpl", UpdatedListener); }
	void OnListenerUpdateImpl(const FPerceptionListener * UpdatedListener) { NativeCall<void, const FPerceptionListener *>(this, "UAISense_Sight.OnListenerUpdateImpl", UpdatedListener); }
	void OnNewListenerImpl(const FPerceptionListener * NewListener) { NativeCall<void, const FPerceptionListener *>(this, "UAISense_Sight.OnNewListenerImpl", NewListener); }
	void PostInitProperties() { NativeCall<void>(this, "UAISense_Sight.PostInitProperties"); }
	void RegisterSource(AActor * SourceActor) { NativeCall<void, AActor *>(this, "UAISense_Sight.RegisterSource", SourceActor); }
	void RegisterTarget(AActor * TargetActor, UAISense_Sight::FQueriesOperationPostProcess PostProcess) { NativeCall<void, AActor *, UAISense_Sight::FQueriesOperationPostProcess>(this, "UAISense_Sight.RegisterTarget", TargetActor, PostProcess); }
	void RemoveAllQueriesByListener(const FPerceptionListener * Listener, UAISense_Sight::FQueriesOperationPostProcess PostProcess) { NativeCall<void, const FPerceptionListener *, UAISense_Sight::FQueriesOperationPostProcess>(this, "UAISense_Sight.RemoveAllQueriesByListener", Listener, PostProcess); }
	void RemoveAllQueriesToTarget(const FName * TargetId, UAISense_Sight::FQueriesOperationPostProcess PostProcess) { NativeCall<void, const FName *, UAISense_Sight::FQueriesOperationPostProcess>(this, "UAISense_Sight.RemoveAllQueriesToTarget", TargetId, PostProcess); }
	float Update() { return NativeCall<float>(this, "UAISense_Sight.Update"); }
};

