#pragma once

#include "BaseDeclarations.h"
#include "IEventLogger.h"

struct FFileEventLogger : IEventLogger
{
	char __padding[0x10L];
	TArray<FString>& LoggedEventsField() { return *GetNativePointerField<TArray<FString>*>(this, "FFileEventLogger.LoggedEvents"); }
};

