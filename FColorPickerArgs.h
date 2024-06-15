#pragma once

#include "BaseDeclarations.h"
struct FColorPickerArgs
{
	char __padding[0x90L];
	bool& bIsModalField() { return *GetNativePointerField<bool*>(this, "FColorPickerArgs.bIsModal"); }
	bool& bUseAlphaField() { return *GetNativePointerField<bool*>(this, "FColorPickerArgs.bUseAlpha"); }
	bool& bOnlyRefreshOnMouseUpField() { return *GetNativePointerField<bool*>(this, "FColorPickerArgs.bOnlyRefreshOnMouseUp"); }
	bool& bOnlyRefreshOnOkField() { return *GetNativePointerField<bool*>(this, "FColorPickerArgs.bOnlyRefreshOnOk"); }
	TAttribute<float>& DisplayGammaField() { return *GetNativePointerField<TAttribute<float>*>(this, "FColorPickerArgs.DisplayGamma"); }
	const TArray<FColor *> * ColorArrayField() { return GetNativePointerField<const TArray<FColor *> *>(this, "FColorPickerArgs.ColorArray"); }
	const TArray<FLinearColor *> * LinearColorArrayField() { return GetNativePointerField<const TArray<FLinearColor *> *>(this, "FColorPickerArgs.LinearColorArray"); }
	const TArray<FColorChannels> * ColorChannelsArrayField() { return GetNativePointerField<const TArray<FColorChannels> *>(this, "FColorPickerArgs.ColorChannelsArray"); }
	FLinearColor& InitialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "FColorPickerArgs.InitialColorOverride"); }
};

