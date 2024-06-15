#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FColor.h"

struct UTextRenderComponent : UPrimitiveComponent
{
	char __padding[0x40L];
	FieldArray<_BYTE, 8> TextField() { return {this, "UTextRenderComponent.Text"}; }
	UFont * FontField() { return GetNativePointerField<UFont *>(this, "UTextRenderComponent.Font"); }
	TEnumAsByte<enum EHorizTextAligment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizTextAligment>*>(this, "UTextRenderComponent.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalTextAligment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalTextAligment>*>(this, "UTextRenderComponent.VerticalAlignment"); }
	FColor& TextRenderColorField() { return *GetNativePointerField<FColor*>(this, "UTextRenderComponent.TextRenderColor"); }
	float& XScaleField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.XScale"); }
	float& YScaleField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.YScale"); }
	float& WorldSizeField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.WorldSize"); }
	float& InvDefaultSizeField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.InvDefaultSize"); }
	float& HorizSpacingAdjustField() { return *GetNativePointerField<float*>(this, "UTextRenderComponent.HorizSpacingAdjust"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UTextRenderComponent.CalcBounds", result, LocalToWorld); }
	FMatrix * GetRenderMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "UTextRenderComponent.GetRenderMatrix", result); }
	FVector * GetTextLocalSize(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UTextRenderComponent.GetTextLocalSize", result); }
	FVector * GetTextWorldSize(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UTextRenderComponent.GetTextWorldSize", result); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UTextRenderComponent.GetUsedMaterials", OutMaterials); }
	void PostLoad() { NativeCall<void>(this, "UTextRenderComponent.PostLoad"); }
	void SetFont(UFont * Value) { NativeCall<void, UFont *>(this, "UTextRenderComponent.SetFont", Value); }
	void SetHorizSpacingAdjust(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetHorizSpacingAdjust", Value); }
	void SetHorizontalAlignment(EHorizTextAligment Value) { NativeCall<void, EHorizTextAligment>(this, "UTextRenderComponent.SetHorizontalAlignment", Value); }
	void SetMaterial(int ElementIndex, UMaterialInterface * InMaterial) { NativeCall<void, int, UMaterialInterface *>(this, "UTextRenderComponent.SetMaterial", ElementIndex, InMaterial); }
	void SetText(const FString * Value) { NativeCall<void, const FString *>(this, "UTextRenderComponent.SetText", Value); }
	void SetTextMaterial(UMaterialInterface * Value) { NativeCall<void, UMaterialInterface *>(this, "UTextRenderComponent.SetTextMaterial", Value); }
	void SetTextRenderColor(FColor Value) { NativeCall<void, FColor>(this, "UTextRenderComponent.SetTextRenderColor", Value); }
	void SetVerticalAlignment(EVerticalTextAligment Value) { NativeCall<void, EVerticalTextAligment>(this, "UTextRenderComponent.SetVerticalAlignment", Value); }
	void SetWorldSize(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetWorldSize", Value); }
	void SetXScale(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetXScale", Value); }
	void SetYScale(float Value) { NativeCall<void, float>(this, "UTextRenderComponent.SetYScale", Value); }
};

