#pragma once

#include "BaseDeclarations.h"
struct FHUDStatusEntry
{
	char __padding[0x58L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FHUDStatusEntry.Index"); }
	long double& LastActiveTimeField() { return *GetNativePointerField<long double*>(this, "FHUDStatusEntry.LastActiveTime"); }
	long double& StartedAtTimeField() { return *GetNativePointerField<long double*>(this, "FHUDStatusEntry.StartedAtTime"); }
	float& CurrentXPosField() { return *GetNativePointerField<float*>(this, "FHUDStatusEntry.CurrentXPos"); }
	float& CurrentYPosField() { return *GetNativePointerField<float*>(this, "FHUDStatusEntry.CurrentYPos"); }
	float& LastDrawnAlphaField() { return *GetNativePointerField<float*>(this, "FHUDStatusEntry.LastDrawnAlpha"); }
	FString& OverrideDescriptionStringField() { return *GetNativePointerField<FString*>(this, "FHUDStatusEntry.OverrideDescriptionString"); }
	FString& OverrideNameStringField() { return *GetNativePointerField<FString*>(this, "FHUDStatusEntry.OverrideNameString"); }

	// Functions

};

