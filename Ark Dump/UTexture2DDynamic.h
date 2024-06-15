#pragma once

#include "BaseDeclarations.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTexture2DDynamic : UTexture
{
	char __padding[0x18L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.SizeY"); }
	TEnumAsByte<enum EPixelFormat>& FormatField() { return *GetNativePointerField<TEnumAsByte<enum EPixelFormat>*>(this, "UTexture2DDynamic.Format"); }
	int& NumMipsField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.NumMips"); }

	// Functions

	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTexture2DDynamic.CreateResource"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2DDynamic.GetSurfaceHeight"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2DDynamic.GetSurfaceWidth"); }
};

