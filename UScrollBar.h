#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScrollBar : UPanelWidget
{
	char __padding[0x288L];
	FScrollBarStyle& WidgetStyleField() { return *GetNativePointerField<FScrollBarStyle*>(this, "UScrollBar.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UScrollBar.Style_DEPRECATED"); }
	bool& bAlwaysShowScrollbarField() { return *GetNativePointerField<bool*>(this, "UScrollBar.bAlwaysShowScrollbar"); }
	TEnumAsByte<enum EOrientation>& OrientationField() { return *GetNativePointerField<TEnumAsByte<enum EOrientation>*>(this, "UScrollBar.Orientation"); }
	FVector2D& ThicknessField() { return *GetNativePointerField<FVector2D*>(this, "UScrollBar.Thickness"); }
	TSharedPtr<SScrollBar,0>& MyScrollBarField() { return *GetNativePointerField<TSharedPtr<SScrollBar,0>*>(this, "UScrollBar.MyScrollBar"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "UScrollBar.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UScrollBar.ReleaseSlateResources", bReleaseChildren); }
	void SetState(float InOffsetFraction, float InThumbSizeFraction) { NativeCall<void, float, float>(this, "UScrollBar.SetState", InOffsetFraction, InThumbSizeFraction); }
};

