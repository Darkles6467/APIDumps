#pragma once

#include "BaseDeclarations.h"
struct FVertexStreamComponent
{
	char __padding[0x10L];
	char& OffsetField() { return *GetNativePointerField<char*>(this, "FVertexStreamComponent.Offset"); }
	char& StrideField() { return *GetNativePointerField<char*>(this, "FVertexStreamComponent.Stride"); }
	TEnumAsByte<enum EVertexElementType>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EVertexElementType>*>(this, "FVertexStreamComponent.Type"); }
	bool& bUseInstanceIndexField() { return *GetNativePointerField<bool*>(this, "FVertexStreamComponent.bUseInstanceIndex"); }

	// Functions

	FVertexStreamComponent * operator=(const FVertexStreamComponent * __that) { return NativeCall<FVertexStreamComponent *, const FVertexStreamComponent *>(this, "FVertexStreamComponent.operator=", __that); }
};

