#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPGetMultiUseEntries_Parms
{
	char __padding[0x28L];
	TArray<FMultiUseEntry>& MultiUseEntriesField() { return *GetNativePointerField<TArray<FMultiUseEntry>*>(this, "Actor_eventBPGetMultiUseEntries_Parms.MultiUseEntries"); }
	TArray<FMultiUseEntry>& ReturnValueField() { return *GetNativePointerField<TArray<FMultiUseEntry>*>(this, "Actor_eventBPGetMultiUseEntries_Parms.ReturnValue"); }
};

