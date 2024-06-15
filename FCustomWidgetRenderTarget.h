#pragma once

#include "BaseDeclarations.h"
#include "FRenderTarget.h"
#include "FRHITexture2D.h"

struct FCustomWidgetRenderTarget : FRenderTarget
{
	char __padding[0x10L];
	FIntRect& ClippingRectField() { return *GetNativePointerField<FIntRect*>(this, "FCustomWidgetRenderTarget.ClippingRect"); }

	// Functions

	FIntPoint * GetSizeXY(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FCustomWidgetRenderTarget.GetSizeXY", result); }
	void ClearRenderTargetTexture() { NativeCall<void>(this, "FCustomWidgetRenderTarget.ClearRenderTargetTexture"); }
	void SetRenderTargetTexture(TRefCountPtr<FRHITexture2D> * InRHIRef) { NativeCall<void, TRefCountPtr<FRHITexture2D> *>(this, "FCustomWidgetRenderTarget.SetRenderTargetTexture", InRHIRef); }
};

