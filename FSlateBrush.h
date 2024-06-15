#pragma once

#include "BaseDeclarations.h"
struct FSlateBrush
{
	char __padding[0x78L];
	FVector2D& ImageSizeField() { return *GetNativePointerField<FVector2D*>(this, "FSlateBrush.ImageSize"); }
	TEnumAsByte<enum ESlateBrushDrawType::Type>& DrawAsField() { return *GetNativePointerField<TEnumAsByte<enum ESlateBrushDrawType::Type>*>(this, "FSlateBrush.DrawAs"); }
	FMargin& MarginField() { return *GetNativePointerField<FMargin*>(this, "FSlateBrush.Margin"); }
	FLinearColor& Tint_DEPRECATEDField() { return *GetNativePointerField<FLinearColor*>(this, "FSlateBrush.Tint_DEPRECATED"); }
	FSlateColor& TintColorField() { return *GetNativePointerField<FSlateColor*>(this, "FSlateBrush.TintColor"); }
	TEnumAsByte<enum ESlateBrushTileType::Type>& TilingField() { return *GetNativePointerField<TEnumAsByte<enum ESlateBrushTileType::Type>*>(this, "FSlateBrush.Tiling"); }
	TEnumAsByte<enum ESlateBrushMirrorType::Type>& MirroringField() { return *GetNativePointerField<TEnumAsByte<enum ESlateBrushMirrorType::Type>*>(this, "FSlateBrush.Mirroring"); }
	TEnumAsByte<enum ESlateBrushImageType::Type>& ImageTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESlateBrushImageType::Type>*>(this, "FSlateBrush.ImageType"); }
	FName& ResourceNameField() { return *GetNativePointerField<FName*>(this, "FSlateBrush.ResourceName"); }
	bool& bIsDynamicallyLoadedField() { return *GetNativePointerField<bool*>(this, "FSlateBrush.bIsDynamicallyLoaded"); }
	bool& bHasUObject_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "FSlateBrush.bHasUObject_DEPRECATED"); }

	// Functions

	FLinearColor * GetTint(FLinearColor * result, const FWidgetStyle * InWidgetStyle) { return NativeCall<FLinearColor *, FLinearColor *, const FWidgetStyle *>(this, "FSlateBrush.GetTint", result, InWidgetStyle); }
	void SetResourceObject(UObject * InResourceObject) { NativeCall<void, UObject *>(this, "FSlateBrush.SetResourceObject", InResourceObject); }
	const FName * GetResourceName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FSlateBrush.GetResourceName", result); }
	static const FString * UTextureIdentifier(const FString * result) { return NativeCall<const FString *, const FString *>(nullptr, "FSlateBrush.UTextureIdentifier", result); }
	bool operator==(const FSlateBrush * Other) { return NativeCall<bool, const FSlateBrush *>(this, "FSlateBrush.operator==", Other); }
};

