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

struct UDraggedDecoratorWidget : UCustomCanvasWidget
{
	char __padding[0x18L];
	bool& bUseTextureField() { return *GetNativePointerField<bool*>(this, "UDraggedDecoratorWidget.bUseTexture"); }
	bool& bUseMaterialField() { return *GetNativePointerField<bool*>(this, "UDraggedDecoratorWidget.bUseMaterial"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UDraggedDecoratorWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	void SetDraggedMaterial(UMaterialInterface * InDraggedMaterial) { NativeCall<void, UMaterialInterface *>(this, "UDraggedDecoratorWidget.SetDraggedMaterial", InDraggedMaterial); }
	void SetDraggedTexture(UTexture2D * InDraggedTexture) { NativeCall<void, UTexture2D *>(this, "UDraggedDecoratorWidget.SetDraggedTexture", InDraggedTexture); }
	void SetUseMaterial(bool InUseMaterial) { NativeCall<void, bool>(this, "UDraggedDecoratorWidget.SetUseMaterial", InUseMaterial); }
	void SetUseTexture(bool InUseTexture) { NativeCall<void, bool>(this, "UDraggedDecoratorWidget.SetUseTexture", InUseTexture); }
};

