#pragma once

#include "BaseDeclarations.h"
struct FInteriorSettings
{
	char __padding[0x24L];
	float& ExteriorVolumeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorVolume"); }
	float& ExteriorTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorTime"); }
	float& ExteriorLPFField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorLPF"); }
	float& ExteriorLPFTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorLPFTime"); }
	float& InteriorVolumeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorVolume"); }
	float& InteriorTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorTime"); }
	float& InteriorLPFField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorLPF"); }
	float& InteriorLPFTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorLPFTime"); }

	// Functions

};

