#pragma once

#include "BaseDeclarations.h"
struct FOpenGLSamplerStateData
{
	enum EGLSamplerData
	{
		EGLSamplerData_WrapS = 0x0,
		EGLSamplerData_WrapT = 0x1,
		EGLSamplerData_WrapR = 0x2,
		EGLSamplerData_LODBias = 0x3,
		EGLSamplerData_MagFilter = 0x4,
		EGLSamplerData_MinFilter = 0x5,
		EGLSamplerData_MaxAniso = 0x6,
		EGLSamplerData_CompareMode = 0x7,
		EGLSamplerData_CompareFunc = 0x8,
		EGLSamplerData_Num = 0x9,
	};

	char __padding[0x24L];
	int& WrapSField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.WrapS"); }
	int& WrapTField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.WrapT"); }
	int& WrapRField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.WrapR"); }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.LODBias"); }
	int& MagFilterField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.MagFilter"); }
	int& MinFilterField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.MinFilter"); }
	int& MaxAnisotropyField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.MaxAnisotropy"); }
	int& CompareModeField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.CompareMode"); }
	int& CompareFuncField() { return *GetNativePointerField<int*>(this, "FOpenGLSamplerStateData.CompareFunc"); }
};

