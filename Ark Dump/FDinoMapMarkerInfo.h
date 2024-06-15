#pragma once

#include "BaseDeclarations.h"
struct FDinoMapMarkerInfo
{
	char __padding[0x28L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "FDinoMapMarkerInfo.Dino"); }
	FVector& DinoLocationField() { return *GetNativePointerField<FVector*>(this, "FDinoMapMarkerInfo.DinoLocation"); }
	int& PreviousLatitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLatitudeNumber"); }
	int& PreviousLongitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLongitudeNumber"); }
	FColor& MarkerColorField() { return *GetNativePointerField<FColor*>(this, "FDinoMapMarkerInfo.MarkerColor"); }

	// Functions

};

