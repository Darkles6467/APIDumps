#pragma once

#include "BaseDeclarations.h"
struct FCurrentFrameCalls
{
	char __padding[0x1cL];
	unsigned int& LastMallocCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.LastMallocCalls"); }
	unsigned int& LastReallocCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.LastReallocCalls"); }
	unsigned int& LastFreeCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.LastFreeCalls"); }
	unsigned int& MallocCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.MallocCalls"); }
	unsigned int& ReallocCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.ReallocCalls"); }
	unsigned int& FreeCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.FreeCalls"); }
	unsigned int& AllocatorCallsField() { return *GetNativePointerField<unsigned int*>(this, "FCurrentFrameCalls.AllocatorCalls"); }
};

