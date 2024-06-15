#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct FLatentActionManager
{
	char __padding[0xb0L];

	// Functions

	void AddNewAction(UObject * InActionObject, int UUID, FPendingLatentAction * NewAction) { NativeCall<void, UObject *, int, FPendingLatentAction *>(this, "FLatentActionManager.AddNewAction", InActionObject, UUID, NewAction); }
	void BeginFrame() { NativeCall<void>(this, "FLatentActionManager.BeginFrame"); }
	void ProcessLatentActions(UObject * InObject, float DeltaTime) { NativeCall<void, UObject *, float>(this, "FLatentActionManager.ProcessLatentActions", InObject, DeltaTime); }
	void RemoveActionsForObject(TWeakObjectPtr<UObject> InObject) { NativeCall<void, TWeakObjectPtr<UObject>>(this, "FLatentActionManager.RemoveActionsForObject", InObject); }
	void TickLatentActionForObject(float DeltaTime, TMultiMap<int,FPendingLatentAction *,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FPendingLatentAction *,1> > * ObjectActionList, UObject * InObject) { NativeCall<void, float, TMultiMap<int,FPendingLatentAction *,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FPendingLatentAction *,1> > *, UObject *>(this, "FLatentActionManager.TickLatentActionForObject", DeltaTime, ObjectActionList, InObject); }
};

