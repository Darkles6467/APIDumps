#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UImage : UWidget
{
	char __padding[0xd8L];
	USlateBrushAsset * Image_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UImage.Image_DEPRECATED"); }
	FLinearColor& ColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UImage.ColorAndOpacity"); }
	bool& EnableDefaultDisabledEffectField() { return *GetNativePointerField<bool*>(this, "UImage.EnableDefaultDisabledEffect"); }

	// Functions

	FReply * HandleMouseButtonDown(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UImage.HandleMouseButtonDown", result, Geometry, MouseEvent); }
	void PostLoad() { NativeCall<void>(this, "UImage.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UImage.ReleaseSlateResources", bReleaseChildren); }
	void SetBrushFromAsset(USlateBrushAsset * Asset) { NativeCall<void, USlateBrushAsset *>(this, "UImage.SetBrushFromAsset", Asset); }
	void SetBrushFromMaterial(UTexture2D * Texture) { NativeCall<void, UTexture2D *>(this, "UImage.SetBrushFromMaterial", Texture); }
	void SetColorAndOpacity(FLinearColor InColorAndOpacity) { NativeCall<void, FLinearColor>(this, "UImage.SetColorAndOpacity", InColorAndOpacity); }
	void SetOpacity(float InOpacity) { NativeCall<void, float>(this, "UImage.SetOpacity", InOpacity); }
	void SynchronizeProperties() { NativeCall<void>(this, "UImage.SynchronizeProperties"); }
};

