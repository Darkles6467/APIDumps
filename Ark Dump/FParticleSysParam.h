#pragma once

#include "BaseDeclarations.h"
struct FParticleSysParam
{
	char __padding[0x40L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FParticleSysParam.Name"); }
	TEnumAsByte<enum EParticleSysParamType>& ParamTypeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSysParamType>*>(this, "FParticleSysParam.ParamType"); }
	float& ScalarField() { return *GetNativePointerField<float*>(this, "FParticleSysParam.Scalar"); }
	float& Scalar_LowField() { return *GetNativePointerField<float*>(this, "FParticleSysParam.Scalar_Low"); }
	FVector& VectorField() { return *GetNativePointerField<FVector*>(this, "FParticleSysParam.Vector"); }
	FVector& Vector_LowField() { return *GetNativePointerField<FVector*>(this, "FParticleSysParam.Vector_Low"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FParticleSysParam.Color"); }

	// Functions

};

