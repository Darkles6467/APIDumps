#pragma once

#include "BaseDeclarations.h"
struct FBlendParameter
{
	char __padding[0x20L];
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FBlendParameter.DisplayName"); }
	float& MinField() { return *GetNativePointerField<float*>(this, "FBlendParameter.Min"); }
	float& MaxField() { return *GetNativePointerField<float*>(this, "FBlendParameter.Max"); }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "FBlendParameter.Offset"); }
	int& GridNumField() { return *GetNativePointerField<int*>(this, "FBlendParameter.GridNum"); }

	// Functions

};

