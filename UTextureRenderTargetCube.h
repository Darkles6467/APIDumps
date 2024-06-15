#pragma once

#include "BaseDeclarations.h"
#include "UTextureRenderTarget.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextureRenderTargetCube : UTextureRenderTarget
{
	char __padding[0x20L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTextureRenderTargetCube.SizeX"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTextureRenderTargetCube.ClearColor"); }
	TEnumAsByte<enum EPixelFormat>& OverrideFormatField() { return *GetNativePointerField<TEnumAsByte<enum EPixelFormat>*>(this, "UTextureRenderTargetCube.OverrideFormat"); }

	// Functions

	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureRenderTargetCube.GetSurfaceHeight"); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTextureRenderTargetCube.CreateResource"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UTextureRenderTargetCube.GetDesc", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UTextureRenderTargetCube.GetResourceSize", Mode); }
};

