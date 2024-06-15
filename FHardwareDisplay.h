#pragma once

#include "BaseDeclarations.h"
struct FHardwareDisplay
{
	char __padding[0x41cL];
	unsigned int& CurrentModeWidthField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareDisplay.CurrentModeWidth"); }
	unsigned int& CurrentModeHeightField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareDisplay.CurrentModeHeight"); }
	FieldArray<wchar_t, 260> GPUCardNameField() { return {this, "FHardwareDisplay.GPUCardName"}; }
	unsigned int& GPUDedicatedMemoryMBField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareDisplay.GPUDedicatedMemoryMB"); }
	FieldArray<wchar_t, 260> GPUDriverVersionField() { return {this, "FHardwareDisplay.GPUDriverVersion"}; }
};

