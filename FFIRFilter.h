#pragma once

#include "BaseDeclarations.h"
struct FFIRFilter
{
	char __padding[0x30L];
	float& LastOutputField() { return *GetNativePointerField<float*>(this, "FFIRFilter.LastOutput"); }
	TArray<float>& FilterWindowField() { return *GetNativePointerField<TArray<float>*>(this, "FFIRFilter.FilterWindow"); }
	TArray<float>& CoefficientsField() { return *GetNativePointerField<TArray<float>*>(this, "FFIRFilter.Coefficients"); }
	int& CurrentStackField() { return *GetNativePointerField<int*>(this, "FFIRFilter.CurrentStack"); }
};

