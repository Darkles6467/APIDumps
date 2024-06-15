#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeSearchData
{
	char __padding[0x20L];
	UBehaviorTreeComponent * OwnerCompField() { return GetNativePointerField<UBehaviorTreeComponent *>(this, "FBehaviorTreeSearchData.OwnerComp"); }
	TArray<FBehaviorTreeSearchUpdate>& PendingUpdatesField() { return *GetNativePointerField<TArray<FBehaviorTreeSearchUpdate>*>(this, "FBehaviorTreeSearchData.PendingUpdates"); }
	FBTNodeIndex& SearchStartField() { return *GetNativePointerField<FBTNodeIndex*>(this, "FBehaviorTreeSearchData.SearchStart"); }
	int& SearchIdField() { return *GetNativePointerField<int*>(this, "FBehaviorTreeSearchData.SearchId"); }

	// Functions

	void AddUniqueUpdate(const FBehaviorTreeSearchUpdate * UpdateInfo) { NativeCall<void, const FBehaviorTreeSearchUpdate *>(this, "FBehaviorTreeSearchData.AddUniqueUpdate", UpdateInfo); }
};

