#pragma once

#include "BaseDeclarations.h"
#include "FRHIShaderResourceView.h"
#include "FRHIResource.h"

struct FOpenGLShaderResourceView : FRHIShaderResourceView
{
	char __padding[0x38L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLShaderResourceView.Resource"); }
	unsigned int& TargetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLShaderResourceView.Target"); }
	int& LimitMipField() { return *GetNativePointerField<int*>(this, "FOpenGLShaderResourceView.LimitMip"); }
	unsigned __int64& ModificationVersionField() { return *GetNativePointerField<unsigned __int64*>(this, "FOpenGLShaderResourceView.ModificationVersion"); }
	char& FormatField() { return *GetNativePointerField<char*>(this, "FOpenGLShaderResourceView.Format"); }
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLShaderResourceView.OpenGLRHI"); }
	bool& OwnsResourceField() { return *GetNativePointerField<bool*>(this, "FOpenGLShaderResourceView.OwnsResource"); }

	// Functions

};

