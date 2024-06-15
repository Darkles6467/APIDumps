#pragma once

#include "BaseDeclarations.h"
struct FParticleTileAllocator
{
	char __padding[0x40004L];
	FieldArray<unsigned int, 65536> FreeTilesField() { return {this, "FParticleTileAllocator.FreeTiles"}; }
	int& FreeTileCountField() { return *GetNativePointerField<int*>(this, "FParticleTileAllocator.FreeTileCount"); }

	// Functions

};

