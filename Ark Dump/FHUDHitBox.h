#pragma once

#include "BaseDeclarations.h"
struct FHUDHitBox
{
	char __padding[0x20L];
	FVector2D& CoordsField() { return *GetNativePointerField<FVector2D*>(this, "FHUDHitBox.Coords"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FHUDHitBox.Size"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FHUDHitBox.Name"); }
	bool& bConsumesInputField() { return *GetNativePointerField<bool*>(this, "FHUDHitBox.bConsumesInput"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FHUDHitBox.Priority"); }

	// Functions

	void Draw(FCanvas * InCanvas, const FLinearColor * InColor) { NativeCall<void, FCanvas *, const FLinearColor *>(this, "FHUDHitBox.Draw", InCanvas, InColor); }
};

