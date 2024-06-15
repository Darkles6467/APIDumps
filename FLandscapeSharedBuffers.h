#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FLandscapeSharedBuffers : FRefCountedObject
{
	char __padding[0x40L];
	int& SharedBuffersKeyField() { return *GetNativePointerField<int*>(this, "FLandscapeSharedBuffers.SharedBuffersKey"); }
	int& NumIndexBuffersField() { return *GetNativePointerField<int*>(this, "FLandscapeSharedBuffers.NumIndexBuffers"); }
	int& SubsectionSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeSharedBuffers.SubsectionSizeVerts"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "FLandscapeSharedBuffers.NumSubsections"); }
	FLandscapeVertexBuffer * VertexBufferField() { return GetNativePointerField<FLandscapeVertexBuffer *>(this, "FLandscapeSharedBuffers.VertexBuffer"); }
	FLandscapeSharedBuffers::FLandscapeIndexRanges * IndexRangesField() { return GetNativePointerField<FLandscapeSharedBuffers::FLandscapeIndexRanges *>(this, "FLandscapeSharedBuffers.IndexRanges"); }
	FLandscapeSharedAdjacencyIndexBuffer * AdjacencyIndexBuffersField() { return GetNativePointerField<FLandscapeSharedAdjacencyIndexBuffer *>(this, "FLandscapeSharedBuffers.AdjacencyIndexBuffers"); }
	bool& bUse32BitIndicesField() { return *GetNativePointerField<bool*>(this, "FLandscapeSharedBuffers.bUse32BitIndices"); }

	// Functions

};

