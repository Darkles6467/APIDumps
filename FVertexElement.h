#pragma once

#include "BaseDeclarations.h"
struct FVertexElement
{
	char __padding[0x8L];
	char& StreamIndexField() { return *GetNativePointerField<char*>(this, "FVertexElement.StreamIndex"); }
	char& OffsetField() { return *GetNativePointerField<char*>(this, "FVertexElement.Offset"); }
	TEnumAsByte<enum EVertexElementType>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EVertexElementType>*>(this, "FVertexElement.Type"); }
	char& AttributeIndexField() { return *GetNativePointerField<char*>(this, "FVertexElement.AttributeIndex"); }
	unsigned __int16& StrideField() { return *GetNativePointerField<unsigned __int16*>(this, "FVertexElement.Stride"); }
	unsigned __int16& bUseInstanceIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FVertexElement.bUseInstanceIndex"); }
};

