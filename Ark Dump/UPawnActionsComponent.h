#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnActionsComponent : UActorComponent
{
	char __padding[0x38L];
	TArray<FPawnActionStack>& ActionStacksField() { return *GetNativePointerField<TArray<FPawnActionStack>*>(this, "UPawnActionsComponent.ActionStacks"); }
	TArray<FPawnActionEvent>& ActionEventsField() { return *GetNativePointerField<TArray<FPawnActionEvent>*>(this, "UPawnActionsComponent.ActionEvents"); }
	unsigned int& ActionEventIndexField() { return *GetNativePointerField<unsigned int*>(this, "UPawnActionsComponent.ActionEventIndex"); }

	// Functions

	bool AbortAction(UPawnAction * ActionToAbort) { return NativeCall<bool, UPawnAction *>(this, "UPawnActionsComponent.AbortAction", ActionToAbort); }
	bool OnEvent(UPawnAction * Action, EPawnActionEventType::Type Event) { return NativeCall<bool, UPawnAction *, EPawnActionEventType::Type>(this, "UPawnActionsComponent.OnEvent", Action, Event); }
	static bool PerformAction(APawn * Pawn, UPawnAction * Action, TEnumAsByte<enum EAIRequestPriority::Type> Priority) { return NativeCall<bool, APawn *, UPawnAction *, TEnumAsByte<enum EAIRequestPriority::Type>>(nullptr, "UPawnActionsComponent.PerformAction", Pawn, Action, Priority); }
	bool PushAction(UPawnAction * NewAction, EAIRequestPriority::Type Priority, UObject * Instigator) { return NativeCall<bool, UPawnAction *, EAIRequestPriority::Type, UObject *>(this, "UPawnActionsComponent.PushAction", NewAction, Priority, Instigator); }
	void UpdateAILogicLock() { NativeCall<void>(this, "UPawnActionsComponent.UpdateAILogicLock"); }
	void UpdateCurrentAction() { NativeCall<void>(this, "UPawnActionsComponent.UpdateCurrentAction"); }
};

