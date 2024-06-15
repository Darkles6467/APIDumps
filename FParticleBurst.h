#pragma once

#include "BaseDeclarations.h"
struct FParticleBurst
{
	char __padding[0xcL];
	int& CountField() { return *GetNativePointerField<int*>(this, "FParticleBurst.Count"); }
	int& CountLowField() { return *GetNativePointerField<int*>(this, "FParticleBurst.CountLow"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FParticleBurst.Time"); }

	// Functions

};

