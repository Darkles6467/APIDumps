#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FVertexElement.h"

struct FVertexFactory : FRenderResource
{
	char __padding[0x328L];
	None& gap350Field() { return *GetNativePointerField<None*>(this, "FVertexFactory.gap350"); }

	// Functions

	FVertexElement * AccessPositionStreamComponent(FVertexElement * result, const FVertexStreamComponent * Component, char AttributeIndex) { return NativeCall<FVertexElement *, FVertexElement *, const FVertexStreamComponent *, char>(this, "FVertexFactory.AccessPositionStreamComponent", result, Component, AttributeIndex); }
	FVertexElement * AccessStreamComponent(FVertexElement * result, const FVertexStreamComponent * Component, char AttributeIndex) { return NativeCall<FVertexElement *, FVertexElement *, const FVertexStreamComponent *, char>(this, "FVertexFactory.AccessStreamComponent", result, Component, AttributeIndex); }
	void InitDeclaration(TArray<FVertexElement,TFixedAllocator<16> > * Elements, const FVertexFactory::DataType * InData) { NativeCall<void, TArray<FVertexElement,TFixedAllocator<16> > *, const FVertexFactory::DataType *>(this, "FVertexFactory.InitDeclaration", Elements, InData); }
	void InitPositionDeclaration(const TArray<FVertexElement,TFixedAllocator<16> > * Elements) { NativeCall<void, const TArray<FVertexElement,TFixedAllocator<16> > *>(this, "FVertexFactory.InitPositionDeclaration", Elements); }
	void OffsetInstanceStreams(FRHICommandList * RHICmdList, unsigned int FirstVertex) { NativeCall<void, FRHICommandList *, unsigned int>(this, "FVertexFactory.OffsetInstanceStreams", RHICmdList, FirstVertex); }
	void OffsetPositionInstanceStreams(FRHICommandList * RHICmdList, unsigned int FirstVertex) { NativeCall<void, FRHICommandList *, unsigned int>(this, "FVertexFactory.OffsetPositionInstanceStreams", RHICmdList, FirstVertex); }
	void ReleaseRHI() { NativeCall<void>(this, "FVertexFactory.ReleaseRHI"); }
	void Set(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FVertexFactory.Set", RHICmdList); }
	void SetPositionStream(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FVertexFactory.SetPositionStream", RHICmdList); }
};

