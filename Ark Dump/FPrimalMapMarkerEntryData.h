#pragma once

#include "BaseDeclarations.h"
struct FPrimalMapMarkerEntryData
{
	char __padding[0x28L];
	int& coord1Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord1"); }
	int& coord2Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord2"); }
	FString& nameField() { return *GetNativePointerField<FString*>(this, "FPrimalMapMarkerEntryData.name"); }
	bool& bOverrideMarkerTextColorField() { return *GetNativePointerField<bool*>(this, "FPrimalMapMarkerEntryData.bOverrideMarkerTextColor"); }
	FColor& OverrideMarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalMapMarkerEntryData.OverrideMarkerTextColor"); }
	float& coord1fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord1f"); }
	float& coord2fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord2f"); }

	// Functions

	FPrimalMapMarkerEntryData * operator=(const FPrimalMapMarkerEntryData * __that) { return NativeCall<FPrimalMapMarkerEntryData *, const FPrimalMapMarkerEntryData *>(this, "FPrimalMapMarkerEntryData.operator=", __that); }
};

