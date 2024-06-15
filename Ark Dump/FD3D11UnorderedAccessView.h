#pragma once

#include "BaseDeclarations.h"
#include "FRHIUnorderedAccessView.h"
#include "FRHIResource.h"

struct FD3D11UnorderedAccessView : FRHIUnorderedAccessView
{
	char __padding[0x18L];
	TRefCountPtr<ID3D11UnorderedAccessView>& ViewField() { return *GetNativePointerField<TRefCountPtr<ID3D11UnorderedAccessView>*>(this, "FD3D11UnorderedAccessView.View"); }
	void * IHVResourceHandleField() { return GetNativePointerField<void *>(this, "FD3D11UnorderedAccessView.IHVResourceHandle"); }

	// Functions

};

