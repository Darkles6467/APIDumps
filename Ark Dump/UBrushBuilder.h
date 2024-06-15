#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBrushBuilder : UObject
{
	char __padding[0x58L];
	FString& BitmapFilenameField() { return *GetNativePointerField<FString*>(this, "UBrushBuilder.BitmapFilename"); }
	FString& ToolTipField() { return *GetNativePointerField<FString*>(this, "UBrushBuilder.ToolTip"); }
	TArray<FVector>& VerticesField() { return *GetNativePointerField<TArray<FVector>*>(this, "UBrushBuilder.Vertices"); }
	TArray<FBuilderPoly>& PolysField() { return *GetNativePointerField<TArray<FBuilderPoly>*>(this, "UBrushBuilder.Polys"); }
	FName& LayerField() { return *GetNativePointerField<FName*>(this, "UBrushBuilder.Layer"); }

	// Functions

};

