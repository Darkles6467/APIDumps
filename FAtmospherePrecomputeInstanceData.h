#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FAtmospherePrecomputeInstanceData : FComponentInstanceDataBase
{
	char __padding[0x108L];
	FAtmospherePrecomputeParameters& PrecomputeParameterField() { return *GetNativePointerField<FAtmospherePrecomputeParameters*>(this, "FAtmospherePrecomputeInstanceData.PrecomputeParameter"); }
	FByteBulkData& TransmittanceDataField() { return *GetNativePointerField<FByteBulkData*>(this, "FAtmospherePrecomputeInstanceData.TransmittanceData"); }
	FByteBulkData& IrradianceDataField() { return *GetNativePointerField<FByteBulkData*>(this, "FAtmospherePrecomputeInstanceData.IrradianceData"); }
	FByteBulkData& InscatterDataField() { return *GetNativePointerField<FByteBulkData*>(this, "FAtmospherePrecomputeInstanceData.InscatterData"); }

	// Functions

	bool MatchesComponent(const UActorComponent * Component) { return NativeCall<bool, const UActorComponent *>(this, "FAtmospherePrecomputeInstanceData.MatchesComponent", Component); }
};

