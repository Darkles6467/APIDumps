#pragma once

#include "BaseDeclarations.h"
struct ARRAY_INFO
{
	char __padding[0x30L];
	int& DimensionField() { return *GetNativePointerField<int*>(this, "ARRAY_INFO.Dimension"); }
	unsigned int * BufferConformanceMarkField() { return GetNativePointerField<unsigned int *>(this, "ARRAY_INFO.BufferConformanceMark"); }
	unsigned int * BufferVarianceMarkField() { return GetNativePointerField<unsigned int *>(this, "ARRAY_INFO.BufferVarianceMark"); }
	unsigned int * MaxCountArrayField() { return GetNativePointerField<unsigned int *>(this, "ARRAY_INFO.MaxCountArray"); }
	unsigned int * OffsetArrayField() { return GetNativePointerField<unsigned int *>(this, "ARRAY_INFO.OffsetArray"); }
	unsigned int * ActualCountArrayField() { return GetNativePointerField<unsigned int *>(this, "ARRAY_INFO.ActualCountArray"); }
};

