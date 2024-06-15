#pragma once

#include "BaseDeclarations.h"
#include "IDynamicRHIModule.h"
#include "IModuleInterface.h"

struct FD3D11DynamicRHIModule : IDynamicRHIModule
{
	char __padding[0x138L];
	FD3D11Adapter& ChosenAdapterField() { return *GetNativePointerField<FD3D11Adapter*>(this, "FD3D11DynamicRHIModule.ChosenAdapter"); }
	DXGI_ADAPTER_DESC& ChosenDescriptionField() { return *GetNativePointerField<DXGI_ADAPTER_DESC*>(this, "FD3D11DynamicRHIModule.ChosenDescription"); }

	// Functions

	void FindAdapter() { NativeCall<void>(this, "FD3D11DynamicRHIModule.FindAdapter"); }
	bool IsSupported() { return NativeCall<bool>(this, "FD3D11DynamicRHIModule.IsSupported"); }
};

