#pragma once

#include "BaseDeclarations.h"
#include "FRHIRenderQuery.h"
#include "FRHIResource.h"

struct FD3D11RenderQuery : FRHIRenderQuery
{
	char __padding[0x18L];
	TRefCountPtr<ID3D11Query>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Query>*>(this, "FD3D11RenderQuery.Resource"); }
	unsigned __int64& ResultField() { return *GetNativePointerField<unsigned __int64*>(this, "FD3D11RenderQuery.Result"); }
	ERenderQueryType& QueryTypeField() { return *GetNativePointerField<ERenderQueryType*>(this, "FD3D11RenderQuery.QueryType"); }

	// Functions

};

