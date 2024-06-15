#pragma once

#include "BaseDeclarations.h"
struct FRepChangedHistory
{
	char __padding[0x20L];
	FPacketIdRange& OutPacketIdRangeField() { return *GetNativePointerField<FPacketIdRange*>(this, "FRepChangedHistory.OutPacketIdRange"); }
	TArray<unsigned short>& ChangedField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FRepChangedHistory.Changed"); }
	bool& ResendField() { return *GetNativePointerField<bool*>(this, "FRepChangedHistory.Resend"); }

	// Functions

};

