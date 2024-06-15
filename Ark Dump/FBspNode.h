#pragma once

#include "BaseDeclarations.h"
struct FBspNode
{
	char __padding[0x40L];
	int& iVertPoolField() { return *GetNativePointerField<int*>(this, "FBspNode.iVertPool"); }
	int& iSurfField() { return *GetNativePointerField<int*>(this, "FBspNode.iSurf"); }
	int& iVertexIndexField() { return *GetNativePointerField<int*>(this, "FBspNode.iVertexIndex"); }
	unsigned __int16& ComponentIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBspNode.ComponentIndex"); }
	unsigned __int16& ComponentNodeIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBspNode.ComponentNodeIndex"); }
	int& ComponentElementIndexField() { return *GetNativePointerField<int*>(this, "FBspNode.ComponentElementIndex"); }
	int& iFrontField() { return *GetNativePointerField<int*>(this, "FBspNode.iFront"); }
	int& iPlaneField() { return *GetNativePointerField<int*>(this, "FBspNode.iPlane"); }
	int& iCollisionBoundField() { return *GetNativePointerField<int*>(this, "FBspNode.iCollisionBound"); }
	FieldArray<char, 2> iZoneField() { return {this, "FBspNode.iZone"}; }
	char& NumVerticesField() { return *GetNativePointerField<char*>(this, "FBspNode.NumVertices"); }
	char& NodeFlagsField() { return *GetNativePointerField<char*>(this, "FBspNode.NodeFlags"); }
	FieldArray<int, 2> iLeafField() { return {this, "FBspNode.iLeaf"}; }
};

