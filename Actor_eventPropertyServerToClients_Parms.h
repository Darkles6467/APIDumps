#pragma once

#include "BaseDeclarations.h"
struct Actor_eventPropertyServerToClients_Parms
{
	char __padding[0x20L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventPropertyServerToClients_Parms.PropertyName"); }
	TArray<unsigned char>& ReplicationDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "Actor_eventPropertyServerToClients_Parms.ReplicationData"); }
};

