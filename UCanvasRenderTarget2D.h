#pragma once

#include "BaseDeclarations.h"
#include "UTextureRenderTarget.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UCanvasRenderTarget2D.h"

struct UTextureRenderTarget2D : UTextureRenderTarget
{
	char __padding[0x40L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.SizeY"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTextureRenderTarget2D.ClearColor"); }
	TEnumAsByte<enum TextureAddress>& AddressXField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UTextureRenderTarget2D.AddressX"); }
	TEnumAsByte<enum TextureAddress>& AddressYField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UTextureRenderTarget2D.AddressY"); }
	TEnumAsByte<enum ETextureRenderTargetFormat>& RenderTargetFormatField() { return *GetNativePointerField<TEnumAsByte<enum ETextureRenderTargetFormat>*>(this, "UTextureRenderTarget2D.RenderTargetFormat"); }
	TEnumAsByte<enum EPixelFormat>& OverrideFormatField() { return *GetNativePointerField<TEnumAsByte<enum EPixelFormat>*>(this, "UTextureRenderTarget2D.OverrideFormat"); }
	int& NumMipsField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.NumMips"); }

	// Functions

	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureRenderTarget2D.GetSurfaceHeight"); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTextureRenderTarget2D.CreateResource"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UTextureRenderTarget2D.GetDesc", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UTextureRenderTarget2D.GetResourceSize", Mode); }
	void InitAutoFormat(unsigned int InSizeX, unsigned int InSizeY, bool bUseFastNonLockPath) { NativeCall<void, unsigned int, unsigned int, bool>(this, "UTextureRenderTarget2D.InitAutoFormat", InSizeX, InSizeY, bUseFastNonLockPath); }
	void PostLoad() { NativeCall<void>(this, "UTextureRenderTarget2D.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTextureRenderTarget2D.Serialize", Ar); }
	EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTextureRenderTarget2D.GetMaterialType"); }
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D
{
	char __padding[0x10L];

	// Functions

	static UCanvasRenderTarget2D * CreateCanvasRenderTarget2D(TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int Width, int Height) { return NativeCall<UCanvasRenderTarget2D *, TSubclassOf<UCanvasRenderTarget2D>, int, int>(nullptr, "UCanvasRenderTarget2D.CreateCanvasRenderTarget2D", CanvasRenderTarget2DClass, Width, Height); }
	void GetSize(int * Width, int * Height) { NativeCall<void, int *, int *>(this, "UCanvasRenderTarget2D.GetSize", Width, Height); }
	void UpdateResourceW() { NativeCall<void>(this, "UCanvasRenderTarget2D.UpdateResourceW"); }
	void ReceiveUpdate(UCanvas * Canvas, int Width, int Height) { NativeCall<void, UCanvas *, int, int>(this, "UCanvasRenderTarget2D.ReceiveUpdate", Canvas, Width, Height); }
};

