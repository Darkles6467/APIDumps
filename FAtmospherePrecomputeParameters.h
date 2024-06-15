#pragma once

#include "BaseDeclarations.h"
struct FAtmospherePrecomputeParameters
{
	char __padding[0x2cL];
	float& DensityHeightField() { return *GetNativePointerField<float*>(this, "FAtmospherePrecomputeParameters.DensityHeight"); }
	float& DecayHeight_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FAtmospherePrecomputeParameters.DecayHeight_DEPRECATED"); }
	int& MaxScatteringOrderField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.MaxScatteringOrder"); }
	int& TransmittanceTexWidthField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.TransmittanceTexWidth"); }
	int& TransmittanceTexHeightField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.TransmittanceTexHeight"); }
	int& IrradianceTexWidthField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.IrradianceTexWidth"); }
	int& IrradianceTexHeightField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.IrradianceTexHeight"); }
	int& InscatterAltitudeSampleNumField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.InscatterAltitudeSampleNum"); }
	int& InscatterMuNumField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.InscatterMuNum"); }
	int& InscatterMuSNumField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.InscatterMuSNum"); }
	int& InscatterNuNumField() { return *GetNativePointerField<int*>(this, "FAtmospherePrecomputeParameters.InscatterNuNum"); }

	// Functions

};

