#pragma once

#include "BaseDeclarations.h"
struct UnrealChannelLayout
{
	char __padding[0x10L];
	int& NumStreamsField() { return *GetNativePointerField<int*>(this, "UnrealChannelLayout.NumStreams"); }
	int& NumCoupledStreamsField() { return *GetNativePointerField<int*>(this, "UnrealChannelLayout.NumCoupledStreams"); }
	FieldArray<char, 8> MappingField() { return {this, "UnrealChannelLayout.Mapping"}; }
};

