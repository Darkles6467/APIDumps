#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FGPUProfilerEventNodeStats : FRefCountedObject
{
	char __padding[0x20L];
	unsigned int& NumDrawsField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumDraws"); }
	unsigned int& NumPrimitivesField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumPrimitives"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumVertices"); }
	unsigned int& NumTotalDrawsField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumTotalDraws"); }
	unsigned int& NumTotalPrimitivesField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumTotalPrimitives"); }
	unsigned int& NumTotalVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumTotalVertices"); }
	float& TimingResultField() { return *GetNativePointerField<float*>(this, "FGPUProfilerEventNodeStats.TimingResult"); }
	unsigned int& NumEventsField() { return *GetNativePointerField<unsigned int*>(this, "FGPUProfilerEventNodeStats.NumEvents"); }

	// Functions

};

