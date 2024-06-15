#pragma once

#include "BaseDeclarations.h"
struct FGPUDriverInfo
{
	char __padding[0x58L];
	unsigned int& VendorIdField() { return *GetNativePointerField<unsigned int*>(this, "FGPUDriverInfo.VendorId"); }
	FString& DeviceDescriptionField() { return *GetNativePointerField<FString*>(this, "FGPUDriverInfo.DeviceDescription"); }
	FString& ProviderNameField() { return *GetNativePointerField<FString*>(this, "FGPUDriverInfo.ProviderName"); }
	FString& InternalDriverVersionField() { return *GetNativePointerField<FString*>(this, "FGPUDriverInfo.InternalDriverVersion"); }
	FString& UserDriverVersionField() { return *GetNativePointerField<FString*>(this, "FGPUDriverInfo.UserDriverVersion"); }
	FString& DriverDateField() { return *GetNativePointerField<FString*>(this, "FGPUDriverInfo.DriverDate"); }

	// Functions

	FGPUDriverInfo * operator=(const FGPUDriverInfo * __that) { return NativeCall<FGPUDriverInfo *, const FGPUDriverInfo *>(this, "FGPUDriverInfo.operator=", __that); }
	FString * GetUnifiedDriverVersion(FString * result) { return NativeCall<FString *, FString *>(this, "FGPUDriverInfo.GetUnifiedDriverVersion", result); }
	bool IsValid() { return NativeCall<bool>(this, "FGPUDriverInfo.IsValid"); }
};

