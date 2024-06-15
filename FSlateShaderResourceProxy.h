#pragma once

#include "BaseDeclarations.h"
struct FSlateShaderResourceProxy
{
	char __padding[0x20L];
	FVector2D& StartUVField() { return *GetNativePointerField<FVector2D*>(this, "FSlateShaderResourceProxy.StartUV"); }
	FVector2D& SizeUVField() { return *GetNativePointerField<FVector2D*>(this, "FSlateShaderResourceProxy.SizeUV"); }
	FSlateShaderResource * ResourceField() { return GetNativePointerField<FSlateShaderResource *>(this, "FSlateShaderResourceProxy.Resource"); }
	FIntPoint& ActualSizeField() { return *GetNativePointerField<FIntPoint*>(this, "FSlateShaderResourceProxy.ActualSize"); }
};

