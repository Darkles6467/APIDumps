#pragma once

#include "BaseDeclarations.h"
struct FGenericWindowDefinition
{
	char __padding[0x40L];
	float& XDesiredPositionOnScreenField() { return *GetNativePointerField<float*>(this, "FGenericWindowDefinition.XDesiredPositionOnScreen"); }
	float& YDesiredPositionOnScreenField() { return *GetNativePointerField<float*>(this, "FGenericWindowDefinition.YDesiredPositionOnScreen"); }
	float& WidthDesiredOnScreenField() { return *GetNativePointerField<float*>(this, "FGenericWindowDefinition.WidthDesiredOnScreen"); }
	float& HeightDesiredOnScreenField() { return *GetNativePointerField<float*>(this, "FGenericWindowDefinition.HeightDesiredOnScreen"); }
	bool& HasOSWindowBorderField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.HasOSWindowBorder"); }
	bool& SupportsTransparencyField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.SupportsTransparency"); }
	bool& AppearsInTaskbarField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.AppearsInTaskbar"); }
	bool& IsTopmostWindowField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.IsTopmostWindow"); }
	bool& AcceptsInputField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.AcceptsInput"); }
	bool& ActivateWhenFirstShownField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.ActivateWhenFirstShown"); }
	bool& SupportsMinimizeField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.SupportsMinimize"); }
	bool& SupportsMaximizeField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.SupportsMaximize"); }
	bool& IsModalWindowField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.IsModalWindow"); }
	bool& IsRegularWindowField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.IsRegularWindow"); }
	bool& HasSizingFrameField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.HasSizingFrame"); }
	bool& SizeWillChangeOftenField() { return *GetNativePointerField<bool*>(this, "FGenericWindowDefinition.SizeWillChangeOften"); }
	int& ExpectedMaxWidthField() { return *GetNativePointerField<int*>(this, "FGenericWindowDefinition.ExpectedMaxWidth"); }
	int& ExpectedMaxHeightField() { return *GetNativePointerField<int*>(this, "FGenericWindowDefinition.ExpectedMaxHeight"); }
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "FGenericWindowDefinition.Title"); }
	float& OpacityField() { return *GetNativePointerField<float*>(this, "FGenericWindowDefinition.Opacity"); }
	int& CornerRadiusField() { return *GetNativePointerField<int*>(this, "FGenericWindowDefinition.CornerRadius"); }
};

