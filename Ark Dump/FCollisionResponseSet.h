#pragma once

#include "BaseDeclarations.h"
struct FCollisionResponseSet
{
	char __padding[0x20L];
	TArray<TEnumAsByte<enum ECollisionChannel>>& ChannelsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>>*>(this, "FCollisionResponseSet.Channels"); }
	TArray<TEnumAsByte<enum ECollisionResponse>>& ResponsesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionResponse>>*>(this, "FCollisionResponseSet.Responses"); }

	// Functions

	FCollisionResponseSet * operator=(const FCollisionResponseSet * __that) { return NativeCall<FCollisionResponseSet *, const FCollisionResponseSet *>(this, "FCollisionResponseSet.operator=", __that); }
};

