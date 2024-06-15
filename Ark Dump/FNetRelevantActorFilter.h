#pragma once

#include "BaseDeclarations.h"
#include "FActorFilter.h"

struct FNetRelevantActorFilter : FActorFilter
{
	char __padding[0x8L];
	FName& NetDriverNameField() { return *GetNativePointerField<FName*>(this, "FNetRelevantActorFilter.NetDriverName"); }
};

