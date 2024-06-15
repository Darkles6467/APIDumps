#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorPicker : SCompoundWidget
{
	char __padding[0x1a0L];
	TAttribute<FLinearColor>& TargetColorAttributeField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SColorPicker.TargetColorAttribute"); }
	FLinearColor& CurrentColorHSVField() { return *GetNativePointerField<FLinearColor*>(this, "SColorPicker.CurrentColorHSV"); }
	FLinearColor& CurrentColorRGBField() { return *GetNativePointerField<FLinearColor*>(this, "SColorPicker.CurrentColorRGB"); }
	FLinearColor& OldColorField() { return *GetNativePointerField<FLinearColor*>(this, "SColorPicker.OldColor"); }
	FLinearColor& ColorEndField() { return *GetNativePointerField<FLinearColor*>(this, "SColorPicker.ColorEnd"); }
	FLinearColor& ColorBeginField() { return *GetNativePointerField<FLinearColor*>(this, "SColorPicker.ColorBegin"); }
	EColorPickerModes& CurrentModeField() { return *GetNativePointerField<EColorPickerModes*>(this, "SColorPicker.CurrentMode"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "SColorPicker.CurrentTime"); }
	bool& bPerfIsTooSlowToUpdateField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bPerfIsTooSlowToUpdate"); }
	TArray<FColor *>& TargetFColorsField() { return *GetNativePointerField<TArray<FColor *>*>(this, "SColorPicker.TargetFColors"); }
	TArray<FLinearColor *>& TargetLinearColorsField() { return *GetNativePointerField<TArray<FLinearColor *>*>(this, "SColorPicker.TargetLinearColors"); }
	TArray<FColorChannels>& TargetColorChannelsField() { return *GetNativePointerField<TArray<FColorChannels>*>(this, "SColorPicker.TargetColorChannels"); }
	TArray<FColor>& OldTargetFColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "SColorPicker.OldTargetFColors"); }
	TArray<FLinearColor>& OldTargetLinearColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "SColorPicker.OldTargetLinearColors"); }
	TArray<FLinearColor>& OldTargetColorChannelsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "SColorPicker.OldTargetColorChannels"); }
	TAttribute<bool>& bUseAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorPicker.bUseAlpha"); }
	bool& bOnlyRefreshOnMouseUpField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bOnlyRefreshOnMouseUp"); }
	bool& bOnlyRefreshOnOkField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bOnlyRefreshOnOk"); }
	bool& bClosedViaOkOrCancelField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bClosedViaOkOrCancel"); }
	bool& bClosedViaCancelButtonField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bClosedViaCancelButton"); }
	TWeakPtr<SWindow,0>& ParentWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SColorPicker.ParentWindowPtr"); }
	TSharedPtr<SThemeColorBlocksBar,0>& CurrentThemeBarField() { return *GetNativePointerField<TSharedPtr<SThemeColorBlocksBar,0>*>(this, "SColorPicker.CurrentThemeBar"); }
	TAttribute<float>& DisplayGammaField() { return *GetNativePointerField<TAttribute<float>*>(this, "SColorPicker.DisplayGamma"); }
	bool& bColorPickerIsInlineVersionField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bColorPickerIsInlineVersion"); }
	bool& bIsInteractiveField() { return *GetNativePointerField<bool*>(this, "SColorPicker.bIsInteractive"); }
};

