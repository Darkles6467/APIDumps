#pragma once

#include "BaseDeclarations.h"
struct FDataListEntryButtonBorderColors
{
	char __padding[0x10L];
	FColor& NormalField() { return *GetNativePointerField<FColor*>(this, "FDataListEntryButtonBorderColors.Normal"); }
	FColor& HoveredField() { return *GetNativePointerField<FColor*>(this, "FDataListEntryButtonBorderColors.Hovered"); }
	FColor& PressedField() { return *GetNativePointerField<FColor*>(this, "FDataListEntryButtonBorderColors.Pressed"); }
	FColor& DisabledField() { return *GetNativePointerField<FColor*>(this, "FDataListEntryButtonBorderColors.Disabled"); }

	// Functions

};

