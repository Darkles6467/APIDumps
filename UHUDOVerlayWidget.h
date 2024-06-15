#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDOVerlayWidget : UCustomCanvasWidget
{
	char __padding[0x50L];
	float& NotificationsYOffsetField() { return *GetNativePointerField<float*>(this, "UHUDOVerlayWidget.NotificationsYOffset"); }
	bool& bIsUnderlayField() { return *GetNativePointerField<bool*>(this, "UHUDOVerlayWidget.bIsUnderlay"); }
	FScaleRotationTranslationMatrix& FLastUsedTransformField() { return *GetNativePointerField<FScaleRotationTranslationMatrix*>(this, "UHUDOVerlayWidget.FLastUsedTransform"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UHUDOVerlayWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	void UsedScreenProjectionTransform(FScaleRotationTranslationMatrix * matrix) { NativeCall<void, FScaleRotationTranslationMatrix *>(this, "UHUDOVerlayWidget.UsedScreenProjectionTransform", matrix); }
};

