#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMargin.h"

struct UBorder : UContentWidget
{
	char __padding[0x140L];
	FLinearColor& ContentColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UBorder.ContentColorAndOpacity"); }
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UBorder.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UBorder.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UBorder.VerticalAlignment"); }
	FLinearColor& BrushColorField() { return *GetNativePointerField<FLinearColor*>(this, "UBorder.BrushColor"); }
	bool& bShowEffectWhenDisabledField() { return *GetNativePointerField<bool*>(this, "UBorder.bShowEffectWhenDisabled"); }
	USlateBrushAsset * Brush_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UBorder.Brush_DEPRECATED"); }

	// Functions

	FReply * HandleMouseButtonDown(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UBorder.HandleMouseButtonDown", result, Geometry, MouseEvent); }
	FReply * HandleMouseButtonUp(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UBorder.HandleMouseButtonUp", result, Geometry, MouseEvent); }
	FReply * HandleMouseDoubleClick(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UBorder.HandleMouseDoubleClick", result, Geometry, MouseEvent); }
	FReply * HandleMouseMove(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UBorder.HandleMouseMove", result, Geometry, MouseEvent); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UBorder.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UBorder.OnSlotRemoved", Slot); }
	void PostLoad() { NativeCall<void>(this, "UBorder.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UBorder.ReleaseSlateResources", bReleaseChildren); }
	void SetBrushColor(FLinearColor Color) { NativeCall<void, FLinearColor>(this, "UBorder.SetBrushColor", Color); }
	void SetBrushFromAsset(USlateBrushAsset * Asset) { NativeCall<void, USlateBrushAsset *>(this, "UBorder.SetBrushFromAsset", Asset); }
	void SetBrushFromMaterial(UMaterialInterface * Material) { NativeCall<void, UMaterialInterface *>(this, "UBorder.SetBrushFromMaterial", Material); }
	void SetBrushFromTexture(UTexture2D * Texture) { NativeCall<void, UTexture2D *>(this, "UBorder.SetBrushFromTexture", Texture); }
	void SetContentColorAndOpacity(FLinearColor Color) { NativeCall<void, FLinearColor>(this, "UBorder.SetContentColorAndOpacity", Color); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UBorder.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UBorder.SetPadding", InPadding); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UBorder.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UBorder.SynchronizeProperties"); }
};

struct UInventoryPanelContainerWidget : UBorder
{

	// Functions

};

