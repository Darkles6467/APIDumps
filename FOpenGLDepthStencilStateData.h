#pragma once

#include "BaseDeclarations.h"
struct FOpenGLDepthStencilStateData
{
	char __padding[0x34L];
	bool& bZEnableField() { return *GetNativePointerField<bool*>(this, "FOpenGLDepthStencilStateData.bZEnable"); }
	bool& bZWriteEnableField() { return *GetNativePointerField<bool*>(this, "FOpenGLDepthStencilStateData.bZWriteEnable"); }
	unsigned int& ZFuncField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.ZFunc"); }
	bool& bStencilEnableField() { return *GetNativePointerField<bool*>(this, "FOpenGLDepthStencilStateData.bStencilEnable"); }
	bool& bTwoSidedStencilModeField() { return *GetNativePointerField<bool*>(this, "FOpenGLDepthStencilStateData.bTwoSidedStencilMode"); }
	unsigned int& StencilFuncField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilFunc"); }
	unsigned int& StencilFailField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilFail"); }
	unsigned int& StencilZFailField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilZFail"); }
	unsigned int& StencilPassField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilPass"); }
	unsigned int& CCWStencilFuncField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.CCWStencilFunc"); }
	unsigned int& CCWStencilFailField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.CCWStencilFail"); }
	unsigned int& CCWStencilZFailField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.CCWStencilZFail"); }
	unsigned int& CCWStencilPassField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.CCWStencilPass"); }
	unsigned int& StencilReadMaskField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilReadMask"); }
	unsigned int& StencilWriteMaskField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDepthStencilStateData.StencilWriteMask"); }
};

