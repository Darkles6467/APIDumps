#pragma once

#include "BaseDeclarations.h"
struct FDepthStencilStateInitializerRHI
{
	char __padding[0xeL];
	bool& bEnableDepthWriteField() { return *GetNativePointerField<bool*>(this, "FDepthStencilStateInitializerRHI.bEnableDepthWrite"); }
	TEnumAsByte<enum ECompareFunction>& DepthTestField() { return *GetNativePointerField<TEnumAsByte<enum ECompareFunction>*>(this, "FDepthStencilStateInitializerRHI.DepthTest"); }
	bool& bEnableFrontFaceStencilField() { return *GetNativePointerField<bool*>(this, "FDepthStencilStateInitializerRHI.bEnableFrontFaceStencil"); }
	TEnumAsByte<enum ECompareFunction>& FrontFaceStencilTestField() { return *GetNativePointerField<TEnumAsByte<enum ECompareFunction>*>(this, "FDepthStencilStateInitializerRHI.FrontFaceStencilTest"); }
	TEnumAsByte<enum EStencilOp>& FrontFaceStencilFailStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.FrontFaceStencilFailStencilOp"); }
	TEnumAsByte<enum EStencilOp>& FrontFaceDepthFailStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.FrontFaceDepthFailStencilOp"); }
	TEnumAsByte<enum EStencilOp>& FrontFacePassStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.FrontFacePassStencilOp"); }
	bool& bEnableBackFaceStencilField() { return *GetNativePointerField<bool*>(this, "FDepthStencilStateInitializerRHI.bEnableBackFaceStencil"); }
	TEnumAsByte<enum ECompareFunction>& BackFaceStencilTestField() { return *GetNativePointerField<TEnumAsByte<enum ECompareFunction>*>(this, "FDepthStencilStateInitializerRHI.BackFaceStencilTest"); }
	TEnumAsByte<enum EStencilOp>& BackFaceStencilFailStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.BackFaceStencilFailStencilOp"); }
	TEnumAsByte<enum EStencilOp>& BackFaceDepthFailStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.BackFaceDepthFailStencilOp"); }
	TEnumAsByte<enum EStencilOp>& BackFacePassStencilOpField() { return *GetNativePointerField<TEnumAsByte<enum EStencilOp>*>(this, "FDepthStencilStateInitializerRHI.BackFacePassStencilOp"); }
	char& StencilReadMaskField() { return *GetNativePointerField<char*>(this, "FDepthStencilStateInitializerRHI.StencilReadMask"); }
	char& StencilWriteMaskField() { return *GetNativePointerField<char*>(this, "FDepthStencilStateInitializerRHI.StencilWriteMask"); }
};

