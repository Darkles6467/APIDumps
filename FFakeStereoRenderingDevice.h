#pragma once

#include "BaseDeclarations.h"
struct IStereoRendering
{
	char __padding[0x8L];

	// Functions

	void GetOrthoProjection(int RTWidth, int RTHeight, float OrthoDistance, FMatrix * OrthoProjection) { NativeCall<void, int, int, float, FMatrix *>(this, "IStereoRendering.GetOrthoProjection", RTWidth, RTHeight, OrthoDistance, OrthoProjection); }
	bool IsStereoEnabledOnNextFrame() { return NativeCall<bool>(this, "IStereoRendering.IsStereoEnabledOnNextFrame"); }
	EChunkLocation::Type GetNumberOfBufferedFrames(unsigned int ChunkID) { return NativeCall<EChunkLocation::Type, unsigned int>(this, "IStereoRendering.GetNumberOfBufferedFrames", ChunkID); }
};

struct FFakeStereoRenderingDevice : IStereoRendering
{

	// Functions

	void CalculateStereoViewOffset(const EStereoscopicPass StereoPassType, const FRotator * ViewRotation, const float WorldToMeters, FVector * ViewLocation) { NativeCall<void, const EStereoscopicPass, const FRotator *, const float, FVector *>(this, "FFakeStereoRenderingDevice.CalculateStereoViewOffset", StereoPassType, ViewRotation, WorldToMeters, ViewLocation); }
	void GetEyeRenderParams_RenderThread(const FRenderingCompositePassContext * Context, FVector2D * EyeToSrcUVScaleValue, FVector2D * EyeToSrcUVOffsetValue) { NativeCall<void, const FRenderingCompositePassContext *, FVector2D *, FVector2D *>(this, "FFakeStereoRenderingDevice.GetEyeRenderParams_RenderThread", Context, EyeToSrcUVScaleValue, EyeToSrcUVOffsetValue); }
	FMatrix * GetStereoProjectionMatrix(FMatrix * result, const EStereoscopicPass StereoPassType, const float FOV) { return NativeCall<FMatrix *, FMatrix *, const EStereoscopicPass, const float>(this, "FFakeStereoRenderingDevice.GetStereoProjectionMatrix", result, StereoPassType, FOV); }
	void RenderTexture_RenderThread(FRHICommandListImmediate * RHICmdList, FRHITexture2D * BackBuffer, FRHITexture2D * SrcTexture) { NativeCall<void, FRHICommandListImmediate *, FRHITexture2D *, FRHITexture2D *>(this, "FFakeStereoRenderingDevice.RenderTexture_RenderThread", RHICmdList, BackBuffer, SrcTexture); }
};

