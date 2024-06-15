#pragma once

#include "BaseDeclarations.h"
struct RCONPacket
{
	char __padding[0x20L];
	int& LengthField() { return *GetNativePointerField<int*>(this, "RCONPacket.Length"); }
	int& IdField() { return *GetNativePointerField<int*>(this, "RCONPacket.Id"); }
	int& TypeField() { return *GetNativePointerField<int*>(this, "RCONPacket.Type"); }
	FString& BodyField() { return *GetNativePointerField<FString*>(this, "RCONPacket.Body"); }
};

