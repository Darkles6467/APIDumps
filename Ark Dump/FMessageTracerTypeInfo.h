#pragma once

#include "BaseDeclarations.h"
struct FMessageTracerTypeInfo
{
	char __padding[0x18L];
	TArray<TSharedPtr<FMessageTracerMessageInfo,0>>& MessagesField() { return *GetNativePointerField<TArray<TSharedPtr<FMessageTracerMessageInfo,0>>*>(this, "FMessageTracerTypeInfo.Messages"); }
	FName& TypeNameField() { return *GetNativePointerField<FName*>(this, "FMessageTracerTypeInfo.TypeName"); }
};

