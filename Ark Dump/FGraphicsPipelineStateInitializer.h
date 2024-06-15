#pragma once

#include "BaseDeclarations.h"
struct FGraphicsPipelineStateInitializer
{
	enum OptionalState
	{
		OS_SetStencilRef = 0x1,
		OS_SetBlendFactor = 0x2,
	};

	char __padding[0x120L];
	FBoundShaderStateInput& BoundShaderStateField() { return *GetNativePointerField<FBoundShaderStateInput*>(this, "FGraphicsPipelineStateInitializer.BoundShaderState"); }
	FImmutableSamplerState& ImmutableSamplerStateField() { return *GetNativePointerField<FImmutableSamplerState*>(this, "FGraphicsPipelineStateInitializer.ImmutableSamplerState"); }
	bool& bDepthBoundsField() { return *GetNativePointerField<bool*>(this, "FGraphicsPipelineStateInitializer.bDepthBounds"); }
	EPrimitiveType& PrimitiveTypeField() { return *GetNativePointerField<EPrimitiveType*>(this, "FGraphicsPipelineStateInitializer.PrimitiveType"); }
	unsigned int& RenderTargetsEnabledField() { return *GetNativePointerField<unsigned int*>(this, "FGraphicsPipelineStateInitializer.RenderTargetsEnabled"); }
	TStaticArray<enum EPixelFormat,8,4>& RenderTargetFormatsField() { return *GetNativePointerField<TStaticArray<enum EPixelFormat,8,4>*>(this, "FGraphicsPipelineStateInitializer.RenderTargetFormats"); }
	TStaticArray<unsigned int,8,4>& RenderTargetFlagsField() { return *GetNativePointerField<TStaticArray<unsigned int,8,4>*>(this, "FGraphicsPipelineStateInitializer.RenderTargetFlags"); }
	TStaticArray<enum ERenderTargetLoadAction,8,4>& RenderTargetLoadActionsField() { return *GetNativePointerField<TStaticArray<enum ERenderTargetLoadAction,8,4>*>(this, "FGraphicsPipelineStateInitializer.RenderTargetLoadActions"); }
	TStaticArray<enum ERenderTargetStoreAction,8,4>& RenderTargetStoreActionsField() { return *GetNativePointerField<TStaticArray<enum ERenderTargetStoreAction,8,4>*>(this, "FGraphicsPipelineStateInitializer.RenderTargetStoreActions"); }
	EPixelFormat& DepthStencilTargetFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FGraphicsPipelineStateInitializer.DepthStencilTargetFormat"); }
	unsigned int& DepthStencilTargetFlagField() { return *GetNativePointerField<unsigned int*>(this, "FGraphicsPipelineStateInitializer.DepthStencilTargetFlag"); }
	ERenderTargetLoadAction& DepthTargetLoadActionField() { return *GetNativePointerField<ERenderTargetLoadAction*>(this, "FGraphicsPipelineStateInitializer.DepthTargetLoadAction"); }
	ERenderTargetStoreAction& DepthTargetStoreActionField() { return *GetNativePointerField<ERenderTargetStoreAction*>(this, "FGraphicsPipelineStateInitializer.DepthTargetStoreAction"); }
	ERenderTargetLoadAction& StencilTargetLoadActionField() { return *GetNativePointerField<ERenderTargetLoadAction*>(this, "FGraphicsPipelineStateInitializer.StencilTargetLoadAction"); }
	ERenderTargetStoreAction& StencilTargetStoreActionField() { return *GetNativePointerField<ERenderTargetStoreAction*>(this, "FGraphicsPipelineStateInitializer.StencilTargetStoreAction"); }
	FExclusiveDepthStencil& DepthStencilAccessField() { return *GetNativePointerField<FExclusiveDepthStencil*>(this, "FGraphicsPipelineStateInitializer.DepthStencilAccess"); }
	unsigned int& NumSamplesField() { return *GetNativePointerField<unsigned int*>(this, "FGraphicsPipelineStateInitializer.NumSamples"); }
	unsigned int& OptStateField() { return *GetNativePointerField<unsigned int*>(this, "FGraphicsPipelineStateInitializer.OptState"); }
	unsigned int& StencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FGraphicsPipelineStateInitializer.StencilRef"); }
	FLinearColor& BlendFactorField() { return *GetNativePointerField<FLinearColor*>(this, "FGraphicsPipelineStateInitializer.BlendFactor"); }

	// Functions

};

