#pragma once

#include "BaseDeclarations.h"
struct ISlateViewport
{
	char __padding[0x8L];

	// Functions

	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "ISlateViewport.OnMouseWheel", result, MyGeometry, TouchEvent); }
};

struct FMovieViewport : ISlateViewport
{
	char __padding[0x20L];

	// Functions

	FIntPoint * GetSize(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FMovieViewport.GetSize", result); }
	FSlateShaderResource * GetViewportRenderTargetTexture() { return NativeCall<FSlateShaderResource *>(this, "FMovieViewport.GetViewportRenderTargetTexture"); }
	void SetTexture(TWeakPtr<FSlateTexture2DRHIRef,1> InTexture) { NativeCall<void, TWeakPtr<FSlateTexture2DRHIRef,1>>(this, "FMovieViewport.SetTexture", InTexture); }
};

