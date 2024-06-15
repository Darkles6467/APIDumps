#pragma once

#include "BaseDeclarations.h"
struct FTimerDataLink
{
	char __padding[0x10L];
	unsigned int& LinkIDField() { return *GetNativePointerField<unsigned int*>(this, "FTimerDataLink.LinkID"); }
	FTimerData * TimerLinkField() { return GetNativePointerField<FTimerData *>(this, "FTimerDataLink.TimerLink"); }
};

