#pragma once

#include "BaseDeclarations.h"
#include "IEventLogger.h"

struct FStabilityEventLogger : IEventLogger
{
	char __padding[0x10L];
	TArray<FString>& LoggedEventsField() { return *GetNativePointerField<TArray<FString>*>(this, "FStabilityEventLogger.LoggedEvents"); }
};

