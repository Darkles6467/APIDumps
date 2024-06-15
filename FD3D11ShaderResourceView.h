#pragma once

#include "BaseDeclarations.h"
#include "FRHIShaderResourceView.h"
#include "FRHIResource.h"

struct FD3D11ShaderResourceView : FRHIShaderResourceView
{
	char __padding[0x10L];
	TRefCountPtr<ID3D11ShaderResourceView>& ViewField() { return *GetNativePointerField<TRefCountPtr<ID3D11ShaderResourceView>*>(this, "FD3D11ShaderResourceView.View"); }

	// Functions

};

