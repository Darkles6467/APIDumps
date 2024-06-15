#pragma once

#include "BaseDeclarations.h"
struct FSimpleLightArray
{
	char __padding[0x30L];
	TArray<FSimpleLightEntry,TMemStackAllocator<0> >& InstanceDataField() { return *GetNativePointerField<TArray<FSimpleLightEntry,TMemStackAllocator<0> >*>(this, "FSimpleLightArray.InstanceData"); }
	TArray<FSimpleLightPerViewEntry,TMemStackAllocator<0> >& PerViewDataField() { return *GetNativePointerField<TArray<FSimpleLightPerViewEntry,TMemStackAllocator<0> >*>(this, "FSimpleLightArray.PerViewData"); }
	TArray<FSimpleLightInstacePerViewIndexData,TMemStackAllocator<0> >& InstancePerViewDataIndicesField() { return *GetNativePointerField<TArray<FSimpleLightInstacePerViewIndexData,TMemStackAllocator<0> >*>(this, "FSimpleLightArray.InstancePerViewDataIndices"); }
};

