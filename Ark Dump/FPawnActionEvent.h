#pragma once

#include "BaseDeclarations.h"
struct FPawnActionEvent
{
	char __padding[0x18L];
	EPawnActionEventType::Type& EventTypeField() { return *GetNativePointerField<EPawnActionEventType::Type*>(this, "FPawnActionEvent.EventType"); }
	EAIRequestPriority::Type& PriorityField() { return *GetNativePointerField<EAIRequestPriority::Type*>(this, "FPawnActionEvent.Priority"); }
	unsigned int& IndexField() { return *GetNativePointerField<unsigned int*>(this, "FPawnActionEvent.Index"); }

	// Functions

};

